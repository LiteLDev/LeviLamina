#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct PreferredPathDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    PreferredPathDescription& operator=(PreferredPathDescription const&);
    PreferredPathDescription(PreferredPathDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~PreferredPathDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    MCAPI PreferredPathDescription();

    // NOLINTEND
};
