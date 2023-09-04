#pragma once

#include "mc/_HeaderOutputPredefine.h"

// clang-format off
namespace Json { class Value; }
// clang-format on

class PackSettingObserver {
public:
    using PackSettingChangedCallback = std::function<void(class Json::Value const&)>;

    void*                      mToken;
    PackSettingChangedCallback mChangeCallback;
};
