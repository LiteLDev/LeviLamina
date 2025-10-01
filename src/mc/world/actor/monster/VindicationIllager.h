#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/HumanoidMonster.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class VindicationIllager : public ::HumanoidMonster {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 172
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    // vIndex: 8
    virtual ~VindicationIllager() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD float $_getWalkTargetValue(::BlockPos const& pos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
