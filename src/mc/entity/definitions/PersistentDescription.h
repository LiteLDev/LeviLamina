#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class PersistentDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    PersistentDescription& operator=(PersistentDescription const&);
    PersistentDescription(PersistentDescription const&);
    PersistentDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~PersistentDescription();

    // NOLINTEND
};
