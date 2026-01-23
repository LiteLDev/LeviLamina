#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InputSettingsHandler {
public:
    // InputSettingsHandler inner types declare
    // clang-format off
    struct KeymappingInfo;
    // clang-format on

    // InputSettingsHandler inner types define
    struct KeymappingInfo {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::queue<::std::function<void()>, ::std::deque<::std::function<void()>>>>
                                                                                       mDeferredCallbacks;
    ::ll::TypedStorage<8, 56, ::std::optional<::InputSettingsHandler::KeymappingInfo>> mCapturingKeymapping;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setCapturingKeymapping(::InputSettingsHandler::KeymappingInfo info);
    // NOLINTEND
};
