#pragma once
struct WPlayer;
struct Player;
#include <string>
#include <liteloader.h>
#include <stl\useful.h>
class NetworkIdentifier;
namespace liteloader {
	using std::string;
	LIAPI bool runcmd(const string& cmd);
	LIAPI bool runcmdAs(WPlayer, const string& cmd);
	LIAPI std::pair<bool, string> runcmdEx(const string& cmd);
	LIAPI string getIP(NetworkIdentifier&);
	LIAPI string getRealName(Player*);
	template<typename T>
	static inline void APPEND(string& r,T&& x) {
		r.append(S(std::forward<T>(x)));
		r.push_back(' ');
	}
	template<typename... T>
	static inline bool runcmdA(T&&... a) {
		string s;
		(APPEND(s,std::forward<T>(a)), ...);
		return runcmd(s);
	}
	template<typename N,typename... T>
	static inline bool runcmdAsA(N p,T&&... a) {
		string s;
		(APPEND(s, std::forward<T>(a)), ...);
		return runcmdAs(p, s);
	}
};
