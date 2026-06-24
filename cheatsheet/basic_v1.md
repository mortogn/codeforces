# Competitive Programming Cheatsheet

## Contents

1. **Snippet / Template**

2. **STL**
   - 2.1 Vector
   - 2.2 Map
   - 2.3 Unordered Map
   - 2.4 Set
   - 2.5 Unordered Set
   - 2.6 Struct
   - 2.7 Pair
   - 2.8 Lambda Expression
   - 2.9 Sort
   - 2.10 Binary Search

3. **Basic**
   - 3.1 Traversal
   - 3.2 Two Pointers (Left / Right)
   - 3.3 Unordered Set as a "Seen / Used" Tracker

## 1. Template / Snippet

Basic starter code.

```cpp
// This needs g++ (GNU) compiler
#include <bits/stdc++.h>

using namespace std;

//write the solution here
void solve() {
    // use \n instead of endl, it's faster
    cout << "HELLO" << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
```

## 2. STL

### 2.1 Vector

Array of C++.

**Time Complexity**: O(n), O(1)

```cpp
void solve() {
    vector<int> nums(10); // length 10 vector
    vector<int> nums_without_length; // dynamic length vector

    nums.front(); // first element
    nums.back(); // last element

    auto it = nums.rbegin(); // reverse iterator, points to last element
    auto it = nums.begin(); // points to first element
}
```

#### Operations

- **Insert Element**:

```cpp
// puts 5 end of the vector
// IMPORTANT: If a length is declared
// this will be pushed to the end of the array (index 10);
nums.push_back(5); // O(1) time complexity
// push 10 to index 1
nums.insert(nums.begin() + 1, 10); // O(n) time complexity
nums[5] = 10; // O(1) time complexity
```

- **Access Element**:

```cpp
nums.at(3); // element as index 3
nums[3]; // same as before
// both are O(n)
```

- **Update Element**:

```cpp
nums[2] = 10; // O(n)
```

- **Delete Element**:

```cpp
// Delete last element
nums.pop_back(); // O(1)
// index 2 element (3rd element)
nums.erase(nums.begin() + 2); // O(n)
```

- **Size**:

```cpp
nums.size();
```

- **Empty**:

```cpp
nums.empty();

if(nums.empty()) {
    cout << "EMPTY VECTOR" << "\n";
}
```

- **Multi-Dimensional Vector**:

```cpp
vector<vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

### 2.2 Map

Store values with key,value pair. Elements are sorted by default.

**Time Complexity**: O(n), O(1)

```cpp
void solve() {
    // key type, value type
    map<int, string> map_1;
    map<int, string> id_to_name = {
        {44, "Abdullah"}
    }
}
```

#### Operations

- **Access Element**:

```cpp
// prints "Abdullah". Get element by key
// O(logN) time complexity
cout << id_to_name[44] << "\n";
```

- **Update Element**:

```cpp
// update element by key, O(logN) time complexity
id_to_name[44] = "Rahim";
id_to_name.at(44) = "Rahim";
```

- **Find Element**:

```cpp
// Finding element with key 2, O(logN)
auto it = id_to_name.find(2);

// Returns .end() it if element is not found
if (it != id_to_name.end())
    cout << it->first << " " << it->second;
else cout << "Key not Found!";
```

- **Delete Element**:

```cpp
// Deleting by key
id_to_name.erase(2); // O(logN)

// Deleting by iterator
id_to_name.erase(m.begin()); // O(logN)
```

### 2.3 Unordered Map

Provides fast access. Elements are not stored in order. It stores unique key value pair with hashing.

```cpp
void solve() {
    unordered_map<int, string> map_1;
    unordered_map<int, string> id_to_name = {
        {44, "Abdullah"}
    };
}
```

- **Insert Element**:

```cpp
map_1[0] = "Hello";
map_1.insert({3, "Bai"});
```

- **Access Element**:

```cpp
string val = map_1[0];
string val_2 = map.at(1);
```

- **Update Element**:

```cpp
map_1[5] = "Global";
map_1.at(6) = "Crisis";
```

- **Find Element**:

```cpp
// Finding element with key 2
auto it = map_1.find(2);

if (it != map_1.end())
    cout << it->first << ": " << it->second;
else cout << "Not Found";
```

- **Delete Element**:

```cpp
// Delete element which have key 2
map_1.erase(2);

// Delete first element
map_1.erase(map_1.begin());
```

### 2.4 Set

Stores unique elements in sorted order. Implemented as a Red-Black Tree (Self-Balancing BST). No duplicates allowed.

**Time Complexity**: O(log N) for insert, find, erase

```cpp
#include <set>

void solve() {
    set<int> s1;                           // empty set
    set<int> s2 = {3, 1, 4, 1, 5};        // duplicates are removed, sorted: {1, 3, 4, 5}

    // Traversing (always in sorted order)
    for (auto& x : s2)
        cout << x << " ";
    // Output: 1 3 4 5
}
```

#### Operations

- **Insert Element**:

```cpp
s.insert(10);      // O(log N), ignored if element already exists
s.insert({2, 3});  // insert multiple (C++11)
```

- **Access / Find Element**:

```cpp
// find() returns iterator to element, or end() if not found
auto it = s.find(3);  // O(log N)
if (it != s.end())
    cout << "Found: " << *it << "\n";

// count() returns 1 if exists, 0 otherwise
if (s.count(3))
    cout << "3 exists in the set\n";
```

- **Delete Element**:

```cpp
s.erase(3);                  // O(log N), remove by value
s.erase(s.begin());          // O(log N), remove by iterator
```

- **Size & Empty**:

```cpp
s.size();      // O(1)
s.empty();     // O(1), returns true if set is empty
```

- **Lower / Upper Bound**:

```cpp
set<int> s = {1, 3, 5, 7, 9};

auto lb = s.lower_bound(4);   // first element >= 4 → iterator to 5
auto ub = s.upper_bound(5);   // first element > 5  → iterator to 7

if (lb != s.end()) cout << *lb << "\n"; // 5
if (ub != s.end()) cout << *ub << "\n"; // 7
```

- **Clear Set**:

```cpp
s.clear();       // O(N), removes all elements
```

### 2.5 Unordered Set

Stores unique elements with no particular order. Uses a hash table internally. Faster than set, but no sorted traversal.

**Time Complexity**: O(1) average for insert, find, erase; O(N) worst-case (hash collisions)

```cpp
#include <unordered_set>

void solve() {
    unordered_set<int> us1;                           // empty unordered set
    unordered_set<int> us2 = {3, 1, 4, 1, 5};         // duplicates removed, order not guaranteed

    // Traversing (order is unpredictable)
    for (auto& x : us2)
        cout << x << " ";
    // Output: e.g. 4 1 3 5 (order may vary)
}
```

#### Operations

- **Insert Element**:

```cpp
us.insert(10);      // O(1) average, ignored if already exists
us.insert({2, 3});  // insert multiple (C++11)
```

- **Find Element**:

```cpp
auto it = us.find(3);  // O(1) average
if (it != us.end())
    cout << "Found: " << *it << "\n";

// count() returns 1 if exists, 0 otherwise
if (us.count(3))
    cout << "3 exists\n";
```

- **Update Element** (not directly allowed — erase + insert):

```cpp
// Replace 2 with 10 (no direct modification — would break hashing)
us.erase(2);       // O(1) average
us.insert(10);     // O(1) average
```

- **Delete Element**:

```cpp
us.erase(5);                  // O(1) average, remove by value
us.erase(us.begin());          // O(1) average, remove by iterator
```

- **Size & Empty**:

```cpp
us.size();      // O(1)
us.empty();     // O(1), returns true if set is empty
```

- **Clear Set**:

```cpp
us.clear();       // O(N), removes all elements
```

### 2.6 Struct

Custom data type that groups related variables (and functions) under a single name. Members are **public** by default (unlike `class`).

```cpp
struct Point {
    int x, y;                       // data members

    // Member function
    int sum() { return x + y; }
};

void solve() {
    Point p1 = {0, 1};              // braced initialization
    Point p2{3, 4};                 // uniform initialization (C++11)

    cout << p1.x << " " << p1.y;    // 0 1
    cout << p2.sum() << "\n";       // 7
}
```

#### Key Features

- **Access / Modify Members** — use `.` (dot) operator:

```cpp
Point p = {1, 2};
p.x = 10;                       // modify
cout << p.x << "\n";            // access → 10
```

- **Pointer to Struct** — use `->` (arrow) operator:

```cpp
Point p = {1, 2};
Point* ptr = &p;
cout << ptr->x << "\n";         // 1
```

- **Sorting with Struct** — use custom comparator:

```cpp
struct Student {
    string name;
    int score;
};

vector<Student> students = {{"Ali", 85}, {"Bai", 92}};

sort(students.begin(), students.end(),
    [](const Student& a, const Student& b) {
        return a.score > b.score;   // descending by score
    });
```

### 2.7 Pair

Simple container that holds two values together (can be different types). Used for returning two values from functions, key-value storage in maps, and lexicographical comparison.

```cpp
#include <utility>

void solve() {
    pair<int, string> p1 = {1, "Apple"};              // curly brace initialization
    pair<int, string> p2 = make_pair(2, "Banana");    // make_pair()

    cout << p1.first << " " << p1.second << "\n";     // 1 Apple
    cout << p2.first << " " << p2.second << "\n";     // 2 Banana
}
```

#### Operations

- **Access Values** — use `.first` and `.second`:

```cpp
pair<int, string> p = {1, "Geeks"};
cout << p.first << "\n";     // 1
cout << p.second << "\n";    // Geeks
```

- **Update Values**:

```cpp
pair<int, string> p = {1, "Geeks"};
p.first = 2;
p.second = "ForGeeks";
cout << p.first << " " << p.second;  // 2 ForGeeks
```

- **Structured Binding** (C++17) — unpack pair into variables:

```cpp
pair<int, string> p = {1, "Geeks"};
auto [number, text] = p;
cout << number << " " << text << "\n";  // 1 Geeks
```

- **Compare Pairs** — lexicographical: compares first, then second if equal:

```cpp
pair<int, int> p1 = {3, 5};
pair<int, int> p2 = {3, 7};
pair<int, int> p3 = {2, 5};

cout << (p1 == p2) << "\n";   // false (0) — 5 != 7
cout << (p1 < p2)  << "\n";   // true  (1) — 3==3, then 5<7
cout << (p1 > p3)  << "\n";   // true  (1) — 3>2
```

- **Swap Pairs**:

```cpp
pair<int, string> a = {1, "A"};
pair<int, string> b = {2, "B"};
a.swap(b);
// a = {2, "B"}, b = {1, "A"}
```

- **Nested Pair**:

```cpp
pair<int, pair<int, int>> p = {1, {2, 3}};
cout << p.first << "\n";           // 1
cout << p.second.first << "\n";    // 2
cout << p.second.second << "\n";   // 3
```

- **Pair in Vector**:

```cpp
vector<pair<int, int>> arr = {{1, 2}, {2, 4}, {3, 6}};
```

### 2.8 Lambda Expression

Anonymous inline function. Commonly used as comparators in `sort()`, predicates in `find_if()`, etc.

**Syntax**: `[capture](params) { body }`

```cpp
// Basic lambda
auto add = [](int a, int b) { return a + b; };
cout << add(3, 4) << "\n";   // 7
```

#### Capture Clause

```cpp
int x = 10;
int y = 20;

auto byVal = [=]()  { return x + y; };   // capture all by value
auto byRef = [&]()  { x++; return x; };  // capture all by reference
auto mixed = [x, &y]() { y = x + 1; };  // x by value, y by reference
```

| Clause    | Meaning                                |
| --------- | -------------------------------------- |
| `[]`      | No capture — only own params / globals |
| `[=]`     | Capture all by value                   |
| `[&]`     | Capture all by reference               |
| `[x, &y]` | `x` by value, `y` by reference         |

#### Common Uses

- **As a comparator**:

```cpp
sort(v.begin(), v.end(), [](const int& a, const int& b) {
    return a > b;   // descending
});
```

- **As a predicate**:

```cpp
auto it = find_if(v.begin(), v.end(), [](const int& a) {
    return a % 3 == 0;   // first element divisible by 3
});
if (it != v.end()) cout << *it << "\n";
```

### 2.9 Sort

Sorts elements in a container or array. Uses **Introsort** (hybrid: quicksort → heapsort → insertion sort). Requires random-access iterators.

**Time Complexity**: O(N log N)

```cpp
#include <algorithm>

void solve() {
    vector<int> v = {5, 3, 2, 1, 4};

    sort(v.begin(), v.end());         // ascending by default
    // v = {1, 2, 3, 4, 5}
}
```

#### Common Patterns

- **Sort Descending** — use `greater<>()`:

```cpp
sort(v.begin(), v.end(), greater<int>());   // {5, 4, 3, 2, 1}
```

- **Sort Array** — use pointer arithmetic:

```cpp
int arr[] = {5, 3, 2, 1, 4};
int n = sizeof(arr) / sizeof(arr[0]);
sort(arr, arr + n);                         // ascending
sort(arr, arr + n, greater<int>());         // descending
```

- **Sort Subrange** — sort only a portion:

```cpp
int arr[] = {10, 5, 8, 1, 7, 3};
sort(arr + 1, arr + 5);   // sorts indices 1..4 → {10, 1, 5, 7, 8, 3}
```

- **Custom Comparator (Lambda)** — most common in CP:

```cpp
// Sort by second value descending, then first ascending
vector<pair<int, int>> v = {{1, 5}, {2, 3}, {3, 5}};
sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
    if (a.second != b.second) return a.second > b.second;
    return a.first < b.first;
});
// Result: {1, 5}, {3, 5}, {2, 3}
```

- **Sort Struct by Field**:

```cpp
struct Point { int x, y; };
vector<Point> points = {{3, 5}, {1, 2}, {4, 1}};

sort(points.begin(), points.end(),
    [](const Point& a, const Point& b) { return a.x < b.x; });
// sorted by x ascending: {1,2}, {3,5}, {4,1}
```

### 2.10 Binary Search

Search algorithm for **sorted** arrays/vectors. Repeatedly halves the search space.

**Time Complexity**: O(log N) | **Space**: O(1) iterative, O(log N) recursive

```cpp
// Iterative (preferred in CP)
int binarySearch(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;  // avoids overflow vs (low+high)/2
        if (arr[mid] == x) return mid;
        if (arr[mid] < x)  low  = mid + 1;
        else               high = mid - 1;
    }
    return -1;  // not found
}
```

#### STL Built-ins (on sorted range)

- **`lower_bound`** — iterator to first element **>= x**:

```cpp
vector<int> v = {1, 3, 5, 7, 9};
auto it = lower_bound(v.begin(), v.end(), 5);
cout << *it << "\n";                        // 5
cout << it - v.begin() << "\n";             // index: 2
```

- **`upper_bound`** — iterator to first element **> x**:

```cpp
auto it = upper_bound(v.begin(), v.end(), 5);
cout << *it << "\n";                        // 7
```

- **`binary_search`** — returns `true` if value exists:

```cpp
cout << binary_search(v.begin(), v.end(), 5) << "\n";   // 1 (true)
cout << binary_search(v.begin(), v.end(), 4) << "\n";   // 0 (false)
```

- **Count occurrences** using both bounds:

> `lower_bound` gives the index where 3 **starts**, `upper_bound` gives the index just **after** the last 3. Subtracting the two iterators gives the count.

```cpp
vector<int> v = {1, 3, 3, 3, 5};

int count = upper_bound(v.begin(), v.end(), 3)
          - lower_bound(v.begin(), v.end(), 3);
cout << count << "\n";   // 3
```

## 3. Basic

### 3.1 Traversal

Common ways to loop over STL containers.

#### Range-based for loop (`for each`)

```cpp
vector<int> v = {1, 2, 3, 4, 5};

// by value (copy)
for (int x : v)
    cout << x << " ";

// by reference (no copy, can modify)
for (int& x : v)
    x *= 2;

// by const reference (no copy, read-only — preferred for complex types)
for (const auto& x : v)
    cout << x << " ";
```

#### Iterator loop

```cpp
vector<int> v = {1, 2, 3};

for (auto it = v.begin(); it != v.end(); ++it)
    cout << *it << " ";

// Reverse
for (auto it = v.rbegin(); it != v.rend(); ++it)
    cout << *it << " ";
```

#### Traversing each container

- **Vector**:

```cpp
vector<int> v = {1, 2, 3};
for (const auto& x : v)
    cout << x << " ";           // 1 2 3
```

- **Map** — each element is a `pair<key, value>`:

```cpp
map<int, string> m = {{1, "a"}, {2, "b"}};
for (const auto& [key, val] : m)            // structured binding (C++17)
    cout << key << ": " << val << "\n";

// Without structured binding
for (const auto& p : m)
    cout << p.first << ": " << p.second << "\n";
```

- **Unordered Map** — same syntax as map, but order is not guaranteed:

```cpp
unordered_map<int, string> um = {{1, "a"}, {2, "b"}};
for (const auto& [key, val] : um)
    cout << key << ": " << val << "\n";
```

- **Set** — always traverses in sorted order:

```cpp
set<int> s = {5, 1, 3, 2};
for (const auto& x : s)
    cout << x << " ";           // 1 2 3 5
```

- **Unordered Set** — order is not guaranteed:

```cpp
unordered_set<int> us = {5, 1, 3};
for (const auto& x : us)
    cout << x << " ";           // order may vary
```

- **2D Vector (Matrix)**:

```cpp
vector<vector<int>> matrix = {{1, 2}, {3, 4}, {5, 6}};
for (const auto& row : matrix)
    for (const auto& val : row)
        cout << val << " ";
```

### 3.2 Two Pointers (Left / Right)

Two integer indices that start at opposite ends of an array and move inward. Avoids expensive operations like `erase()` by **virtually shrinking** the array.

```
left = 0, right = n - 1

[  1,  5,  3,  8,  2  ]
 ^                  ^
left              right

Each step: pick from left or right, then advance that pointer inward.
```

**Why not `erase()`?**  
`v.erase(v.begin())` is O(N) — it shifts every element left. With left/right pointers, "removing" an element is just `left++` or `right--`, which is O(1).

| Operation | `erase(begin())` | Left pointer `left++` |
| --------- | ---------------- | --------------------- |
| Time      | O(N)             | O(1)                  |
| Memory    | modifies vector  | original untouched    |

#### Template

```cpp
int left = 0, right = n - 1;

while (left <= right) {
    if (/* pick from left */) {
        // use arr[left]
        left++;
    } else {
        // use arr[right]
        right--;
    }
}
```

### 3.3 Unordered Set as a "Seen / Used" Tracker

A common CP pattern: instead of erasing from a container (O(N)) or scanning with `find_if` (O(N)), keep a separate `unordered_set` to mark items as used/sold/visited. Membership check is O(1).

**Why not erase?** Erasing from the middle of a vector shifts elements — O(N). An `unordered_set` lookup/insert is O(1) average.

#### Template

```cpp
unordered_set<int> seen;

// Mark as used
seen.insert(x);

// Check if already used — O(1)
if (seen.count(x)) {
    // already used, skip
} else {
    seen.insert(x);
    // process x
}
```

#### Example — 799B T-shirt Buying

Each t-shirt has a unique price. A customer wants the cheapest shirt of their favourite colour that hasn't been sold yet. Naively scanning with `find_if` is O(N) per query — TLE on large input.

```cpp
// BAD: find_if scans the whole list every query — O(N) per query
auto it = find_if(prices.begin(), prices.end(), [&](int p) {
    return !sold.count(p);
});
```

```cpp
// GOOD: unordered_set tracks sold prices; inner loop skips with O(1) check
unordered_set<int> sold_price;

// per query: walk sorted prices for chosen colour, skip already-sold ones
while (true) {
    int price = color_to_prices[choice][idx];

    if (!sold_price.count(price)) {   // O(1) lookup
        sold_price.insert(price);     // O(1) insert
        break;
    }
    idx++;   // already sold, try next cheapest
}
```

> The set doesn't replace the vector — the vector still holds prices in sorted order. The set is just a fast "is this taken?" lookup that avoids re-scanning from the beginning.
