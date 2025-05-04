#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/WaterAnimal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
struct VariantParameterList;
// clang-format on

class Dolphin : public ::WaterAnimal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2ae03e;
    // NOLINTEND

public:
    // prevent constructor by default
    Dolphin& operator=(Dolphin const&);
    Dolphin(Dolphin const&);
    Dolphin();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 96
    virtual bool canBePulledIntoVehicle() const /*override*/;

    // vIndex: 171
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    // vIndex: 145
    virtual void aiStep() /*override*/;

    // vIndex: 167
    virtual bool createAIGoals() /*override*/;

    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 8
    virtual ~Dolphin() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canBePulledIntoVehicle() const;

    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);

    MCAPI void $aiStep();

    MCAPI bool $createAIGoals();

    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
