#include "2Dtree.h"


using namespace std;

int main()
{

    fstream  fin("input100K.txt",ios::in);
    if (!fin)
        cout << "Error opening input file" << endl;
    else
    {
        vector<struct point> pointArr;
        struct point temp;
        int num=0;


        //timeofbuild(num);


        while(fin!=NULL)
        {
            fin>>temp.x_value;
            fin>>temp.y_value;
            pointArr.push_back(temp);
            num++;
        }
        class twoDtree mytree;
        for(int i=0;i<num-1;i++)
        {
            mytree.insert(pointArr[i]);
        }
      /*cout<<"before "<<mytree.numofnode()<<endl;
        mytree.deletion(pointArr[151]);
        cout<<"after "<<mytree.numofnode()<<endl;*/
        cout<<"2Dtree"<<" 100K"<<endl;
        cout<<"nodeinrange"<<endl;
        point low_p;
        point up_p;
        cout<<"input the lowbound of x ";
        cin>>low_p.x_value;
        cout<<"input the lowbound of y ";
        cin>>low_p.y_value;
        cout<<"input the upbound of x ";
        cin>>up_p.x_value;
        cout<<"input the upbound of y ";
        cin>>up_p.y_value;
        cout<<"2dtree"<<" 1M"<<endl;
        time_t Start1 = clock();
        cout<<"inrange: "<< "x=["<<low_p.x_value<<","<<up_p.x_value<<"] y=["<<low_p.y_value<<","<<up_p.y_value<<"]"<<endl;
        cout<<"nodes: "<<mytree.numinrange(low_p.x_value,up_p.x_value,low_p.y_value,up_p.y_value,pointArr);
        time_t End1 = clock();
        cout<<" cost: "<<End1-Start1<<" ms"<<endl;
        cout<<"nearestneighbor "<<endl;
        cout<<"input x ";
        cin>>temp.x_value;
        cout<<"input y ";
        cin>>temp.y_value;
        time_t Start2 = clock();
        cout<<"nearestnode of"<<"("<<temp.x_value<<","<<temp.y_value<<")"<<endl;
        cout<<"("<<mytree.nearestnode(temp).x_value<<','<<mytree.nearestnode(temp).y_value<<")";
        time_t End2 = clock();
        cout<<" cost: "<<End2-Start2<<" ms"<<endl;


    }

}
