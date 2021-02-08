#pragma once
#include<string>
#include<sstream>
#include<string_view>
#include<stl\useful.h>
using std::string,std::string_view;
inline void __FORMAT(std::string& s,string_view format)
{
	s.append(format);
}

template <typename T, typename... Targs>
inline void __FORMAT(std::string& out,string_view format, T&& value, Targs&&... Fargs)
{
	for (int i=0; i<format.size(); i++) {
		if (format[i] == '%') {
			if (format[i + 1] == '%') {
				i++;
				out.push_back('%');
				continue;
			}
			out.append(S(std::forward<T>(value)));
			__FORMAT(out, format.substr(i + 1), std::forward<Targs>(Fargs)...);
			return;
		}
		else {
			out.push_back(format[i]);
		}
	}
}
struct FORMAT {
	string inner;
	template<typename... T>
	FORMAT(string_view f,T&&... a) {
		__FORMAT(inner, f, std::forward<T>(a)...);
	}
	operator string && () {
		return std::move(inner);
	}
};