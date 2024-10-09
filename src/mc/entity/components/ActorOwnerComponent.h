#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorOwnerComponent {
public:
    // prevent constructor by default
    ActorOwnerComponent& operator=(ActorOwnerComponent const&);
    ActorOwnerComponent(ActorOwnerComponent const&);
    ActorOwnerComponent();

public:
    // NOLINTBEGIN
    MCAPI ActorOwnerComponent(class ActorOwnerComponent&& other);

    MCAPI explicit ActorOwnerComponent(std::unique_ptr<class Actor> uniqueActor);

    MCAPI class Actor& getActor() const;

    MCAPI class Actor& getActor();

    MCAPI class ActorOwnerComponent& operator=(class ActorOwnerComponent&& other);

    MCAPI ~ActorOwnerComponent();

    // NOLINTEND
};
