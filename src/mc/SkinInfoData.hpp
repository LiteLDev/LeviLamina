/**
 * @file  SkinInfoData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SkinInfoData.
 *
 */
class SkinInfoData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKININFODATA
public:
    class SkinInfoData& operator=(class SkinInfoData const &) = delete;
    SkinInfoData(class SkinInfoData const &) = delete;
    SkinInfoData() = delete;
#endif

public:
    /**
     * @symbol  ?isValidSize\@SkinInfoData\@\@SA_N_K\@Z
     */
    MCAPI static bool isValidSize(unsigned __int64);

};