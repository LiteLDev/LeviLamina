#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISystemInterface() = default;

    virtual void init(::std::string const& key, ::std::string const& IV) = 0;

    virtual void encrypt(::std::string const& plaintext, ::std::string& out) = 0;

    virtual void decrypt(::std::string const& ciphertext, ::std::string& out) = 0;

    virtual uint64 getKeySize() const = 0;

    virtual uint64 getBlockSize() const = 0;

    virtual uint64 getEncryptionBufferSize(uint64 inputSize) const = 0;

    virtual bool encryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Symmetric
