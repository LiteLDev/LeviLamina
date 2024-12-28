#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class EntityContext;
struct TickingSystemWithInfo;
// clang-format on

class UpdateBoundingBoxSystem {
public:
    // prevent constructor by default
    UpdateBoundingBoxSystem& operator=(UpdateBoundingBoxSystem const&);
    UpdateBoundingBoxSystem(UpdateBoundingBoxSystem const&);
    UpdateBoundingBoxSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem(::BaseGameVersion const& version, bool isClientSide);

    MCAPI static void
    synchronousUpdateSize(::EntityContext& entity, ::BaseGameVersion const& version, bool isClientSide);
    // NOLINTEND
};
