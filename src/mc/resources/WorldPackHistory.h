#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class WorldPackHistory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDPACKHISTORY
public:
    WorldPackHistory& operator=(WorldPackHistory const&) = delete;
#endif

public:
    /**
     * @symbol ??0WorldPackHistory\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI WorldPackHistory(class WorldPackHistory const&);
    /**
     * @symbol ??0WorldPackHistory\@\@QEAA\@XZ
     */
    MCAPI WorldPackHistory();
    /**
     * @symbol ?initializeFromJson\@WorldPackHistory\@\@QEAA_NAEBVValue\@Json\@\@\@Z
     */
    MCAPI bool initializeFromJson(class Json::Value const&);
    /**
     * @symbol ??1WorldPackHistory\@\@QEAA\@XZ
     */
    MCAPI ~WorldPackHistory();
};
