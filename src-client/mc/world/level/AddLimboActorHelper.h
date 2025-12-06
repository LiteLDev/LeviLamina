#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DimensionHeightRange;
class PlayerLimboActorManager;
struct IAddActorEntityProxy;
// clang-format on

struct AddLimboActorHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IAddActorEntityProxy&>       mAddActorEntityProxy;
    ::ll::TypedStorage<8, 8, ::DimensionHeightRange const&> mHeightRange;
    ::ll::TypedStorage<8, 8, ::PlayerLimboActorManager&>    mPlayerLimboActorManager;
    // NOLINTEND

public:
    // prevent constructor by default
    AddLimboActorHelper& operator=(AddLimboActorHelper const&);
    AddLimboActorHelper(AddLimboActorHelper const&);
    AddLimboActorHelper();
};
