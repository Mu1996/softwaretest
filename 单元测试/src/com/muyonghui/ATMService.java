package com.muyonghui;

public class ATMService {
  private IDBConnection dbconn;
  public ATMService(IDBConnection db){
	  this.dbconn=db;
  }
  
  public void withDraw(String cardNo,int amount){
	  Account a=dbconn.getAccount(cardNo);
//	  此处有bug：
//	  因为你输入的取钱金额是不能大于你的余额，不然余额将变成负数。
//	  与实际不符
	  int balance=a.getBalance()-amount;
	  a.setBalance(balance);
	  dbconn.updateAccount(a);
  }
  
  public void deposit(String cardNo, int amount){
	  Account a=dbconn.getAccount(cardNo);
//	  此处有bug：
//	  输入存钱金额，应该将余额相加，而不应该是减去
//	  与实际不符
	  int balance=a.getBalance()-amount;
	  a.setBalance(balance);
	  dbconn.updateAccount(a);
  }
  
  public void transfer(String fromCardNo, String toCardNo, int amount){
	  Account a=dbconn.getAccount(fromCardNo);
	  Account b=dbconn.getAccount(toCardNo);
	  int aBalance=a.getBalance()-amount;
	  int bBalance=b.getBalance()+amount;
//	  此处有bug：
//	  输入转账金额是不能大于你的余额，不然余额将变成负数。
//	  与实际不符
	  a.setBalance(aBalance);
	  b.setBalance(bBalance);
	  dbconn.updateAccount(a);
	  dbconn.updateAccount(a);
	  
  }
  
  public int inquiry(String cardNo){
	  Account a=dbconn.getAccount(cardNo);
	  return a.getBalance();
	  
  }
}
