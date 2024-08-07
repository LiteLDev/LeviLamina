#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class GenericMoveControlDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    GenericMoveControlDescription& operator=(GenericMoveControlDescription const&);
    GenericMoveControlDescription(GenericMoveControlDescription const&);
    GenericMoveControlDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~GenericMoveControlDescription();

    // NOLINTEND
};
