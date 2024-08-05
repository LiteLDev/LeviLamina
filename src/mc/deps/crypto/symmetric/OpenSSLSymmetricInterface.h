#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

class OpenSSLSymmetricInterface {
public:
    // prevent constructor by default
    OpenSSLSymmetricInterface& operator=(OpenSSLSymmetricInterface const&);
    OpenSSLSymmetricInterface(OpenSSLSymmetricInterface const&);
    OpenSSLSymmetricInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OpenSSLSymmetricInterface() = default;

    // vIndex: 1
    virtual void init(std::string const& key, std::string const&);

    // vIndex: 2
    virtual void encrypt(std::string const&, std::string& out);

    // vIndex: 3
    virtual void decrypt(std::string const&, std::string& out);

    // vIndex: 4
    virtual uint64 getKeySize() const;

    // vIndex: 5
    virtual uint64 getBlockSize() const;

    // vIndex: 6
    virtual uint64 getEncryptionBufferSize(uint64) const;

    // vIndex: 7
    virtual bool encryptToBuffer(gsl::span<char const> input, gsl::span<char> output, uint64& bytesWritten);

    // NOLINTEND
};

}; // namespace Crypto::Symmetric
