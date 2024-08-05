#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct JumpControlDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    JumpControlDescription& operator=(JumpControlDescription const&);
    JumpControlDescription(JumpControlDescription const&);
    JumpControlDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~JumpControlDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
