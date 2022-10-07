// Time Complexity: O(n * log n)


std::vector<int> heapSort(std::vector<int> array) {

    // make min heap O(n)
    std::make_heap(array.begin(), array.end(), std::greater<>());

    std::vector<int> sortedArray = std::vector<int>();

    int arraySize = array.size();

    for (int i = 0; i < arraySize; i++) {

        // get the min from heap O(1)
        sortedArray.push_back(array.front());

        // delete the min from heap O(log n)
        std::pop_heap(array.begin(), array.end(), std::greater<>());
        array.pop_back();
    }

    return sortedArray;
}
