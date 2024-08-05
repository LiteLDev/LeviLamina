#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackSetting {
public:
    // prevent constructor by default
    PackSetting& operator=(PackSetting const&);
    PackSetting(PackSetting const&);
    PackSetting();

public:
    // NOLINTBEGIN
    MCAPI void set(class Json::Value const& value);

    MCAPI ~PackSetting();

    // NOLINTEND
};
