/**
 * @file  BlockLegacyPtr.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockLegacyPtr.
 *
 */
class BlockLegacyPtr {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLEGACYPTR
public:
    class BlockLegacyPtr& operator=(class BlockLegacyPtr const &) = delete;
    BlockLegacyPtr(class BlockLegacyPtr const &) = delete;
    BlockLegacyPtr() = delete;
#endif

public:
    /**
     * @symbol  ?toString\@BlockLegacyPtr\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;

};