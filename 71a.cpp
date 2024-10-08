    #include <bits/stdc++.h>

    using namespace std;

    int main() {
        ios::sync_with_stdio(0), cin.tie(0);

        int n;
        cin >> n;

        while(n--) { 

            string data;
            cin >> data;

            if(data.size() > 10){
                cout << data[0] << data.size() - 2 << data[data.size() - 1] << endl;
            }else{
                cout << data << endl;
            }
        }

        return 0;
    }
