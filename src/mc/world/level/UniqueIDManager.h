#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

class UniqueIDManager {
public:
    // prevent constructor by default
    UniqueIDManager& operator=(UniqueIDManager const&);
    UniqueIDManager(UniqueIDManager const&);
    UniqueIDManager();

public:
    // NOLINTBEGIN
    MCAPI struct ActorUniqueID getNewUniqueID();

    MCAPI static class OwnerPtr<class UniqueIDManager>
    setupUniqueIDManager(class LevelData& levelData, bool isClientSide);

    // NOLINTEND
};
