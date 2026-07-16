#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NpcDialogueButton {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mButtonName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mCommands;
    ::ll::TypedStorage<8, 32, ::std::string>                mURL;
    // NOLINTEND
};
