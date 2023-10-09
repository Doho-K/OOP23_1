#include "OOP_Project_Qt.h"
#include "qpushbutton.h"
#include "qstring.h"
using namespace std;

OOP_Project_Qt::OOP_Project_Qt(QWidget *parent)
    : QMainWindow(parent)
{
    main_ui.setupUi(this);

    connect(main_ui.recipeButton, SIGNAL(clicked()), this, SLOT(recipe_ButtonClicked()));
    connect(main_ui.dateButton, SIGNAL(clicked()), this, SLOT(date_ButtonClicked()));
}

OOP_Project_Qt::~OOP_Project_Qt()
{}

void OOP_Project_Qt::recipe_ButtonClicked() {


    recipe_ui.setupUi(this);
}

class RecipeLabel : QLabel {
    private:
        //recipe_data

        void getListItemClicked() {

        }

    public:
        RecipeLabel(QString s) : QLabel(s) {

        }
};

void OOP_Project_Qt::date_ButtonClicked() {
    date_ui.setupUi(this);
}