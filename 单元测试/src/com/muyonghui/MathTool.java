package com.muyonghui;

public class MathTool {
public int getMax(int[] arr) {
int max=0;
for (int index= 0; index < arr.length-1; index++) {
if (arr[index] > max)
max = arr[index];
}
return max;
}
public int getMin(int[] arr) {
int min=0;
for (int index= 0; index < arr.length-1; index++) {
if (arr[index] < min)
min = arr[index];
}
return min;
}
}
