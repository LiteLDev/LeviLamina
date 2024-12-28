#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/symmetric/ISystemInterface.h"
#include "mc/deps/crypto/symmetric/OperationMode.h"
#include "mc/deps/crypto/symmetric/System.h"

namespace Crypto::Symmetric {

class Symmetric : public ::Crypto::Symmetric::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk78fd21;
    // NOLINTEND

public:
    // prevent constructor by default
    Symmetric& operator=(Symmetric const&);
    Symmetric(Symmetric const&);
    Symmetric();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Symmetric() /*override*/;

    // vIndex: 1
    virtual void init(::std::string const& key, ::std::string const& IV) /*override*/;

    // vIndex: 2
    virtual void encrypt(::std::string const& plaintext, ::std::string& output) /*override*/;

    // vIndex: 3
    virtual void decrypt(::std::string const& ciphertext, ::std::string& output) /*override*/;

    // vIndex: 4
    virtual uint64 getKeySize() const /*override*/;

    // vIndex: 5
    virtual uint64 getBlockSize() const /*override*/;

    // vIndex: 6
    virtual uint64 getEncryptionBufferSize(uint64 inputSize) const /*override*/;

    // vIndex: 7
    virtual bool
    encryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Symmetric(::Crypto::Symmetric::System system, ::Crypto::Symmetric::OperationMode mode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Crypto::Symmetric::System system, ::Crypto::Symmetric::OperationMode mode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(::std::string const& key, ::std::string const& IV);

    MCAPI void $encrypt(::std::string const& plaintext, ::std::string& output);

    MCAPI void $decrypt(::std::string const& ciphertext, ::std::string& output);

    MCAPI uint64 $getKeySize() const;

    MCAPI uint64 $getBlockSize() const;

    MCAPI uint64 $getEncryptionBufferSize(uint64 inputSize) const;

    MCAPI bool $encryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Symmetric
