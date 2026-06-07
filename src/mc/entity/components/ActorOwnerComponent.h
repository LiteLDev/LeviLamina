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
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Actor>> mActor;
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

    MCFOLD ::Actor& getActor();

    MCFOLD ::Actor& getActor() const;

    MCAPI ::ActorOwnerComponent& operator=(::ActorOwnerComponent&& other);

    MCAPI ~ActorOwnerComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ActorOwnerComponent&& other);

    MCAPI void* $ctor(::std::unique_ptr<::Actor> uniqueActor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
