std::vector<int> vec = {1, 2, 3};
for (int i = 0; i < vec.size(); ++i) { // Corrected: Stops before accessing vec[3]
  std::cout << vec[i] << std::endl;
}

int arr[5];
for (int i = 0; i < 5; i++) { // Corrected: Stops before accessing arr[5]
  arr[i] = i * 2;
}

//Using iterators is also a good method
for (int& element : vec) {
  std::cout << element << std::endl; //No more index out of bounds
}
