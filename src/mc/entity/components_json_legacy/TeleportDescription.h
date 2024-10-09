#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class TeleportDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    TeleportDescription& operator=(TeleportDescription const&);
    TeleportDescription(TeleportDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~TeleportDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    MCAPI TeleportDescription();

    // NOLINTEND
};
