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
    // vIndex: 0, symbol: __gen_??1OpenSSLSymmetricInterface@Symmetric@Crypto@@UEAA@XZ
    virtual ~OpenSSLSymmetricInterface() = default;

    // vIndex: 1, symbol:
    // ?init@OpenSSLSymmetricInterface@Symmetric@Crypto@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual void init(std::string const& key, std::string const&);

    // vIndex: 2, symbol:
    // ?encrypt@OpenSSLSymmetricInterface@Symmetric@Crypto@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV45@@Z
    virtual void encrypt(std::string const&, std::string& out);

    // vIndex: 3, symbol:
    // ?decrypt@OpenSSLSymmetricInterface@Symmetric@Crypto@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV45@@Z
    virtual void decrypt(std::string const&, std::string& out);

    // vIndex: 4, symbol: ?getKeySize@OpenSSLSymmetricInterface@Symmetric@Crypto@@UEBA_KXZ
    virtual uint64 getKeySize() const;

    // vIndex: 5, symbol: ?getBlockSize@OpenSSLSymmetricInterface@Symmetric@Crypto@@UEBA_KXZ
    virtual uint64 getBlockSize() const;

    // vIndex: 6, symbol: ?getEncryptionBufferSize@OpenSSLSymmetricInterface@Symmetric@Crypto@@UEBA_K_K@Z
    virtual uint64 getEncryptionBufferSize(uint64) const;

    // vIndex: 7, symbol:
    // ?encryptToBuffer@OpenSSLSymmetricInterface@Symmetric@Crypto@@UEAA_NV?$span@$$CBD$0?0@gsl@@V?$span@D$0?0@5@AEA_K@Z
    virtual bool encryptToBuffer(gsl::span<char const> input, gsl::span<char> output, uint64& bytesWritten);

    // NOLINTEND
};

}; // namespace Crypto::Symmetric
