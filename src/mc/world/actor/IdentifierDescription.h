#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IdentifierDescription {
public:
    // prevent constructor by default
    IdentifierDescription& operator=(IdentifierDescription const&);
    IdentifierDescription(IdentifierDescription const&);
    IdentifierDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IdentifierDescription();

    // vIndex: 1
    virtual char const* getJsonName() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
