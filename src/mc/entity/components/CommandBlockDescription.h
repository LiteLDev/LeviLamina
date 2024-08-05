#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class CommandBlockDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    CommandBlockDescription& operator=(CommandBlockDescription const&);
    CommandBlockDescription(CommandBlockDescription const&);
    CommandBlockDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~CommandBlockDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
