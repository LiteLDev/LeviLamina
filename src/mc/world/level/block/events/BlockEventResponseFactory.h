#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/EventResponseFactory.h"

class BlockEventResponseFactory : public ::EventResponseFactory {
public:
    // prevent constructor by default
    BlockEventResponseFactory& operator=(BlockEventResponseFactory const&);
    BlockEventResponseFactory(BlockEventResponseFactory const&);
    BlockEventResponseFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventResponseFactory();

    // vIndex: 1
    virtual void initializeFactory(class Experiments const& experiments);

    // vIndex: 2
    virtual void initSchema();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI void initSchema$();

    MCAPI void initializeFactory$(class Experiments const& experiments);

    // NOLINTEND
};
