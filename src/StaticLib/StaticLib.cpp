﻿#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end < begin)
	{
		return false;
	}

	for (item* p = begin; p != end - 1; p++)
	{
		for (item* q = begin + (end - begin - 1); q != p; q--)
		{
			if (q->key < p->key)
			{
				item tmp = *p;
				*p = *q;
				*q = tmp;
			}
		}
	}

	return true;
}
