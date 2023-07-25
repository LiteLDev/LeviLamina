#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackSetting {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSETTING
public:
    PackSetting& operator=(PackSetting const&) = delete;
    PackSetting(PackSetting const&)            = delete;
    PackSetting()                              = delete;
#endif

public:
    /**
     * @symbol ?set\@PackSetting\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void set(class Json::Value const&);
    /**
     * @symbol ??1PackSetting\@\@QEAA\@XZ
     */
    MCAPI ~PackSetting();
};
