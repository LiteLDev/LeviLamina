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
    virtual bool isAlliedTo(::Mob* other) /*override*/;

    virtual int getArmorValue() const /*override*/;

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
