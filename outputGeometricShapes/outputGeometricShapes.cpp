#include <iostream>


using namespace std;
int shapeSize;
int geomShape;
int d;

int main()
{

    cout << "Choose a geometric shape: " << endl << "1. Full square" << endl << "2. Reverse triangle" << endl << "3. Triangle"<< endl << "4. Parallelogram" << endl << "5. Reverse parallelogram"<< endl << "6. Empty square" << endl;
    cin >> geomShape;


    switch(geomShape){
    case 1: {
        cout <<  "Enter size in *: " << endl;
        cin >> shapeSize;
        int p = shapeSize;
        for(d=0; d < shapeSize; d++){
           cout << endl;
            string repeat(p, '*');
            cout << repeat;
}
    }
        break;

    case 2: {
            cout <<  "Enter size in *: " << endl;
            cin >> shapeSize;
            int p = shapeSize;
            for(d=0; d < shapeSize; d++){
               cout << endl;
              string repeat(p, '*');
              cout << repeat;
               p--;
        }
    }
     break;
    case 3: {
        cout <<  "Enter size in *: " << endl;
        cin >> shapeSize;
        int p = 1;
        for(d=0; d < shapeSize; d++){
           cout << endl;
            string repeat(p, '*');
            cout << repeat;
            p++;

    }
}
    break;
    case 4: {
        cout <<  "Enter size in *: " << endl;
        cin >> shapeSize;
        int p=shapeSize;
        int p2=0;
        for(d=-1; d < shapeSize; d++){
            cout << endl;
             string repeat1(p, '*');
             string repeat2(p2, '_');

             cout << repeat2 << repeat1;
             p2++;

        }
    }
        break;
    case 5: {
        cout <<  "Enter size in *: " << endl;
        cin >> shapeSize;
        int p=shapeSize;
        int p2=shapeSize;
        for(d=-1; d < shapeSize; d++){
            cout << endl;
             string repeat1(p, '*');
             string repeat2(p2, '_');

             cout << repeat2 << repeat1;
            p2--;
        }
    }
    break;
    case 6: {
        cout << "Enter size in *: " << endl;
        cin >> shapeSize;
        int a=-1;
        int p=shapeSize;
        int p3=1;
        for(d=-1; d < shapeSize; d++){
            cout << endl;
             string repeat1(p, '*');
             string repeat2(p - 2, '_');
             string repeat3(p3, '*');
             a++;

        if(a==0|| a == shapeSize) {
             cout << repeat1;
        }
        else {
             cout << repeat3 << repeat2 << repeat3;
        }
        }
    }
break;

}
    cout << endl;


    return 0;
}

