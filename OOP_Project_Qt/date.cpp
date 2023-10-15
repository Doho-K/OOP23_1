#include "greeter.h"

date::date() {}
date::date(string dateName, int dateTime) { //Initialization Function: Requires Name of the date and actual time
    this->dateName = dateName;
    this->dateTime = dateTime;

}
bool date::operator>(const date& datePt) { //정렬을 위한 비교연산자 오버로딩
    return dateTime > datePt.dateTime;
}
bool date::operator<(const date& datePt) { //정렬을 위한 비교연산자 오버로딩
    return dateTime < datePt.dateTime;
}
void date::setMeal(int mealNum, Meal newMeal) { //Meal배열에 meal 저장([0]아침[1]점심[2]저녁
    mealArray[mealNum] = newMeal;
}
void date::addMeal(int mealNum, string Meal_Name, int person) { //아침[0], 점심[1], 저녁[2]에 식사 추가
    //사용자로부터 mealNum 받음
    //사용자로부터 meal name을 받음
    mealArray[mealNum].setMeal_name(Meal_Name);
    //사용자로부터 식수 인원 data 받음
    mealArray[mealNum].setNum_people(person);
    mealArray[mealNum].setMeal_Recipe(Meal_Name);
    mealArray[mealNum].setMealIngredient(Meal_Name);
}
//void addMeal(int mealNum, meal newMeal) { //아침[0], 점심[1], 저녁[2]에 식사 추가
//	mealArray[mealNum] = newMeal;
//}
void date::setMealName(int mealNum, string newMealName) {//Set Name of the Meal in Array
    mealNameArray[mealNum] = newMealName;
}
string date::getDateName() { //Return dateName as String
    return dateName;
}
int date::getDateTime() { //Return date Time as Int
    return dateTime;
}
Meal date::getMeal(int arrayNum) { //아침or 점심or 저녁 반환
    return mealArray[arrayNum];
}
string date::getmealName(int arrayNum) {// Return Name of meal: Require variable indicate meal number
    return mealNameArray[arrayNum];
}