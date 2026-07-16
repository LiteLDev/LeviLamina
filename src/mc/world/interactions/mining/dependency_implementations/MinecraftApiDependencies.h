#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/interactions/mining/IMinecraftApiDependencies.h"

namespace Interactions::Mining {

class MinecraftApiDependencies : public ::Interactions::Mining::IMinecraftApiDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk97af03;
    ::ll::UntypedStorage<8, 8>  mUnk761258;
    ::ll::UntypedStorage<8, 8>  mUnk354c1f;
    ::ll::UntypedStorage<4, 12> mUnk4c1ab6;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftApiDependencies& operator=(MinecraftApiDependencies const&);
    MinecraftApiDependencies(MinecraftApiDependencies const&);
    MinecraftApiDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void finishMiningHook() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Interactions::Mining
