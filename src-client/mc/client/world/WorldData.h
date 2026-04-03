#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class LevelSettings;
// clang-format on

namespace World {

struct WorldData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelData&>                        levelData;
    ::ll::TypedStorage<8, 848, ::LevelSummary>                    levelSummary;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelSettings>> levelSettings;
    ::ll::TypedStorage<1, 1, bool>                                isDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldData& operator=(WorldData const&);
    WorldData(WorldData const&);
    WorldData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~WorldData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
