#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class MoveControlSkipDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    MoveControlSkipDescription& operator=(MoveControlSkipDescription const&);
    MoveControlSkipDescription(MoveControlSkipDescription const&);
    MoveControlSkipDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~MoveControlSkipDescription();

    // NOLINTEND
};
