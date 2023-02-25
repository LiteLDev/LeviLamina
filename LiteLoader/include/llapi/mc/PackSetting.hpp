/**
 * @file  PackSetting.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackSetting.
 *
 */
class PackSetting {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSETTING
public:
    class PackSetting& operator=(class PackSetting const &) = delete;
    PackSetting(class PackSetting const &) = delete;
    PackSetting() = delete;
#endif

public:
    /**
     * @symbol  ?set\@PackSetting\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void set(class Json::Value const &);
    /**
     * @symbol  ??1PackSetting\@\@QEAA\@XZ
     */
    MCAPI ~PackSetting();

};