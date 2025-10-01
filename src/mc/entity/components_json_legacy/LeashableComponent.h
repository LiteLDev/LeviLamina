#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
struct LeashablePreset;
// clang-format on

class LeashableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::LeashablePreset>> mPresets;
    ::ll::TypedStorage<1, 1, bool>                              mCanBeStolen;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnLeash;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnUnleash;
    ::ll::TypedStorage<1, 1, bool>                              mOnUnleashInteractOnly;
    ::ll::TypedStorage<4, 4, float>                             mAngularMomentum;
    // NOLINTEND

public:
    // prevent constructor by default
    LeashableComponent& operator=(LeashableComponent const&);
    LeashableComponent(LeashableComponent const&);
    LeashableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LeashableComponent(::LeashableComponent&&);

    MCNAPI ::LeashableComponent& operator=(::LeashableComponent&&);

    MCNAPI ~LeashableComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LeashableComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
