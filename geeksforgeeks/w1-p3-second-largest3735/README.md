# W1 P3 Second Largest3735

## 📝 Problem Statement

_No explicit problem statement found; see Original README below._

---

## 📥 Input

_Input format not specified in original README._

---

## 📤 Output

_Output format not specified in original README._

---

## 🔍 Examples

_No examples provided in original README._

---

## 💡 Approach

_Approach not described in original README._

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

## 🔁 Original README

# 🚀 Second Largest Element in Array

## 📝 Problem Statement

Given an array of positive integers `arr[]`, return the **second largest distinct element** in the array. If such an element doesn't exist (i.e., all elements are equal), return `-1`.

> The second largest element **must not be equal** to the largest.

---

## 📊 Input Format

- **Array size**: `2 ≤ arr.size() ≤ 10⁵`
- **Array values**: `1 ≤ arr[i] ≤ 10⁵`

---

## 🧠 Approach

- Traverse the array once to find the largest and second largest distinct values.
- Use constant space (`O(1)`) and linear time (`O(n)`).
- Handle cases where the array has no second largest (e.g., `[10, 10, 10]`).

---

## ✅ Examples

| Input                  | Output | Explanation                                          |
|------------------------|--------|------------------------------------------------------|
| `[12, 35, 1, 10, 34, 1]` | `34`   | `35` is the largest, `34` is the second largest      |
| `[10, 5, 10]`           | `5`    | `10` is the largest, `5` is second largest           |
| `[10, 10, 10]`          | `-1`   | All elements are equal — no second largest           |

---

## 🧪 Constraints

- **Time Complexity**: `O(n)`
- **Auxiliary Space**: `O(1)`

---

## 📌 Tags

`Arrays` · `Searching` · `Algorithms` · `Data Structures`, `Loop`

---

## 🏢 Company Tags

`SAP Labs` · `Rockstand`
