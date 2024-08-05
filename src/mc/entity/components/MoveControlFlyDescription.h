#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class MoveControlFlyDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    MoveControlFlyDescription& operator=(MoveControlFlyDescription const&);
    MoveControlFlyDescription(MoveControlFlyDescription const&);
    MoveControlFlyDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~MoveControlFlyDescription();

    // NOLINTEND
};
