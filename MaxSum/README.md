## 调试

原本代码是：

for (int i= center+1; i<= right; i++)

{
	rights += a[i];

	if (rights > s2)

		s2 = rights;

}

但是 rights 写成了 right。
