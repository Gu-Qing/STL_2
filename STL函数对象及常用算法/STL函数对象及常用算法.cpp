/*
* STL��������
* 1.���غ������ò��������࣬����󳣳�Ϊ��������
* 2.��������ʹ�����ص�()ʱ����Ϊ���ƺ������ã�Ҳ�зº���
* 3.���ʣ���������(�º���)��һ���࣬����һ������
* ���������ʹ�ã�
* 1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
* 2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
* 3.�������������Ϊ��������
* 
* ν�ʣ�
* 1.����bool���͵ķº�����Ϊν��
* 2.���operator()����һ����������ô����һԪν��
* 3.���operator()����������������ô������Ԫν��
* 
* �ڽ���������
* STL�ڽ���һЩ��������
* 1.�����º���
* 2.��ϵ�º���
* 3.�߼��º���
* �÷���
* 1.��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
* 2.ʹ���ڽ�����������Ҫ����ͷ�ļ���#include <functional>
* --------------------------
* 1.�����º���
* ʵ���������㡣����negate��һԪ���㣬�������Ƕ�Ԫ����
*	tempalte<class T> T plus<T> //�ӷ��º���
*	tempalte<class T> T minus<T> //�����º���
*	template<class T> T multiplies<T> //�˷��º���
*	template<class T> T divides<T> //�����º���
*	template<class T> T modulus<T> //ȡģ�º���
*	template<class T> T negate<T> //ȡ���º���
* 
* 2.��ϵ�º���
* ʵ�ֹ�ϵ�Ա�
*	template<class T> bool equal_to<T> //����
*	template<class T> bool not_equal_to<T> //������
*	template<class T> bool greater<T> //����
*	template<class T> bool greater_equal<T> //���ڵ���
*	template<class T> bool less<T> //С��
*	template<class T> bool less_equal<T> //С�ڵ���
* 
* 3.�߼��º���
* ʵ���߼�����
*	template<class T> bool logical_and<T> //�߼���
*	template<class T> bool logical_or<T> //�߼���
*	template<class T> bool logical_not<T> //�߼���
* 
* ----------------------------------------------------------------------
* 
* STL-�����㷨
* 1.�㷨��Ҫ����ͷ�ļ�<algorithm> <functional> <numeric> ���
* 2.<algorithm> ������STLͷ�ļ�������һ������Χ�漰���Ƚϡ����������ҡ����������ơ��޸ĵ�
* 3.<numeric> �����С��ֻ��������������������м���ѧ����ĺ���ģ��
* 4.<functional> ������һЩģ���࣬����������������
* ---------------
* 1.���ñ����㷨 (algorithm)
*	for_each	//��������
*		for_each(iterator beg, iterator end, _func); //_func�Ǻ�����������
*	transform	//������������һ��������
*		//beg1��ԭ�����Ŀ�ʼ��������end1��ԭ�����Ľ�����������beg2��Ŀ��������ʼ������,_func�Ǻ�����������
*		transform(iterator beg1, iterator end1, iterator beg2, _func); 
* 
* 2.���ò����㷨 (algorithm)
*	find	//����Ԫ��
*		find(iterator beg, iterator end, value); //�ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������
*	find_if	//����������Ԫ��
*		find_if(iterator beg, iterator end, _Pred); //_Pred�Ǻ�������ν��(����bool���͵ķº���)
*	adjacent_find	//���������ظ�Ԫ�أ���������Ԫ�صĵ�һ��λ�õĵ�������û�з��ؽ���������
*		adjacent_find(iterator beg, iterator end);
*	binary_search	//���ֲ��ҷ������������в����ã�
*		bool bianry_search(iterator beg, iterator end, value); //����ָ��Ԫ�أ��鵽����true�����򷵻�false
*	count	//ͳ��Ԫ�ظ���
*		count(iterator beg, iterator end, value);
*	count_if	//������ͳ��Ԫ�ظ���
*		count_if(iterator beg, iterator end, _Pred); //_Pred��ν��
* 
* 3.���������㷨
*	sort	//��������Ԫ�ؽ�������
*		sort(iterator beg, iterator end, _Pred); //_Pred��ν��
*	random_shuffle	//ϴ�ƣ�ָ����Χ�ڵ�Ԫ�������������
*		random_shuffle(iterator beg, iterator end);
*	merge	//����Ԫ�غϲ������洢����һ�����У��鲢�㷨��
*		//������������������ģ�����������������ʽһ�£�dest��Ŀ��������ʼ������
*		merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*	reverse	//��תָ����Χ��Ԫ��
*		reverse(iterator beg, iterator end);
* 
* 4.���ÿ������滻�㷨
*	copy	//������ָ����Χ��Ԫ�ؿ�������һ������
*		copy(iterator beg, iterator end, iterator dest); //dest��Ŀ����ʼ������
*	replace	//��������ָ����Χ�����о�Ԫ���޸�Ϊ��Ԫ��
*		replace(iterator beg, iterator end, oldvalue, newvalue);
*	replace_if	//������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
*		replace(iterator beg, iterator end, _Pred, newValue);
*	swap	//��������������Ԫ��
*		swap(container c1, container c2); // c1��c2������
* 
* 5.�������������㷨 (numeric)
*	accumulate	//��������Ԫ���ۼ��ܺ�
*		accumulate(iterator beg, iterator end, value); //value����ʼ�ۼ�ֵ
*	fill	//�����������Ԫ��
*		fill(iterator beg, iterator end, value); //value�����ֵ
* 
* 6.���ü����㷨
*	set_intersection	//�����������Ľ���(�������ϱ�������������)
*		//����Ŀ�����������һ��Ԫ�صĵ�������ַ
*		set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*	set_union	//�����������Ĳ���
*		//���ز��������һ��Ԫ�ص�λ�õ�����
*		set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*	set_difference	//�����������Ĳ
*		v1: 0 1 2 3 4 5
*		v2: 3 4 5 6 7 8
*		v1��v2�Ĳ����v1�в���v1��v2�Ľ���������0 1 2
*		v2��v1�Ĳ����v2�в���v1��v2�Ľ���������6 7 8
*		set_difference(iterator beg1, iterator beg1, iterator beg2, iterator end2, iterator dest);
*/