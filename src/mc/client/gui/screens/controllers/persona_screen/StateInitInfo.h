#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace personaScreen {

class StateInitInfo {
public:
    // StateInitInfo inner types define
    enum class NoDataTabState : uint {
        Capes  = 0,
        Emotes = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk91e18b;
    ::ll::UntypedStorage<1, 1>   mUnk831778;
    ::ll::UntypedStorage<4, 4>   mUnk7c9e49;
    ::ll::UntypedStorage<8, 120> mUnk2b06a1;
    ::ll::UntypedStorage<1, 1>   mUnk4e0f3a;
    // NOLINTEND

public:
    // prevent constructor by default
    StateInitInfo& operator=(StateInitInfo const&);
    StateInitInfo(StateInitInfo const&);
    StateInitInfo();
};

} // namespace personaScreen
