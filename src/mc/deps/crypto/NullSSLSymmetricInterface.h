#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/symmetric/system/ISystemInterface.h"

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
    virtual ~NullSSLSymmetricInterface() /*override*/ = default;

    virtual void init(::std::string const&, ::std::string const&) /*override*/;

    virtual void encrypt(::std::string const&, ::std::string&) /*override*/;

    virtual void decrypt(::std::string const&, ::std::string&) /*override*/;

    virtual uint64 getKeySize() const /*override*/;

    virtual uint64 getBlockSize() const /*override*/;

    virtual uint64 getEncryptionBufferSize(uint64) const /*override*/;

    virtual bool encryptToBuffer(::gsl::span<char const>, ::gsl::span<char>, uint64&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Symmetric
