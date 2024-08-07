#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/symmetric/OperationMode.h"
#include "mc/deps/crypto/symmetric/System.h"

namespace Crypto::Symmetric {

class Symmetric {
public:
    // prevent constructor by default
    Symmetric& operator=(Symmetric const&);
    Symmetric(Symmetric const&);
    Symmetric();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Symmetric();

    // vIndex: 1
    virtual void init(std::string const& key, std::string const&);

    // vIndex: 2
    virtual void encrypt(std::string const&, std::string& output);

    // vIndex: 3
    virtual void decrypt(std::string const&, std::string& output);

    // vIndex: 4
    virtual uint64 getKeySize() const;

    // vIndex: 5
    virtual uint64 getBlockSize() const;

    // vIndex: 6
    virtual uint64 getEncryptionBufferSize(uint64) const;

    // vIndex: 7
    virtual bool encryptToBuffer(gsl::span<char const> input, gsl::span<char> output, uint64& bytesWritten);

    MCAPI Symmetric(::Crypto::Symmetric::System system, ::Crypto::Symmetric::OperationMode mode);

    // NOLINTEND
};

}; // namespace Crypto::Symmetric
