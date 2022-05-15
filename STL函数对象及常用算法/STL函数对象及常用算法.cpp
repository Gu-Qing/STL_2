/*
* STL函数对象：
* 1.重载函数调用操作符的类，其对象常称为函数对象
* 2.函数对象使用重载的()时，行为类似函数调用，也叫仿函数
* 3.本质：函数对象(仿函数)是一个类，不是一个函数
* 函数对象的使用：
* 1.函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
* 2.函数对象超出普通函数的概念，函数对象可以有自己的状态
* 3.函数对象可以作为参数传递
* 
* 谓词：
* 1.返回bool类型的仿函数称为谓词
* 2.如果operator()接受一个参数，那么叫做一元谓词
* 3.如果operator()接受两个参数，那么叫做二元谓词
* 
* 内建函数对象：
* STL内建了一些函数对象
* 1.算术仿函数
* 2.关系仿函数
* 3.逻辑仿函数
* 用法：
* 1.这些仿函数所产生的对象，用法和一般函数完全相同
* 2.使用内建函数对象，需要引入头文件：#include <functional>
* --------------------------
* 1.算术仿函数
* 实现四则运算。其中negate是一元运算，其他都是二元运算
*	tempalte<class T> T plus<T> //加法仿函数
*	tempalte<class T> T minus<T> //减法仿函数
*	template<class T> T multiplies<T> //乘法仿函数
*	template<class T> T divides<T> //除法仿函数
*	template<class T> T modulus<T> //取模仿函数
*	template<class T> T negate<T> //取反仿函数
* 
* 2.关系仿函数
* 实现关系对比
*	template<class T> bool equal_to<T> //等于
*	template<class T> bool not_equal_to<T> //不等于
*	template<class T> bool greater<T> //大于
*	template<class T> bool greater_equal<T> //大于等于
*	template<class T> bool less<T> //小于
*	template<class T> bool less_equal<T> //小于等于
* 
* 3.逻辑仿函数
* 实现逻辑运算
*	template<class T> bool logical_and<T> //逻辑与
*	template<class T> bool logical_or<T> //逻辑或
*	template<class T> bool logical_not<T> //逻辑非
* 
* ----------------------------------------------------------------------
* 
* STL-常用算法
* 1.算法主要是由头文件<algorithm> <functional> <numeric> 组成
* 2.<algorithm> 是所有STL头文件中最大的一个，范围涉及到比较、交换、查找、遍历、复制、修改等
* 3.<numeric> 体积很小，只包含几个在序列上面进行简单数学运算的函数模板
* 4.<functional> 定义了一些模板类，用以声明函数对象
* ---------------
* 1.常用遍历算法 (algorithm)
*	for_each	//遍历容器
*		for_each(iterator beg, iterator end, _func); //_func是函数或函数对象
*	transform	//搬运容器到另一个容器中
*		//beg1是原容器的开始迭代器，end1是原容器的结束迭代器，beg2是目标容器开始迭代器,_func是函数或函数对象
*		transform(iterator beg1, iterator end1, iterator beg2, _func); 
* 
* 2.常用查找算法 (algorithm)
*	find	//查找元素
*		find(iterator beg, iterator end, value); //找到返回指定元素的迭代器，找不到返回结束迭代器
*	find_if	//按条件查找元素
*		find_if(iterator beg, iterator end, _Pred); //_Pred是函数或者谓词(返回bool类型的仿函数)
*	adjacent_find	//查找相邻重复元素，返回相邻元素的第一个位置的迭代器，没有返回结束迭代器
*		adjacent_find(iterator beg, iterator end);
*	binary_search	//二分查找法（无序序列中不可用）
*		bool bianry_search(iterator beg, iterator end, value); //查找指定元素，查到返回true，否则返回false
*	count	//统计元素个数
*		count(iterator beg, iterator end, value);
*	count_if	//按条件统计元素个数
*		count_if(iterator beg, iterator end, _Pred); //_Pred是谓词
* 
* 3.常用排序算法
*	sort	//对容器内元素进行排序
*		sort(iterator beg, iterator end, _Pred); //_Pred是谓词
*	random_shuffle	//洗牌，指定范围内的元素随机调整次序
*		random_shuffle(iterator beg, iterator end);
*	merge	//容器元素合并，并存储到另一容器中（归并算法）
*		//两个容器必须是有序的，且两个容器的排序方式一致，dest是目标容器开始迭代器
*		merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*	reverse	//反转指定范围的元素
*		reverse(iterator beg, iterator end);
* 
* 4.常用拷贝和替换算法
*	copy	//容器内指定范围的元素拷贝到另一容器中
*		copy(iterator beg, iterator end, iterator dest); //dest是目标起始迭代器
*	replace	//将容器内指定范围的所有旧元素修改为新元素
*		replace(iterator beg, iterator end, oldvalue, newvalue);
*	replace_if	//容器内指定范围满足条件的元素替换为新元素
*		replace(iterator beg, iterator end, _Pred, newValue);
*	swap	//互换两个容器的元素
*		swap(container c1, container c2); // c1和c2是容器
* 
* 5.常用算术生成算法 (numeric)
*	accumulate	//计算容器元素累计总和
*		accumulate(iterator beg, iterator end, value); //value是起始累加值
*	fill	//向容器中添加元素
*		fill(iterator beg, iterator end, value); //value是填充值
* 
* 6.常用集合算法
*	set_intersection	//求两个容器的交集(两个集合必须是有序序列)
*		//返回目标容器的最后一个元素的迭代器地址
*		set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*	set_union	//求两个容器的并集
*		//返回并集中最后一个元素的位置迭代器
*		set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*	set_difference	//求两个容器的差集
*		v1: 0 1 2 3 4 5
*		v2: 3 4 5 6 7 8
*		v1和v2的差集——v1中不是v1和v2的交集的数：0 1 2
*		v2和v1的差集——v2中不是v1和v2的交集的数：6 7 8
*		set_difference(iterator beg1, iterator beg1, iterator beg2, iterator end2, iterator dest);
*/