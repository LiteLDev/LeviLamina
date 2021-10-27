#pragma once
#include "WebToken.h"
#include "Certificate.h"

class UnverifiedCertificate {
public:
    const WebToken                         rawToken;
    std::unique_ptr<UnverifiedCertificate> parentUnverified;
};