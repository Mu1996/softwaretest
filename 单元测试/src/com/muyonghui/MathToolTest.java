package com.muyonghui;

import static org.junit.Assert.*;
import org.junit.*;

public class MathToolTest {
	MathTool mathTool = new MathTool();
	int a[] = {9,7,8};
	int b[] = {7,9,8};
	int c[] = {7,8,9};
	int d[] = {7,9,8,9};
	int e[] = {1};
	int f[] = {-9,-8,-7};
	
	@Test
	public void testAdd() {
		assertEquals(9, mathTool.getMax(a));
		assertEquals(9, mathTool.getMax(b));
		assertEquals(9, mathTool.getMax(c));
		assertEquals(9, mathTool.getMax(d));
		assertEquals(1, mathTool.getMax(e));
		assertEquals(-7, mathTool.getMax(f));
		assertEquals(9, mathTool.getMax(a));
	}
}
