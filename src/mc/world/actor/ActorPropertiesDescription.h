#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorPropertiesDescription {
public:
    // prevent constructor by default
    ActorPropertiesDescription(ActorPropertiesDescription const&);
    ActorPropertiesDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorPropertiesDescription();

    // vIndex: 1
    virtual char const* getJsonName() const;

    MCAPI struct ActorPropertiesDescription& operator=(struct ActorPropertiesDescription const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
