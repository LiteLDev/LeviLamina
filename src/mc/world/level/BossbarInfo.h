#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"
#include "mc/world/actor/ai/util/BossBarColor.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

struct BossbarInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BossBarColor>                  mColor;
    ::ll::TypedStorage<4, 4, int>                             mMax;
    ::ll::TypedStorage<4, 4, int>                             mValue;
    ::ll::TypedStorage<1, 1, bool>                            mVisible;
    ::ll::TypedStorage<8, 16, ::Json::Value>                  mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>> mPlayers;
    // NOLINTEND
};
