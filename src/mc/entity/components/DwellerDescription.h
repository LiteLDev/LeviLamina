#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class DwellerDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    DwellerDescription& operator=(DwellerDescription const&);
    DwellerDescription(DwellerDescription const&);
    DwellerDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@DwellerDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@DwellerDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1DwellerDescription@@UEAA@XZ
    MCVAPI ~DwellerDescription();

    // NOLINTEND
};
