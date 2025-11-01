#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Pkcs7 {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISystemInterface() = default;

    // vIndex: 1
    virtual ::std::vector<uchar> verifyAndReadPKCS7Data(::std::string const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
