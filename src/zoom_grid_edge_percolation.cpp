#include <iostream>
#include "graph.cpp"
using namespace std;

int main()
{
    cout << "STARTING EXPERIMENTATION: EDGE PERCOLATIONS ON A GRID GRAPH" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "||||||||||||||||||||||||||||||||" << endl;
        cout << "GRAPH SEED NUMBER " << i << endl;
        cout << "||||||||||||||||||||||||||||||||" << endl;
        srand(i);
        double q = 0.0;
        while(q <= 0.21)
        {
            //cout << q << ": ";
            Graph gridtest(32);
            gridtest.edge_percolation(q);
            q += 0.01;
            //cout << "--------------------" << endl;
        }
    }

    cout << "END OF EXPERIMENTATION: EDGE PERCOLATIONS ON A GRID GRAPH" << endl;
}
