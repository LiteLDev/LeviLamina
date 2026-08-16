#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Pkcs7 {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISystemInterface();

    virtual ::std::vector<uchar> verifyAndReadPKCS7Data(::std::string const&) const = 0;
    // NOLINTEND
};

} // namespace Crypto::Pkcs7
