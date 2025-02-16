std::vector<int> vec = {1, 2, 3};
for (int i = 0; i <= vec.size(); ++i) { // Error: Accesses vec[3], which is out of bounds
  std::cout << vec[i] << std::endl;
}

int arr[5];
for (int i = 0; i <= 5; i++) { // Error: Accesses arr[5], which is out of bounds
  arr[i] = i * 2;
}