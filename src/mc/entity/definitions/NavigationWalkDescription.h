#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/NavigationDescription.h"

class NavigationWalkDescription : public ::NavigationDescription {
public:
    // prevent constructor by default
    NavigationWalkDescription& operator=(NavigationWalkDescription const&);
    NavigationWalkDescription(NavigationWalkDescription const&);
    NavigationWalkDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~NavigationWalkDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
