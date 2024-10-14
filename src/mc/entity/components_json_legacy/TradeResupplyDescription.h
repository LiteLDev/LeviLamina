#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class TradeResupplyDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    TradeResupplyDescription& operator=(TradeResupplyDescription const&);
    TradeResupplyDescription(TradeResupplyDescription const&);
    TradeResupplyDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~TradeResupplyDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
