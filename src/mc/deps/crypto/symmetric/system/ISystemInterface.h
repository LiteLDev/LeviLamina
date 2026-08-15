#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISystemInterface() = default;

    virtual void init(::std::string const& key, ::std::string const& IV) = 0;

#ifdef LL_PLAT_S
    virtual void encrypt(::std::string const& plaintext, ::std::string& output) = 0;
#else // LL_PLAT_C
    virtual void encrypt(::std::string const& plaintext, ::std::string& out) = 0;
#endif

#ifdef LL_PLAT_S
    virtual void decrypt(::std::string const& ciphertext, ::std::string& output) = 0;
#else // LL_PLAT_C
    virtual void decrypt(::std::string const& ciphertext, ::std::string& out) = 0;
#endif

    virtual uint64 getKeySize() const = 0;

    virtual uint64 getBlockSize() const = 0;

    virtual uint64 getEncryptionBufferSize(uint64 inputSize) const = 0;

    virtual bool encryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten) = 0;

    virtual uint64 getDecryptionBufferSize(uint64 inputSize) const = 0;

    virtual bool decryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten) = 0;
    // NOLINTEND
};

} // namespace Crypto::Symmetric
