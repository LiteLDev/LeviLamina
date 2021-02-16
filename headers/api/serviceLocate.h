#pragma once
#include <liteloader.h>
template<class T>
struct LocateS {
	LIAPI static T* _srv;
	T& operator*() {
		return *_srv;
	}
	T* operator->() {
		return _srv;
	}
	operator T& () {
		return *_srv;
	}
	static void assign(const T& srv) {
		#ifdef LITELOADER_EXPORTS
		//LOG("[LocateService] located",typeid(decltype(_srv)).name(),"->",(void*)&srv);
		#endif
		_srv = (T*)&srv;
	}
};
