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
    // vIndex: 0, symbol: ?getJsonName@MoveControlBasicDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@Description@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1MoveControlBasicDescription@@UEAA@XZ
    MCVAPI ~MoveControlBasicDescription();

    // NOLINTEND
};
