#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISystemInterface() = default;

    virtual void init(::std::string const&, ::std::string const&) = 0;

    virtual void encrypt(::std::string const&, ::std::string&) = 0;

    virtual void decrypt(::std::string const&, ::std::string&) = 0;

    virtual uint64 getKeySize() const = 0;

    virtual uint64 getBlockSize() const = 0;

    virtual uint64 getEncryptionBufferSize(uint64) const = 0;

    virtual bool encryptToBuffer(::gsl::span<char const>, ::gsl::span<char>, uint64&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Symmetric
