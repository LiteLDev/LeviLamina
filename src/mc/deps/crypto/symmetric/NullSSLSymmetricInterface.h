#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/symmetric/ISystemInterface.h"

namespace Crypto::Symmetric {

class NullSSLSymmetricInterface : public ::Crypto::Symmetric::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkce0f1d;
    // NOLINTEND

public:
    // prevent constructor by default
    NullSSLSymmetricInterface& operator=(NullSSLSymmetricInterface const&);
    NullSSLSymmetricInterface(NullSSLSymmetricInterface const&);
    NullSSLSymmetricInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NullSSLSymmetricInterface() /*override*/ = default;

    // vIndex: 1
    virtual void init(::std::string const&, ::std::string const&) /*override*/;

    // vIndex: 2
    virtual void encrypt(::std::string const&, ::std::string&) /*override*/;

    // vIndex: 3
    virtual void decrypt(::std::string const&, ::std::string&) /*override*/;

    // vIndex: 4
    virtual uint64 getKeySize() const /*override*/;

    // vIndex: 5
    virtual uint64 getBlockSize() const /*override*/;

    // vIndex: 6
    virtual uint64 getEncryptionBufferSize(uint64) const /*override*/;

    // vIndex: 7
    virtual bool encryptToBuffer(::gsl::span<char const>, ::gsl::span<char>, uint64&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Symmetric
