#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionModifier;
// clang-format on

struct ActorUpgradeEndedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>                                        mActor;
    ::ll::TypedStorage<8, 32, ::std::string const>                            mUpgrade;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionModifier> const> mDefinitionModifiers;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorUpgradeEndedEvent& operator=(ActorUpgradeEndedEvent const&);
    ActorUpgradeEndedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorUpgradeEndedEvent(::ActorUpgradeEndedEvent const&);

    MCAPI ~ActorUpgradeEndedEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ActorUpgradeEndedEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
