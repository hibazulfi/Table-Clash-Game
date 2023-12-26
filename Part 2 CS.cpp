void Display_board(void)
{
    system("CLS");

    cout<<endl<<endl<<endl<<"\t\t\t\t\t                    TABLE-CLASH GAME                    "<<endl<<endl<<endl<<endl;
    cout << endl << endl;
    cout<<"\t\t\t\t\t Status : "<<status;
    cout << endl << endl;

    cout << "\t\t\t\t\t\t\t     |      |       " << endl;
    cout << "\t\t\t\t\t\t\t  " << display[0][0] << "  |  " << display[0][1] << "   |  " << display[0][2] << endl;
    cout << "\t\t\t\t\t\t\t_____|______|_______" << endl;
    cout << "\t\t\t\t\t\t\t     |      |       " << endl;
    cout << "\t\t\t\t\t\t\t  " << display[1][0] << "  |  " << display[1][1] << "   |  " << display[1][2] << endl;
    cout << "\t\t\t\t\t\t\t_____|______|_______" << endl;
    cout << "\t\t\t\t\t\t\t     |      |       " << endl;
    cout << "\t\t\t\t\t\t\t  " << display[2][0] << "  |  " << display[2][1] << "   |  " << display[2][2] << endl;
    cout << "\t\t\t\t\t\t\t     |      |       " << endl;
}