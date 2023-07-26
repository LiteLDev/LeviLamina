#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

class md5 {

public:
    // prevent constructor by default
    md5& operator=(md5 const&) = delete;
    md5(md5 const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?reset\@md5\@Hash\@Crypto\@\@UEAAXXZ
     */
    virtual void reset(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?update\@md5\@Hash\@Crypto\@\@UEAAXPEBXI\@Z
     */
    virtual void update(void const*, unsigned int); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?final\@md5\@Hash\@Crypto\@\@UEAAXPEAE\@Z
     */
    virtual void final(unsigned char*); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?resultSize\@md5\@Hash\@Crypto\@\@UEBA_KXZ
     */
    virtual unsigned __int64 resultSize() const; // NOLINT
    /**
     * @symbol ??0md5\@Hash\@Crypto\@\@QEAA\@XZ
     */
    MCAPI md5(); // NOLINT

    // private:
    /**
     * @symbol ?_body\@md5\@Hash\@Crypto\@\@AEAAPEBXPEBXI\@Z
     */
    MCAPI void const* _body(void const*, unsigned int); // NOLINT

private:
};

}; // namespace Crypto::Hash
