#include <iostream>
#include <ctime>
#include <string>

using namespace std;

//void trans(int mat[4][4]);

//int up(int crr[4][4], int m);

int left(int brr[], int n);

int right(int brr[], int n);

//int down(int crr[4][4], int m);

int new_number();


int new_number() {
    int nov;
    while (nov != 2 && nov != 4) {
        nov = rand() % 5;
    }
    return nov;
}


/*void trans(int mat[4][4]) {
    int t;
    for (int i = 0; i < 4; ++i) {
        for (int j = i; j < 4; ++j) {
            t = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = t;
        }
    }
}*/


/*int up(int crr[][], int m, int n) {
    trans(crr);
    left(crr[0], m);
    left(crr[1], m);
    left(crr[2], m);
    left(crr[3], m);
    trans(crr);
    return crr[][];
}*/


/*int down(int crr[4][4], int m) {
    trans(crr);
    right(crr[0], m);
    right(crr[1], m);
    right(crr[2], m);
    right(crr[3], m);
    trans(crr);
    return crr[4][4];
}*/


int left(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            for (int j = i; j < n; j++) {
                if (arr[j] != 0) {
                    arr[i] = arr[j];
                    arr[j] = 0;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i + 1]) {
            arr[i] = arr[i] + arr[i + 1];
            arr[i + 1] = 0;
        }


    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            for (int j = i; j < n; j++) {
                if (arr[j] != 0) {
                    arr[i] = arr[j];
                    arr[j] = 0;
                    break;
                }
            }
        }
    }

}


int right(int arr[], int n) {
    for (int i = (n - 1); i >= 0; i--) {
        if (arr[i] == 0) {
            for (int j = i; j >= 0; j--) {
                if (arr[j] != 0) {
                    arr[i] = arr[j];
                    arr[j] = 0;
                    break;
                }
            }
        }
    }
    for (int i = (n - 1); i >= 0; i--) {
        if (arr[i] == arr[i - 1]) {
            arr[i] = arr[i] + arr[i - 1];
            arr[i - 1] = 0;
        }
    }
    for (int i = (n - 1); i >= 0; i--) {
        if (arr[i] == 0) {
            for (int j = i; j >= 0; j--) {
                if (arr[j] != 0) {
                    arr[i] = arr[j];
                    arr[j] = 0;
                    break;
                }
            }
        }
    }
}


/*int left(int brr[], int n) {
    if (brr[n - 4] == 0 && brr[n - 2] == 0 && brr[n - 3] == 0) {
        brr[n - 4] = brr[n - 1];
        brr[n - 1] = 0;
    }
    if (brr[n - 3] == brr[n - 4]) {
        brr[n - 4] = brr[n - 3] + brr[n - 4];
        brr[n - 3] = 0;
        brr[n - 3] = brr[n - 2];
        brr[n - 2] = brr[n - 1];
        brr[n - 1] = 0;
    }
    if (brr[n - 2] == brr[n - 3]) {
        brr[n - 3] = brr[n - 2] + brr[n - 3];
        brr[n - 2] = 0;
        brr[n - 2] = brr[n - 1];
        brr[n - 1] = 0;
        if (brr[n - 4] == 0) {
            brr[n - 4] = brr[n - 3];
            brr[n - 3] = brr[n - 2];
            brr[n - 2] = brr[n - 1];
            brr[n - 1] = 0;
        }
    }
    if (brr[n - 1] == brr[n - 2]) {
        brr[n - 2] = brr[n - 1] + brr[n - 2];
        brr[n - 1] = 0;
        if (brr[n - 3] == 0) {
            brr[n - 3] = brr[n - 2];
            brr[n - 2] = 0;
        }
    }
    if (brr[n - 1] == brr[n - 3] && brr[n - 2] == 0) {
        brr[n - 3] = brr[n - 3] + brr[n - 1];
        brr[n - 1] = 0;
        if (brr[n - 4] == 0) {
            brr[n - 4] = brr[n - 3];
            brr[n - 3] = 0;
        }
    }
    if (brr[n - 1] == brr[n - 4] && brr[n - 2] == 0 && brr[n - 3] == 0) {
        brr[n - 4] = brr[n - 4] + brr[n - 1];
        brr[n - 1] = 0;
    }
    if (brr[n - 2] == brr[n - 4] && brr[n - 3] == 0) {
        brr[n - 4] = brr[n - 4] + brr[n - 2];
        brr[n - 2] = 0;
        brr[n - 3] = brr[n - 1];
        brr[n - 1] = 0;
    }
    if (brr[n - 4] == 0) {
        brr[n - 4] = brr[n - 3];
        brr[n - 3] = brr[n - 2];
        brr[n - 2] = brr[n - 1];
        brr[n - 1] = 0;
    }
    if (brr[n - 3] == 0) {
        brr[n - 3] = brr[n - 2];
        brr[n - 2] = brr[n - 1];
        brr[n - 1] = 0;
    }
    if (brr[n - 2] == 0) {
        brr[n - 2] = brr[n - 1];
        brr[n - 1] = 0;
    }
    return 0;
}*/


/*int right(int brr[], int n) {
    if (brr[n - 1] == 0 && brr[n - 2] == 0 && brr[n - 3] == 0) {
        brr[n - 1] = brr[n - 4];
        brr[n - 4] = 0;
    }
    if (brr[n - 2] == brr[n - 1]) {
        brr[n - 1] = brr[n - 2] + brr[n - 1];
        brr[n - 2] = 0;
        brr[n - 2] = brr[n - 3];
        brr[n - 3] = brr[n - 4];
        brr[n - 4] = 0;
    }                                                                          //brr[n-2]==brr[n-3]
    if (brr[n - 3] == brr[n - 2]) {                                            //brr[n-3]==brr[n-2]
        brr[n - 2] = brr[n - 3] + brr[n - 2];                                  //brr[n-1]==brr[n-4]
        brr[n - 3] = 0;                                                        //brr[n-4]==brr[n-1]
        brr[n - 3] = brr[n - 4];
        brr[n - 4] = 0;
        if (brr[n - 1] == 0) {
            brr[n - 1] = brr[n - 2];
            brr[n - 2] = brr[n - 3];
            brr[n - 3] = brr[n - 4];
            brr[n - 4] = 0;
        }
    }
    if (brr[n - 4] == brr[n - 3]) {
        brr[n - 3] = brr[n - 4] + brr[n - 3];
        brr[n - 4] = 0;
        if (brr[n - 2] == 0) {
            brr[n - 2] = brr[n - 3];
            brr[n - 3] = 0;
        }
    }
    if (brr[n - 4] == brr[n - 2] && brr[n - 3] == 0) {     //brr[n-2]==brr[n-3]
        brr[n - 2] = brr[n - 2] + brr[n - 4];              //brr[n-3]==brr[n-2]
        brr[n - 4] = 0;                                    //brr[n-1]==brr[n-4]
        if (brr[n - 1] == 0) {                             //brr[n-4]==brr[n-1]
            brr[n - 1] = brr[n - 2];
            brr[n - 2] = 0;
        }
    }
    if (brr[n - 4] == brr[n - 1] && brr[n - 3] == 0 && brr[n - 2] == 0) {
        brr[n - 1] = brr[n - 1] + brr[n - 4];
        brr[n - 4] = 0;
    }
    if (brr[n - 3] == brr[n - 1] && brr[n - 2] == 0) {
        brr[n - 1] = brr[n - 1] + brr[n - 3];
        brr[n - 3] = 0;
        brr[n - 2] = brr[n - 4];
        brr[n - 4] = 0;
    }
    if (brr[n - 1] == 0) {
        brr[n - 1] = brr[n - 2];
        brr[n - 2] = brr[n - 3];
        brr[n - 3] = brr[n - 4];
        brr[n - 4] = 0;
    }
    if (brr[n - 2] == 0) {
        brr[n - 2] = brr[n - 3];
        brr[n - 3] = brr[n - 4];
        brr[n - 4] = 0;
    }
    if (brr[n - 3] == 0) {
        brr[n - 3] = brr[n - 4];
        brr[n - 4] = 0;
    }
    return 0;
}*/


int main() {
    srand(time(NULL));
    int n, m;
    cout << "paste size" << endl;
    cin >> n >> m;
    int a = rand() % n;
    int b = rand() % m;
    int iter = 0;
    int max = 0;
    int t;
    int kostil = -1;
    int u = 1;
    string action;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = 0;
        }
    }
    arr[rand() % n][rand() % m] = new_number();
    for (;;) {
        if (arr[a][b] == 0) {
            arr[a][b] = new_number();
            break;
        } else {
            a = rand() % n;
            b = rand() % m;
        }
    }
    for (; max != 2048;) {
        if (u == 0) {
            break;
        }
        if (action == "left" || action == "right" || action == "up" || action == "down") {
            iter++;
            for (;;) {
                if (arr[a][b] == 0) {
                    arr[a][b] = new_number();
                    a = rand() % n;
                    b = rand() % m;
                    break;

                } else {
                    a = rand() % n;
                    b = rand() % m;
                }
            }
        } else if (kostil >= 0) {
            cout << "mistake" << endl;

        }
        kostil++;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << arr[i][j] << "  ";
            }
            cout << endl;
        }
        cout << "choose the action" << endl << "move:" << iter << endl;
        cin >> action;
        if (action == "left") {
            for (int i = 0; i < n; i++) {
                left(arr[i], m);
            }
        }
        if (action == "up") {
            for (int i = 0; i < n; ++i) {
                for (int j = i; j < m; ++j) {
                    t = arr[i][j];
                    arr[i][j] = arr[j][i];
                    arr[j][i] = t;
                }
            }
            for (int i = 0; i < n; i++) {
                left(arr[i], m);
            }
            for (int i = 0; i < n; ++i) {
                for (int j = i; j < m; ++j) {
                    t = arr[i][j];
                    arr[i][j] = arr[j][i];
                    arr[j][i] = t;
                }
            }
        }
        if (action == "right") {
            for (int i = 0; i < n; i++) {
                right(arr[i], m);
            }
        }
        if (action == "down") {
            for (int i = 0; i < n; ++i) {
                for (int j = i; j < m; ++j) {
                    t = arr[i][j];
                    arr[i][j] = arr[j][i];
                    arr[j][i] = t;
                }
            }
            for (int i = 0; i < n; i++) {
                right(arr[i], m);
            }
            for (int i = 0; i < n; ++i) {
                for (int j = i; j < m; ++j) {
                    t = arr[i][j];
                    arr[i][j] = arr[j][i];
                    arr[j][i] = t;
                }
            }
        }
        //max=2048;
        u = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (arr[i][j] == 0) {
                    u = 1;
                }
            }
        }
        if (iter > 512) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    if (arr[i][j] > max) {
                        max = arr[i][j];
                    }
                }
            }
        }
    }
    if (u == 0) {
        cout << "GG,Game Over";
    } else {
        cout << "congrats!!!,you win" << endl;
    }

    return 0;
}