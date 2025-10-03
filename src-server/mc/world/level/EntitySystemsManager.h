#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitySystemsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk99130d;
    ::ll::UntypedStorage<1, 1>  mUnk57f4a3;
    ::ll::UntypedStorage<1, 1>  mUnk28ba01;
    ::ll::UntypedStorage<8, 16> mUnk4e7385;
    ::ll::UntypedStorage<8, 16> mUnkce2bdb;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemsManager& operator=(EntitySystemsManager const&);
    EntitySystemsManager(EntitySystemsManager const&);
    EntitySystemsManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void tickEntitySystems();
    // NOLINTEND
};
