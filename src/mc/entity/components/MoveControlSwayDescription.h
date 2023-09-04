#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class MoveControlSwayDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    MoveControlSwayDescription& operator=(MoveControlSwayDescription const&) = delete;
    MoveControlSwayDescription(MoveControlSwayDescription const&)            = delete;
    MoveControlSwayDescription()                                             = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@MoveControlSwayDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@MoveControlSwayDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1MoveControlSwayDescription@@UEAA@XZ
    MCVAPI ~MoveControlSwayDescription();

    // NOLINTEND
};
