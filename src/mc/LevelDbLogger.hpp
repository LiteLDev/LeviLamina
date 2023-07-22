/**
 * @file  LevelDbLogger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelDbLogger.
 *
 */
class LevelDbLogger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBLOGGER
public:
    class LevelDbLogger& operator=(class LevelDbLogger const &) = delete;
    LevelDbLogger(class LevelDbLogger const &) = delete;
    LevelDbLogger() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LevelDbLogger();
    /**
     * @vftbl  1
     * @symbol  ?Logv\@LevelDbLogger\@\@EEAAXPEBDPEAD\@Z
     */
    virtual void Logv(char const *, char *);

};