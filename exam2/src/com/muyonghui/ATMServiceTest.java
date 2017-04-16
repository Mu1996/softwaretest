package com.muyonghui;

import static org.junit.Assert.*;

import org.junit.*;

public class ATMServiceTest {
	
	
	@Test
	public void testInquiry() {
		MockDbConnection db = new MockDbConnection();
		ATMService atm = new ATMService(db);
		assertEquals(300, atm.inquiry("1"));
		assertEquals(2000, atm.inquiry("2"));
	}
	
	@Test
	public void testWithDraw() {
		MockDbConnection db = new MockDbConnection();
		ATMService atm = new ATMService(db);
		atm.withDraw("1",200);
		assertEquals(100, atm.inquiry("1"));
		
		try {
			atm.withDraw("1",200);
			fail("超出余额限度，不能取出");
		} catch (RuntimeException e){
			assertTrue(true);

		}
		
	}
	
	@Test
	public void testDeposit() {
		MockDbConnection db = new MockDbConnection();
		ATMService atm = new ATMService(db);
		atm.deposit("1",200);
		assertEquals(500, atm.inquiry("1"));
		atm.deposit("1",-200);
		assertEquals(300, atm.inquiry("1"));
	}
	
	@Test
	public void testTransfer() {
		MockDbConnection db = new MockDbConnection();
		ATMService atm = new ATMService(db);
		atm.transfer("1","2",200);
		assertEquals(100, atm.inquiry("1"));
		assertEquals(2200, atm.inquiry("2"));
		try {
			atm.transfer("1","2",200);
			fail("超出余额限度，不能取出");
		} catch (RuntimeException e){
			assertTrue(true);

		}
	}
	
	
}
