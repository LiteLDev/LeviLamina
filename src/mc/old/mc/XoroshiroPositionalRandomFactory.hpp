/**
 * @file  XoroshiroPositionalRandomFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Bedrock.hpp"
#include "Crypto.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class XoroshiroPositionalRandomFactory.
 *
 */
class XoroshiroPositionalRandomFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XOROSHIROPOSITIONALRANDOMFACTORY
public:
    class XoroshiroPositionalRandomFactory& operator=(class XoroshiroPositionalRandomFactory const &) = delete;
    XoroshiroPositionalRandomFactory(class XoroshiroPositionalRandomFactory const &) = delete;
    XoroshiroPositionalRandomFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~XoroshiroPositionalRandomFactory();
    /**
     * @vftbl  1
     * @symbol  ?forBlockPos\@XoroshiroPositionalRandomFactory\@\@UEBA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual std::unique_ptr<class IRandom> forBlockPos(class BlockPos const &) const;
    /**
     * @vftbl  2
     * @symbol  ?forString\@XoroshiroPositionalRandomFactory\@\@UEBA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    virtual std::unique_ptr<class IRandom> forString(std::string const &) const;
    /**
     * @symbol  ?forStringImpl\@XoroshiroPositionalRandomFactory\@\@QEBA?AVXoroshiroRandom\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class XoroshiroRandom forStringImpl(std::string const &) const;

//private:

private:
    /**
     * @symbol  ?mThreadLocalDigest\@XoroshiroPositionalRandomFactory\@\@0V?$ThreadLocalObject\@Vmd5\@Hash\@Crypto\@\@V?$allocator\@Vmd5\@Hash\@Crypto\@\@\@std\@\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Crypto::Hash::md5, class std::allocator<class Crypto::Hash::md5>> mThreadLocalDigest;

};