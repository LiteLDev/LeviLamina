#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Description.h"

struct AttributeDescription : public ::Description {
public:
    // prevent constructor by default
    AttributeDescription& operator=(AttributeDescription const&);
    AttributeDescription(AttributeDescription const&);
    AttributeDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~AttributeDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
