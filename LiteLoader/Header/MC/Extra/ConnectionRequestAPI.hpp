//Extra Part For ConnectionRequest.hpp
#ifdef EXTRA_INCLUDE_PART_CONNECTIONREQUEST
// Include Headers or Declare Types Here

	#include "../UnverifiedCertificate.hpp"
	#include "../WebToken.hpp"

#else
// Add Member There

public:
	std::unique_ptr<UnverifiedCertificate> certificateData;
	std::unique_ptr<Certificate> certificate;
	std::unique_ptr<WebToken> rawToken;
	uint8_t clientSubId;

#endif
