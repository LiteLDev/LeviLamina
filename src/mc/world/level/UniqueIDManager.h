#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

class UniqueIDManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6cf853;
    ::ll::UntypedStorage<1, 1> mUnk123888;
    // NOLINTEND

public:
    // prevent constructor by default
    UniqueIDManager& operator=(UniqueIDManager const&);
    UniqueIDManager(UniqueIDManager const&);
    UniqueIDManager();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::OwnerPtr<::UniqueIDManager> setupUniqueIDManager(::LevelData& levelData, bool isClientSide);
    // NOLINTEND
};
