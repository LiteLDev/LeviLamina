#pragma once
#include "Core.h"
class ExtendedCertificate {
public:
	ExtendedCertificate(const ExtendedCertificate&) = delete;
	ExtendedCertificate& operator=(const ExtendedCertificate&) = delete;
	ExtendedCertificate() = delete;
	MCINLINE static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> getXuid(class Certificate const& a0) {
		return ((class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>(*)(class Certificate const&))dlsym("?getXuid@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@@Z"))(a0);
	} 
	MCINLINE static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> getIdentityName(class Certificate const& a0) {
		return ((class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>(*)(class Certificate const&))dlsym("?getIdentityName@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@@Z"))(a0);
	}

#if 0
//   bad fun  

	MCINLINE static  class mce::UUID  getIdentity(class Certificate const & a0){
return (( class mce::UUID (*)(class Certificate const &))dlsym("?getIdentity@ExtendedCertificate@@SA?AVUUID@mce@@AEBVCertificate@@@Z"))(a0);}
#endif
};
class Certificate;
