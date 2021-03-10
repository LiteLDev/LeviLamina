#include "pch.h"

Logger2 LOG2("logs\\crashes.log");

/*THook(void, "?initialize@CrashHandler@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z",
	std::string const& a, std::string const& b, std::string const& c) {
	original(a, "https://rink.hockeyapp.net/api/2/apps/64afd4a74b1e437c92eb88e43b131769/crashes/upload", c);
}

THook(void, "?dumpCrashHandlerAppCrashLog@CrashHelper@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00_J0V?$basic_string_span@$$CBD$0?0@gsl@@@Z",
	std::string const& a1, std::string const& a2, std::string const& a3, __time64_t a4, __int64 a5, unsigned int* a6) {
	LOG2 << "CrashTime: " << gettime()
		<< "\nPlatform: " << a2
		<< "\nCrashReport: \n" << a3 << "\n";
	return original(a1, a2, a3, a4, a5, a6);
}*/