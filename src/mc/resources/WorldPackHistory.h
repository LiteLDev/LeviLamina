#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class WorldPackHistory {

public:
    // prevent constructor by default
    WorldPackHistory& operator=(WorldPackHistory const&) = delete;

public:
    /**
     * @symbol ??0WorldPackHistory\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI WorldPackHistory(class WorldPackHistory const&); // NOLINT
    /**
     * @symbol ??0WorldPackHistory\@\@QEAA\@XZ
     */
    MCAPI WorldPackHistory(); // NOLINT
    /**
     * @symbol ?initializeFromJson\@WorldPackHistory\@\@QEAA_NAEBVValue\@Json\@\@\@Z
     */
    MCAPI bool initializeFromJson(class Json::Value const&); // NOLINT
    /**
     * @symbol ??1WorldPackHistory\@\@QEAA\@XZ
     */
    MCAPI ~WorldPackHistory(); // NOLINT
};
