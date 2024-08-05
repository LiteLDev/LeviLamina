#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ExtendedCertificate {
public:
    // prevent constructor by default
    ExtendedCertificate& operator=(ExtendedCertificate const&);
    ExtendedCertificate(ExtendedCertificate const&);
    ExtendedCertificate();

public:
    // NOLINTBEGIN
    MCAPI static class mce::UUID getIdentity(class Certificate const& cert);

    MCAPI static std::string getIdentityName(class Certificate const&);

    MCAPI static std::string getTitleID(class Certificate const& cert);

    MCAPI static std::string getXuid(class Certificate const&, bool);

    // NOLINTEND
};
