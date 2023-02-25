/**
 * @file  SimplePositionalRandomFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SimplePositionalRandomFactory.
 *
 */
class SimplePositionalRandomFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLEPOSITIONALRANDOMFACTORY
public:
    class SimplePositionalRandomFactory& operator=(class SimplePositionalRandomFactory const &) = delete;
    SimplePositionalRandomFactory(class SimplePositionalRandomFactory const &) = delete;
    SimplePositionalRandomFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SimplePositionalRandomFactory();
    /**
     * @vftbl  1
     * @symbol  ?forBlockPos\@SimplePositionalRandomFactory\@\@UEBA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual std::unique_ptr<class IRandom> forBlockPos(class BlockPos const &) const;
    /**
     * @vftbl  2
     * @symbol  ?forString\@SimplePositionalRandomFactory\@\@UEBA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    virtual std::unique_ptr<class IRandom> forString(std::string const &) const;
    /**
     * @symbol  ??0SimplePositionalRandomFactory\@\@QEAA\@_J\@Z
     */
    MCAPI SimplePositionalRandomFactory(__int64);
    /**
     * @symbol  ?forBlockPosImpl\@SimplePositionalRandomFactory\@\@QEBA?AVSimpleRandom\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class SimpleRandom forBlockPosImpl(class BlockPos const &) const;

};