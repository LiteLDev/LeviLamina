#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { enum class HashType; }
namespace mce { class UUID; }
// clang-format on

namespace Crypto::Hash {

class Hash {

public:
    // prevent constructor by default
    Hash& operator=(Hash const&) = delete;
    Hash(Hash const&)            = delete;
    Hash()                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?reset\@Hash\@1Crypto\@\@UEAAXXZ
     */
    virtual void reset(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?update\@Hash\@1Crypto\@\@UEAAXPEBXI\@Z
     */
    virtual void update(void const*, unsigned int); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?final\@Hash\@1Crypto\@\@UEAAXPEAE\@Z
     */
    virtual void final(unsigned char*); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?resultSize\@Hash\@1Crypto\@\@UEBA_KXZ
     */
    virtual unsigned __int64 resultSize() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRYPTO_HASH_HASH
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Hash(); // NOLINT
#endif
    /**
     * @symbol ??0Hash\@0Crypto\@\@QEAA\@W4HashType\@01\@\@Z
     */
    MCAPI Hash(enum class Crypto::Hash::HashType); // NOLINT
    /**
     * @symbol
     * ?final\@Hash\@1Crypto\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string final(); // NOLINT
    /**
     * @symbol ?getUUID\@Hash\@1Crypto\@\@QEAA?AVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID getUUID(); // NOLINT
};

}; // namespace Crypto::Hash
