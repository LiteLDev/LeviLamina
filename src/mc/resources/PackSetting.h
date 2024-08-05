#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/PackSettingObserver.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackSetting {
public:
    PackSetting() = delete;

    Json::Value*                     mValue;     // this+0x0
    std::vector<PackSettingObserver> mObservers; // this+0x8

public:
    // NOLINTBEGIN
    MCAPI void set(class Json::Value const& value);

    MCAPI ~PackSetting();

    // NOLINTEND
};
