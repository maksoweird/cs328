#include<iostream>
using namespace std;

float computeArea(float width, float height);
void logToConsoleArea(float area);

int main(){
	float rectWidth, rectHeight, rectArea;
	cout<<"Enter width and heighht:";
	cin>>rectWidth>>rectHeight;
	rectArea = computeArea(rectWidth, rectHeight);
	logToConsoleArea(rectArea);
	
}
float computeArea(float width, float height){
	return width * height;
	
}

void logToConsoleArea(float area){
	cout<<"rectangle area:"<<area;
}
