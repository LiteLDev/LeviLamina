#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/MoveControlDescription.h"

class MoveControlSwayDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    MoveControlSwayDescription& operator=(MoveControlSwayDescription const&);
    MoveControlSwayDescription(MoveControlSwayDescription const&);
    MoveControlSwayDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~MoveControlSwayDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
