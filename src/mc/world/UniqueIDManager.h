#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"

class UniqueIDManager {
public:
    // prevent constructor by default
    UniqueIDManager& operator=(UniqueIDManager const&);
    UniqueIDManager(UniqueIDManager const&);
    UniqueIDManager();

public:
    // NOLINTBEGIN
    MCAPI struct ActorUniqueID getNewUniqueID();

    MCAPI static class OwnerPtr<class UniqueIDManager> setupUniqueIDManager(class LevelData&, bool);

    // NOLINTEND
};
