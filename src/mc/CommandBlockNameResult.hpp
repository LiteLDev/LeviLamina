/**
 * @file  CommandBlockNameResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandBlockNameResult.
 *
 */
class CommandBlockNameResult {

#define AFTER_EXTRA
public:
 enum class Result;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKNAMERESULT
public:
    class CommandBlockNameResult& operator=(class CommandBlockNameResult const &) = delete;
    CommandBlockNameResult(class CommandBlockNameResult const &) = delete;
    CommandBlockNameResult() = delete;
#endif

public:
    /**
     * @symbol  ??0CommandBlockNameResult\@\@QEAA\@AEBVHashedString\@\@PEBVBlock\@\@_N\@Z
     */
    MCAPI CommandBlockNameResult(class HashedString const &, class Block const *, bool);
    /**
     * @symbol  ?getBlock\@CommandBlockNameResult\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const * getBlock() const;
    /**
     * @symbol  ?getResult\@CommandBlockNameResult\@\@QEBA?AW4Result\@1\@XZ
     */
    MCAPI enum class CommandBlockNameResult::Result getResult() const;
    /**
     * @symbol  ?isComplexAlias\@CommandBlockNameResult\@\@QEBA_NXZ
     */
    MCAPI bool isComplexAlias() const;
    /**
     * @symbol  ?isSameBlock\@CommandBlockNameResult\@\@QEBA_NAEBVBlock\@\@_N\@Z
     */
    MCAPI bool isSameBlock(class Block const &, bool) const;
    /**
     * @symbol  ??1CommandBlockNameResult\@\@QEAA\@XZ
     */
    MCAPI ~CommandBlockNameResult();

};