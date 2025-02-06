#include <QApplication>
#include <QLabel>
#include <QWidget>
#include <QCheckBox>

int main(int argc, char* argv[]){
	QApplication app(argc, argv);
	QLabel hello("<center>Hello World</center>");
	hello.setWindowTitle("my first QT");
	hello.resize(100, 100);
	QCheckBox checkbox("Case sensitive");
	checkbox.show();
	hello.show();
	return app.exec();
}

