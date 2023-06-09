# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) 三路快速排序（Three-Way Quick Sort）
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [簡介](#簡介)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 簡介
三路快速排序（Three-Way Quick Sort）是快速排序的一種變體，針對存在大量重複元素的情況進行優化。<br>
它將數列分成小於、等於和大於基準點的三部分，這樣可以有效處理數列中有大量重複元素的情況，提高排序效率。<br>
<br>
三路快速排序的過程如下：<br>
- 選擇基準點： 從數列中選擇一個基準點。這個基準點將用於將數列劃分為三個部分。
- 分區：
  - 使用三路分區的方式將數列劃分為小於、等於和大於基準點的三部分。
  - 遍歷數列，將小於基準點的元素放在左側，等於基準點的元素放在中間，大於基準點的元素放在右側。
-遞迴應用：
  - 對小於和大於基準點的兩個子數列遞迴應用三路快速排序。
  - 這表示分別對小於基準點的子數列和大於基準點的子數列進行三路快速排序，直到子數列的大小為0或1。
- 合併結果：
  - 將排序後的小於基準點的子數列、等於基準點的子數列和大於基準點的子數列合併為最終排序結果。

<br>

由於三路快速排序對於重複元素有較好的處理能力，<br>
因此在存在大量重複元素的情況下，它的性能通常比標準的快速排序更好。

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/algorithm-quick-sort-three-way/blob/main/C%2B%2B/main.cpp) - Three-Way Quick Sort (C++)

---

## 參考資料
* [RUNOOB - 三路排序算法](https://www.runoob.com/data-structures/3way-qiuck-sort.html)<br>
* [opengenus - 3 Way Partitioning Quick Sort](https://iq.opengenus.org/3-way-partitioning-quick-sort/) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
