#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    vector<int>arr={2,3,5,3,25,66,4,2,44,234,1};        //random unsorted array

    //1.Creating Max heap -means top element is largest

    /** By default initialization of Priority Queue creates Max heap */ 

    priority_queue<int,vector<int>>qu;                  //234 66 44 25 5 4 3 3 2 2 1

    //2.Creating Min heap
    
    priority_queue<int,vector<int>,greater<int>>pq;     //1 2 2 3 3 4 5 25 44 66 234 

    

return 0;
}

//*************Patterns************************* */


// 1. The "Top K" PatternThis is the most common giveaway. If the problem asks for the most, least, largest, or smallest $k$ elements, a heap is almost always the answer.Keywords: "Find the $k$ largest," "Top 10 most frequent," "Closest $k$ points to the origin."The Logic: Instead of sorting the entire list (which takes $O(n \log n)$), you can maintain a heap of size $k$ to do it in $O(n \log k)$.


//2. The "Dynamic Extremum" PatternIf you need to find the maximum or minimum element repeatedly while the data is constantly changing (elements being added or removed), a simple sorted array won't cut it because insertions are too slow.Keywords: "Find the median of a data stream," "Continuous tracking of the highest value."The Logic: Heaps allow you to find the best element in $O(1)$ and update the collection in $O(\log n)$.

//3. The "Greedy Merging" PatternWhen you have multiple sorted lists or "streams" and you need to combine them into one, or if you need to pick the two "cheapest" items to combine them into a new one.Keywords: "Merge $k$ sorted lists," "Minimum cost to connect sticks/ropes," "Huffman Coding."The Logic: You use the heap to always pick the smallest available head of the lists or the two smallest overall values.

//4. Scheduling and IntervalsMany "Best Fit" or "First Fit" problems involving time rely on heaps to keep track of when a resource (like a meeting room or a CPU) becomes free.Keywords: "Meeting rooms II," "Task scheduler," "Minimum number of platforms."The Logic: You store the "end times" in a Min-Heap. The top of the heap tells you the earliest a room will become available.