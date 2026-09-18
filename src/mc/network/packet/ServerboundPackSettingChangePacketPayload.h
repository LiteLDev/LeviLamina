#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

struct ServerboundPackSettingChangePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                                              mPackId;
    ::ll::TypedStorage<8, 32, ::std::string>                                                            mSettingName;
    ::ll::TypedStorage<8, 40, ::std::variant<float, bool, ::std::string, ::std::vector<::std::string>>> mSettingValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ServerboundPackSettingChangePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
