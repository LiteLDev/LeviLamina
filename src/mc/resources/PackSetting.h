#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackSettingObserver;
namespace Json { class Value; }
// clang-format on

class PackSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Json::Value*>                        mValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackSettingObserver>> mObservers;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSetting& operator=(PackSetting const&);
    PackSetting(PackSetting const&);
    PackSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PackSetting();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
