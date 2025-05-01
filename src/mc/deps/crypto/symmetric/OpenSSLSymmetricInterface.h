#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/symmetric/ISystemInterface.h"

namespace Crypto::Symmetric {

class OpenSSLSymmetricInterface : public ::Crypto::Symmetric::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke117b9;
    ::ll::UntypedStorage<4, 4> mUnk4fbbf1;
    ::ll::UntypedStorage<8, 8> mUnk36589b;
    ::ll::UntypedStorage<8, 8> mUnkd74817;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLSymmetricInterface& operator=(OpenSSLSymmetricInterface const&);
    OpenSSLSymmetricInterface(OpenSSLSymmetricInterface const&);
    OpenSSLSymmetricInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void init(::std::string const& key, ::std::string const& IV) /*override*/;

    // vIndex: 2
    virtual void encrypt(::std::string const& plaintext, ::std::string& out) /*override*/;

    // vIndex: 3
    virtual void decrypt(::std::string const& ciphertext, ::std::string& out) /*override*/;

    // vIndex: 4
    virtual uint64 getKeySize() const /*override*/;

    // vIndex: 5
    virtual uint64 getBlockSize() const /*override*/;

    // vIndex: 6
    virtual uint64 getEncryptionBufferSize(uint64 inputSize) const /*override*/;

    // vIndex: 7
    virtual bool
    encryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten) /*override*/;

    // vIndex: 0
    virtual ~OpenSSLSymmetricInterface() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(::std::string const& key, ::std::string const& IV);

    MCNAPI void $encrypt(::std::string const& plaintext, ::std::string& out);

    MCNAPI void $decrypt(::std::string const& ciphertext, ::std::string& out);

    MCNAPI uint64 $getKeySize() const;

    MCNAPI uint64 $getBlockSize() const;

    MCNAPI uint64 $getEncryptionBufferSize(uint64 inputSize) const;

    MCNAPI bool $encryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Symmetric
