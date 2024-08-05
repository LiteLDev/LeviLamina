#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class IllagerBeastBlockedDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    IllagerBeastBlockedDescription& operator=(IllagerBeastBlockedDescription const&);
    IllagerBeastBlockedDescription(IllagerBeastBlockedDescription const&);
    IllagerBeastBlockedDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~IllagerBeastBlockedDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
