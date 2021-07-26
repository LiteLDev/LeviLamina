#include "Certificate.h"
#include "WebToken.h"

#include "UnverifiedCertificate.h"

class ConnectionRequest {
public:
    std::unique_ptr<UnverifiedCertificate> certificateData;
    std::unique_ptr<Certificate>           certificate;
    std::unique_ptr<WebToken>              rawToken;
    uint8_t                                clientSubId;
};

static_assert(sizeof(ConnectionRequest) == 32);