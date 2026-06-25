#include <iostream>
#include "clsMyString.h"

using namespace std;

int main() {
    clsMyString s1;

    cout << "S1  = " << s1.Value << endl;

    s1.Value = "Mohammed";
    cout << "S1  = " << s1.Value << endl;

    s1.Value = "Mohammed2";
    cout << "S1  = " << s1.Value << endl;

    s1.Value = "Mohammed3";
    cout << "S1  = " << s1.Value << endl;

    cout << "\nUndo:\n";
    cout << "_____________\n\n";

    s1.Undo();
    cout << "S1  after undo = " << s1.Value << endl;

    s1.Undo();
    cout << "S1  after undo = " << s1.Value << endl;

    s1.Undo();
    cout << "S1  after undo = " << s1.Value << endl;

    cout << "\nRedo:\n";
    cout << "_____________\n\n";

    s1.Redo();
    cout << "S1  after Redo = " << s1.Value << endl;

    s1.Redo();
    cout << "S1  after Redo = " << s1.Value << endl;

    s1.Redo();
    cout << "S1  after Redo = " << s1.Value << endl;

    return 0;
}