#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/input/InputMode.h"

class InputSettingsHandler {
public:
    // InputSettingsHandler inner types declare
    // clang-format off
    struct KeymappingInfo;
    // clang-format on

    // InputSettingsHandler inner types define
    struct KeymappingInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::InputMode>                     inputMode;
        ::ll::TypedStorage<4, 8, ::std::optional<::KeyboardType>> keyboardType;
        ::ll::TypedStorage<8, 32, ::std::string>                  action;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~KeymappingInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

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
