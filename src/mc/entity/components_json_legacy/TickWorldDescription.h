#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class TickWorldDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    TickWorldDescription& operator=(TickWorldDescription const&);
    TickWorldDescription(TickWorldDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~TickWorldDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    MCAPI TickWorldDescription();

    // NOLINTEND
};
