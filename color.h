/**
 *@file color.h
 * @author dynamic_sakana (dynamicsakana@gmail.com)
 * @brief 可以将C风格和C++的字符串使用彩色输出到控制台
 * @version 0.1
 * @date 2024-10-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once
#include <iostream>

 /**
 *@brief 所有颜色类的基类
 *@author dynamic_sakana
 *
 */
class color {
protected:
	std::string content;
public:
	/**
	 *@brief Construct a new color object
	 * 
	 * @param a_content 内容
	 */
	color(std::string a_content);
	/**
	 *@brief Construct a new color object
	 * 
	 * @param a_content 内容
	 */
	color(const char* a_content);

	/**
	 *@brief 纯虚函数，用于打印content中的内容
	 * 
	 */
	virtual void print() const = 0;
};

/**
 *@brief 左移运算符的重载，用于将内容输出到控制台
 * 
 * @param cout 标准输出流对象的引用
 * @param content color对象，内含彩色文本
 * @return std::ostream& 标准输出流对象的引用
 */
inline std::ostream& operator << (std::ostream& cout, const color& content) {
	// 内联函数最好定义在头文件中
	// 内联函数与普通函数不同，其仅仅在本文件内可见，而不是全局可见的
	content.print();
	return cout;
}

/**
 *@brief 红色终端文本
 * 
 */
class red : public color {
public:
	// 在子类构造时如果没有显式调用父类的构造方法，将会尝试调用父类的无参构造函数
	// 如果父类没有无参构造函数，那么就必须显式调用父类的构造函数
	// 仅能通过初始化列表的方式显式调用父类的构造函数
	red(std::string a_content) : color(a_content) { }
	red(const char* a_content) : color(a_content) { }
	void print() const;
};

/**
 *@brief 绿色终端文本
 * 
 */
class green : public color {
public:
	green(std::string a_content) : color(a_content) { }
	green(const char* a_content) : color(a_content) { }
	void print() const;
};

/**
 *@brief 黄色终端文本
 * 
 */
class yellow : public color {
public:
	yellow(std::string a_content) : color(a_content) { }
	yellow(const char* a_content) : color(a_content) { }
	void print() const;
};

/**
 *@brief 蓝色终端文本
 * 
 */
class blue : public color {
public:
	blue(std::string a_content) : color(a_content) { }
	blue(const char* a_content) : color(a_content) { }
	void print() const;
};

/**
 *@brief 品红色（粉色）终端文本
 * 
 */
class pink : public color {
public:
	pink(std::string a_content) : color(a_content) { }
	pink(const char* a_content) : color(a_content) { }
	void print() const;
};

/**
 *@brief 青色终端文本
 * 
 */
class cyan : public color {
public:
	cyan(std::string a_content) : color(a_content) { }
	cyan(const char* a_content) : color(a_content) { }
	void print() const;
};