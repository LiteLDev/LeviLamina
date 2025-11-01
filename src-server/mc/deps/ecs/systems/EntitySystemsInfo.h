#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ComponentInfo;
struct SystemInfo;
// clang-format on

struct EntitySystemsInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::SystemInfo>> mGameSystems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ComponentInfo>> mAllKnownComponents;
    // NOLINTEND

};
