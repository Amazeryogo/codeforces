/* string p = to_string(n);
            int o = 1;
            int k = p.size();
            if (n==1){cout << 1 << endl;}
            else{
            if (powten(p) == true){k = k-1; cout << 9*(k) << "\n";}
            else{
            for (long unsigned int j = 1; j < p.size(); j++){
                        if (p[j] != p[0]) {o = 0;break;}
                }
            int l = p[0] - '0';
            cout << (9*(k-1)+ l-1+o) << "\n";
            }
            }*/
// broken btw
