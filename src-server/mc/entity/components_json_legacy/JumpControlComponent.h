#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/JumpInfo.h"
#include "mc/world/actor/ai/control/JumpType.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class JumpControl;
class Mob;
struct JumpControlDescription;
// clang-format on

class JumpControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mJumping;
    ::ll::TypedStorage<1, 1, bool> mSwimming;
    ::ll::TypedStorage<4, 4, float> mJumpPower;
    ::ll::TypedStorage<4, 4, ::JumpType> mJumpType;
    ::ll::TypedStorage<4, 64, ::JumpInfo[4]> mJumpInfo;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::JumpControl>> mJumpControl;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpControlComponent& operator=(JumpControlComponent const&);
    JumpControlComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JumpControlComponent(::JumpControlComponent const& other);

    MCNAPI void initMultiTypeJumpComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);

    MCNAPI void initializeFromDefinition(::Mob& owner, ::JumpControlDescription* description);

    MCNAPI ~JumpControlComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JumpControlComponent const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
