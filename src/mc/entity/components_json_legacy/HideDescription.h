#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class HideDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    HideDescription& operator=(HideDescription const&);
    HideDescription(HideDescription const&);
    HideDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~HideDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
