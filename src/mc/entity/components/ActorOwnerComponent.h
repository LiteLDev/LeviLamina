#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ActorOwnerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2bb37a;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorOwnerComponent& operator=(ActorOwnerComponent const&);
    ActorOwnerComponent(ActorOwnerComponent const&);
    ActorOwnerComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorOwnerComponent(::ActorOwnerComponent&& other);

    MCAPI explicit ActorOwnerComponent(::std::unique_ptr<::Actor> uniqueActor);

    MCAPI ::Actor& getActor() const;

    MCAPI ::Actor& getActor();

    MCAPI ::ActorOwnerComponent& operator=(::ActorOwnerComponent&& other);

    MCAPI ~ActorOwnerComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorOwnerComponent&& other);

    MCAPI void* $ctor(::std::unique_ptr<::Actor> uniqueActor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
