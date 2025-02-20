#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class Mob;
class MoveControl;
// clang-format on

class MoveControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk4cda91;
    ::ll::UntypedStorage<4, 12> mUnk4f43ea;
    ::ll::UntypedStorage<1, 1>  mUnk2107d2;
    ::ll::UntypedStorage<4, 4>  mUnk7ca02b;
    ::ll::UntypedStorage<4, 4>  mUnkddc4cd;
    ::ll::UntypedStorage<8, 16> mUnk4c82b8;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveControlComponent& operator=(MoveControlComponent const&);
    MoveControlComponent(MoveControlComponent const&);
    MoveControlComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initMultiTypeMovementComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);

    MCAPI void setInternalType(::std::unique_ptr<::MoveControl> type);
    // NOLINTEND
};
