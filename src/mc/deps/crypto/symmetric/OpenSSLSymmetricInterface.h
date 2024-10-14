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
    virtual void init(std::string const& key, std::string const& IV);

    // vIndex: 2
    virtual void encrypt(std::string const& plaintext, std::string& out);

    // vIndex: 3
    virtual void decrypt(std::string const& ciphertext, std::string& out);

    // vIndex: 4
    virtual uint64 getKeySize() const;

    // vIndex: 5
    virtual uint64 getBlockSize() const;

    // vIndex: 6
    virtual uint64 getEncryptionBufferSize(uint64 inputSize) const;

    // vIndex: 7
    virtual bool encryptToBuffer(gsl::span<char const>, gsl::span<char>, uint64&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void decrypt$(std::string const& ciphertext, std::string& out);

    MCAPI void encrypt$(std::string const& plaintext, std::string& out);

    MCAPI bool encryptToBuffer$(gsl::span<char const>, gsl::span<char>, uint64&);

    MCAPI uint64 getBlockSize$() const;

    MCAPI uint64 getEncryptionBufferSize$(uint64 inputSize) const;

    MCAPI uint64 getKeySize$() const;

    MCAPI void init$(std::string const& key, std::string const& IV);

    // NOLINTEND
};

}; // namespace Crypto::Symmetric
