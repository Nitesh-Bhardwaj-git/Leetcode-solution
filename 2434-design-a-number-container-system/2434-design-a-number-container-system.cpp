class NumberContainers {
public:
    unordered_map<int, int> store ; 
    unordered_map<int, set<int>> num_container ; 
    NumberContainers() {} 
    void change(int index, int number) {
        if(store.find(index)!=store.end() ){
           int val = store[index];
           if( val==index ) return ; 
           num_container[val].erase(index);
        }
        num_container[number].insert(index) ; 
        store[index] = number; 
    }
    int find(int number) {
        if(num_container[number].empty()) 
         return -1;
        return *(num_container[number].begin());
    }
};


/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */