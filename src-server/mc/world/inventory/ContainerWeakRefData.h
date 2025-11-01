#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActor;
class Container;
// clang-format on

struct ContainerWeakRefData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Container*> mContainer;
    ::ll::TypedStorage<8, 8, ::Actor*> mActor;
    ::ll::TypedStorage<8, 8, ::BlockActor*> mBlockActor;
    // NOLINTEND

};
