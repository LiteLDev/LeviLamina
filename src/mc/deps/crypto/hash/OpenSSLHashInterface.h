#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

class OpenSSLHashInterface {

public:
    // prevent constructor by default
    OpenSSLHashInterface& operator=(OpenSSLHashInterface const&) = delete;
    OpenSSLHashInterface(OpenSSLHashInterface const&)            = delete;
    OpenSSLHashInterface()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?reset\@OpenSSLHashInterface\@Hash\@Crypto\@\@UEAAXXZ
     */
    virtual void reset(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?update\@OpenSSLHashInterface\@Hash\@Crypto\@\@UEAAXPEBXI\@Z
     */
    virtual void update(void const*, unsigned int); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?final\@OpenSSLHashInterface\@Hash\@Crypto\@\@UEAAXPEAE\@Z
     */
    virtual void final(unsigned char*); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?resultSize\@OpenSSLHashInterface\@Hash\@Crypto\@\@UEBA_KXZ
     */
    virtual unsigned __int64 resultSize() const; // NOLINT

    // private:
    /**
     * @symbol ?_initHashContextPointer\@OpenSSLHashInterface\@Hash\@Crypto\@\@AEAAXXZ
     */
    MCAPI void _initHashContextPointer(); // NOLINT

private:
};

}; // namespace Crypto::Hash
