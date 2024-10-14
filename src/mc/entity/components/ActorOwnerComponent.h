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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
