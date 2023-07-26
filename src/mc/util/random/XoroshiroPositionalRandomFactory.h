#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class md5; }
// clang-format on

class XoroshiroPositionalRandomFactory {

public:
    // prevent constructor by default
    XoroshiroPositionalRandomFactory& operator=(XoroshiroPositionalRandomFactory const&) = delete;
    XoroshiroPositionalRandomFactory(XoroshiroPositionalRandomFactory const&)            = delete;
    XoroshiroPositionalRandomFactory()                                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?forBlockPos\@XoroshiroPositionalRandomFactory\@\@UEBA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual std::unique_ptr<class IRandom> forBlockPos(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?forString\@XoroshiroPositionalRandomFactory\@\@UEBA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    virtual std::unique_ptr<class IRandom> forString(std::string const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_XOROSHIROPOSITIONALRANDOMFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~XoroshiroPositionalRandomFactory(); // NOLINT
#endif
    /**
     * @symbol
     * ?forStringImpl\@XoroshiroPositionalRandomFactory\@\@QEBA?AVXoroshiroRandom\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class XoroshiroRandom forStringImpl(std::string const&) const; // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?mThreadLocalDigest\@XoroshiroPositionalRandomFactory\@\@0V?$ThreadLocalObject\@Vmd5\@Hash\@Crypto\@\@V?$allocator\@Vmd5\@Hash\@Crypto\@\@\@std\@\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::
        ThreadLocalObject<class Crypto::Hash::md5, class std::allocator<class Crypto::Hash::md5>>
            mThreadLocalDigest; // NOLINT
};
