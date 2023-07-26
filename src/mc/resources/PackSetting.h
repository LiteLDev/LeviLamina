#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackSetting {

public:
    // prevent constructor by default
    PackSetting& operator=(PackSetting const&) = delete;
    PackSetting(PackSetting const&)            = delete;
    PackSetting()                              = delete;

public:
    /**
     * @symbol ?set\@PackSetting\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void set(class Json::Value const&); // NOLINT
    /**
     * @symbol ??1PackSetting\@\@QEAA\@XZ
     */
    MCAPI ~PackSetting(); // NOLINT
};
