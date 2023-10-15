#include "greeter.h"

void Planner::sort() {
    this->dateList.sort();
}
void Planner::editPlan(int editDateNum, date editDate) { //planner 수정, editDateNum: 수정할 객체index
    deletePlan(editDateNum);
    addPlan(editDate);
    sort();
}
void Planner::savePlan() { //Save plan in Txt File
    ofstream savePlanFile("Planner.txt");
    list<date>::iterator dateListIt; //iterator decleration

    if (savePlanFile.is_open()) { //When file is opened
        for (dateListIt = this->dateList.begin(); dateListIt != this->dateList.end(); dateListIt++) { //Loop until end of list
            //Read dateName, dateTime, Menu
            savePlanFile << dateListIt->getDateName() << "\n"; //Save Name
            savePlanFile << dateListIt->getDateTime() << "\n"; //Save date(yyyymmdd)
            savePlanFile << dateListIt->getMeal(0).getMeal_Name() << "\n"; //Breakfast
            savePlanFile << dateListIt->getMeal(0).getNum_people() << "\n"; // 아침 식수인원
            savePlanFile << dateListIt->getMeal(1).getMeal_Name() << "\n"; //Lunch
            savePlanFile << dateListIt->getMeal(1).getNum_people() << "\n"; // 점심 식수인원
            savePlanFile << dateListIt->getMeal(2).getMeal_Name() << "\n"; //Dinner
            savePlanFile << dateListIt->getMeal(2).getNum_people() << "\n"; // 저녁 식수인원

        }
        savePlanFile << "eof" << "\n";
    }
    else {
        cout << "Filestream Error";
    }
    sort();
    savePlanFile.close();

}

void Planner::loadPlan() { //txt파일에서 불러옴.
    fstream loadPlanFile;
    string newDateName; //새로 받아올 date의 이름을 저장할 변수
    int newDateTime; //새로 받아올 날짜를 저장할 변수
    string newMealName[3]; //새로 받아올 3개의 meal을 저장할 변수
    int personNum[3]; //식수인원
    loadPlanFile.open("Planner.txt");

    if (loadPlanFile.is_open()) { //파일이 정상적으로 열렸다면
        while (!loadPlanFile.eof()) { //파일을 끝까지 읽으며, 다 읽으면 반복문 탈출
            string tmp;
            getline(loadPlanFile, tmp);
            if (tmp == "eof") { break; }
            newDateName = tmp;
            getline(loadPlanFile, tmp);
            newDateTime = stoi(tmp);
            getline(loadPlanFile, tmp);
            newMealName[0] = tmp;
            getline(loadPlanFile, tmp);
            personNum[0] = stoi(tmp);

            getline(loadPlanFile, tmp);
            newMealName[1] = tmp;
            getline(loadPlanFile, tmp);
            personNum[1] = stoi(tmp);

            getline(loadPlanFile, tmp);
            newMealName[2] = tmp;
            getline(loadPlanFile, tmp);
            personNum[2] = stoi(tmp);

            //새로운 date객체를 만들어 dateList에 push.
            date newDate(newDateName, newDateTime);

            newDate.addMeal(0, newMealName[0], personNum[0]); //date객체에 meal추가
            newDate.addMeal(1, newMealName[1], personNum[1]);
            newDate.addMeal(2, newMealName[2], personNum[2]);

            this->dateList.push_back(newDate);
        }
    }
    else {
        cout << "Filestream Error";
    }
    sort();
    loadPlanFile.close();

}


void Planner::reviewPlan() { //Show whole Plan
    list<date>::iterator dateListIt; //Iterator declare
    this->dateList.sort(); //Sorting plan
    //Print everything looping whole list
    for (dateListIt = this->dateList.begin(); dateListIt != this->dateList.end(); dateListIt++) {
        cout << "Plan Name: " << dateListIt->getDateName() << "\n";
        cout << "Plan Date: " << dateListIt->getDateTime() << "\n";
        cout << "breakfast: " << dateListIt->getmealName(0) << "\n";
        cout << "breakfast: " << dateListIt->getmealName(1) << "\n";
        cout << "breakfast: " << dateListIt->getmealName(2) << "\n";
    }
}

list<date> Planner::getPlan() {
    return dateList;
}

date Planner::searchPlan(int dateTime) { //Search plan and return actual date
    list<date>::iterator dateListIt; //Declare iterator, indicate node in list

    //Search node for certain date(dateTime)
    for (dateListIt = this->dateList.begin(); dateListIt != this->dateList.end(); dateListIt++) {
        if (dateTime == dateListIt->getDateTime()) { //When node is matched
            return *dateListIt; //Return Node
        }
    }
}

date Planner::searchPlan(string dateName) { //Overload searchPlan
    list<date>::iterator dateListIt; //반복자(iterator) 선언, 리스트의 특정 노드를 가리킴

    //dateList 순회(begin->end)하며 특정 이름의 노드(date)를 검색함
    for (dateListIt = this->dateList.begin(); dateListIt != this->dateList.end(); dateListIt++) {
        if (dateName == dateListIt->getDateName()) { //검색하려는 것과 노드가 일치한다면
            return *dateListIt; //반복자가 가리키는 노드를 리턴함.
        }
    }
}

list<date> Planner::searchPlan(int startDateTime, int endDateTime) { //특정 기간 내에 속하는 모든 dateList 반환
    list<date> returnDateList;
    date tempDate; //임시 저장 변수
    list<date>::iterator dateListIt; //반복자(iterator) 선언, 리스트의 특정 노드를 가리킴

    //dateList 순회(begin->end)하며 특정 이름의 노드(date)를 검색함
    for (dateListIt = this->dateList.begin(); dateListIt != this->dateList.end(); dateListIt++) {
        if (dateListIt->getDateTime() >= startDateTime && dateListIt->getDateTime() <= endDateTime) {
            tempDate = *dateListIt;
            returnDateList.push_back(tempDate);
        }
    }
    return returnDateList;
}
int Planner::dateOrder(int dateTime) { //datetime에 해당하는 date가 몇 번째 리스트에 있는지 반환.
    list<date>::iterator dateListIt; //Declare iterator, indicate node in list
    int dateOrderCount = 0; //date객체 순서(index)

    //Search node for certain date(dateTime)
    for (dateListIt = this->dateList.begin(); dateListIt != this->dateList.end(); dateListIt++) {
        if (dateListIt->getDateTime() == dateTime) {
            return dateOrderCount;
        }
        dateOrderCount++;
    }
    return -1; //해당 사항 없다면 -1 반환
}
void Planner::addPlan(date newDate) { //Add date to planner
    this->dateList.push_back(newDate);
    sort();
}

void Planner::deletePlan(int dateNum) { //Delete dateNum's date
    list<date>::iterator dateListIt = this->dateList.begin();
    for (int i = 0; i < dateNum; i++) {
        dateListIt++;
    }
    this->dateList.erase(dateListIt);
}