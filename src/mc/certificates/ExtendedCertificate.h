#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Certificate;
namespace mce { class UUID; }
// clang-format on

class ExtendedCertificate {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::mce::UUID getIdentity(::Certificate const& cert);

    MCAPI static ::std::string getIdentityName(::Certificate const& cert);

    MCAPI static ::std::string getTitleID(::Certificate const& cert);

    MCAPI static ::std::string getXuid(::Certificate const& cert, bool trustSelfSigned);
    // NOLINTEND
};
