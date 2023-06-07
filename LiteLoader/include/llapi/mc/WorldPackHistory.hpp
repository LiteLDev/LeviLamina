/**
 * @file  WorldPackHistory.hpp
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
 * @brief MC class WorldPackHistory.
 *
 */
class WorldPackHistory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDPACKHISTORY
public:
    class WorldPackHistory& operator=(class WorldPackHistory const &) = delete;
#endif

public:
    /**
     * @symbol ??0WorldPackHistory\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI WorldPackHistory(class WorldPackHistory const &);
    /**
     * @symbol ??0WorldPackHistory\@\@QEAA\@XZ
     */
    MCAPI WorldPackHistory();
    /**
     * @symbol ?initializeFromJson\@WorldPackHistory\@\@QEAA_NAEBVValue\@Json\@\@\@Z
     */
    MCAPI bool initializeFromJson(class Json::Value const &);
    /**
     * @symbol ??1WorldPackHistory\@\@QEAA\@XZ
     */
    MCAPI ~WorldPackHistory();

};
