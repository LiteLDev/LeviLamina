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
};
