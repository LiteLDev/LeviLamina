#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActor;
// clang-format on

class ContainerScreenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2d14c0;
    ::ll::UntypedStorage<1, 1>  mUnk2a0ccb;
    ::ll::UntypedStorage<8, 24> mUnk4c6b57;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenContext& operator=(ContainerScreenContext const&);
    ContainerScreenContext(ContainerScreenContext const&);
    ContainerScreenContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Actor* tryGetActor() const;

    MCAPI ::BlockActor* tryGetBlockActor() const;
    // NOLINTEND
};
