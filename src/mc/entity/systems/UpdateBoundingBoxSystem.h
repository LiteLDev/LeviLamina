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
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem(::BaseGameVersion const& version, bool isClientSide);

    MCNAPI static void
    synchronousUpdateSize(::EntityContext& entity, ::BaseGameVersion const& version, bool isClientSide);
    // NOLINTEND
};
