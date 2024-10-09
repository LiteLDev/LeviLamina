#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct PushableDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    PushableDescription& operator=(PushableDescription const&);
    PushableDescription(PushableDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~PushableDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    MCAPI PushableDescription();

    // NOLINTEND
};
