#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IAddActorEntityProxy.h"

class AddActorEntityProxy : public ::IAddActorEntityProxy {
public:
    // prevent constructor by default
    AddActorEntityProxy& operator=(AddActorEntityProxy const&);
    AddActorEntityProxy(AddActorEntityProxy const&);
    AddActorEntityProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddActorEntityProxy() = default;

    // vIndex: 1
    virtual void initializeActor(class Actor& actor);

    // vIndex: 2
    virtual void reloadActor(class Actor& actor);

    MCAPI explicit AddActorEntityProxy(class Dimension& dimension);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void initializeActor$(class Actor& actor);

    MCAPI void reloadActor$(class Actor& actor);

    // NOLINTEND
};
