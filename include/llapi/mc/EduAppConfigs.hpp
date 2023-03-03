/**
 * @file  EduAppConfigs.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EduAppConfigs.
 *
 */
class EduAppConfigs {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUAPPCONFIGS
public:
    class EduAppConfigs& operator=(class EduAppConfigs const &) = delete;
    EduAppConfigs(class EduAppConfigs const &) = delete;
    EduAppConfigs() = delete;
#endif

public:
    /**
     * @symbol  ?EDUResourcePack\@EduAppConfigs\@\@2UPackIdVersion\@\@B
     */
    MCAPI static struct PackIdVersion const EDUResourcePack;

};