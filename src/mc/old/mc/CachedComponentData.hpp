/**
 * @file  CachedComponentData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CachedComponentData.
 *
 */
class CachedComponentData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CACHEDCOMPONENTDATA
public:
    class CachedComponentData& operator=(class CachedComponentData const &) = delete;
    CachedComponentData(class CachedComponentData const &) = delete;
    CachedComponentData() = delete;
#endif

public:
    /**
     * @symbol  ?cacheComponentData\@CachedComponentData\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void cacheComponentData(class Block const &);

};