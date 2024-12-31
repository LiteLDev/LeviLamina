#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/pkcs7/ISystemInterface.h"

namespace Crypto::Pkcs7 {

class Pkcs7Verifier : public ::Crypto::Pkcs7::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk35e646;
    // NOLINTEND

public:
    // prevent constructor by default
    Pkcs7Verifier& operator=(Pkcs7Verifier const&);
    Pkcs7Verifier(Pkcs7Verifier const&);
    Pkcs7Verifier();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Pkcs7Verifier() /*override*/ = default;

    // vIndex: 1
    virtual ::std::vector<uchar> verifyAndReadPKCS7Data(::std::string const&) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Pkcs7
