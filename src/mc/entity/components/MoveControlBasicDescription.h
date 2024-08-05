#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class MoveControlBasicDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    MoveControlBasicDescription& operator=(MoveControlBasicDescription const&);
    MoveControlBasicDescription(MoveControlBasicDescription const&);
    MoveControlBasicDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~MoveControlBasicDescription();

    // NOLINTEND
};
