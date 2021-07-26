#pragma once

#include "UnverifiedCertificate.h"

class Certificate {
public:
    UnverifiedCertificate        unverified;
    std::unique_ptr<Certificate> parent;
    bool                         isValid;
};