#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/HumanoidMonster.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class EvocationIllager : public ::HumanoidMonster {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 153
    virtual bool isAlliedTo(::Mob* other) /*override*/;

    // vIndex: 155
    virtual int getArmorValue() const /*override*/;

    // vIndex: 8
    virtual ~EvocationIllager() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isAlliedTo(::Mob* other);

    MCFOLD int $getArmorValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
