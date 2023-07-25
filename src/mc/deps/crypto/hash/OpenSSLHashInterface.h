#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

class OpenSSLHashInterface {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRYPTO_HASH_OPENSSLHASHINTERFACE
public:
    OpenSSLHashInterface& operator=(OpenSSLHashInterface const&) = delete;
    OpenSSLHashInterface(OpenSSLHashInterface const&)            = delete;
    OpenSSLHashInterface()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?reset\@OpenSSLHashInterface\@Hash\@Crypto\@\@UEAAXXZ
     */
    virtual void reset();
    /**
     * @vftbl 2
     * @symbol ?update\@OpenSSLHashInterface\@Hash\@Crypto\@\@UEAAXPEBXI\@Z
     */
    virtual void update(void const*, unsigned int);
    /**
     * @vftbl 3
     * @symbol ?final\@OpenSSLHashInterface\@Hash\@Crypto\@\@UEAAXPEAE\@Z
     */
    virtual void final(unsigned char*);
    /**
     * @vftbl 4
     * @symbol ?resultSize\@OpenSSLHashInterface\@Hash\@Crypto\@\@UEBA_KXZ
     */
    virtual unsigned __int64 resultSize() const;

    // private:
    /**
     * @symbol ?_initHashContextPointer\@OpenSSLHashInterface\@Hash\@Crypto\@\@AEAAXXZ
     */
    MCAPI void _initHashContextPointer();

private:
};

}; // namespace Crypto::Hash
