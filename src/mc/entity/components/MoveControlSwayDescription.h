#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class MoveControlSwayDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    MoveControlSwayDescription& operator=(MoveControlSwayDescription const&);
    MoveControlSwayDescription(MoveControlSwayDescription const&);
    MoveControlSwayDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@MoveControlSwayDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1MoveControlSwayDescription@@UEAA@XZ
    virtual ~MoveControlSwayDescription();

    // vIndex: 2, symbol: ?deserializeData@MoveControlSwayDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
