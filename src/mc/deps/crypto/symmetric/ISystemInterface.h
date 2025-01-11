#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISystemInterface() = default;

    // vIndex: 1
    virtual void init(::std::string const&, ::std::string const&) = 0;

    // vIndex: 2
    virtual void encrypt(::std::string const&, ::std::string&) = 0;

    // vIndex: 3
    virtual void decrypt(::std::string const&, ::std::string&) = 0;

    // vIndex: 4
    virtual uint64 getKeySize() const = 0;

    // vIndex: 5
    virtual uint64 getBlockSize() const = 0;

    // vIndex: 6
    virtual uint64 getEncryptionBufferSize(uint64) const = 0;

    // vIndex: 7
    virtual bool encryptToBuffer(::gsl::span<char const>, ::gsl::span<char>, uint64&) = 0;
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

} // namespace Crypto::Symmetric
