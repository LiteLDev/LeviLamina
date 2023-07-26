/**
 * @file  SmokerBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SmokerBlockActor.
 *
 */
class SmokerBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMOKERBLOCKACTOR
public:
    class SmokerBlockActor& operator=(class SmokerBlockActor const &) = delete;
    SmokerBlockActor(class SmokerBlockActor const &) = delete;
    SmokerBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SMOKERBLOCKACTOR
    /**
     * @symbol  ?getName\@SmokerBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
#endif
    /**
     * @symbol  ??0SmokerBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SmokerBlockActor(class BlockPos const &);

};