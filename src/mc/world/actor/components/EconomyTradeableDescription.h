#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class EconomyTradeableDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    EconomyTradeableDescription& operator=(EconomyTradeableDescription const&);
    EconomyTradeableDescription(EconomyTradeableDescription const&);
    EconomyTradeableDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@EconomyTradeableDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1EconomyTradeableDescription@@UEAA@XZ
    virtual ~EconomyTradeableDescription();

    // vIndex: 2, symbol: ?deserializeData@EconomyTradeableDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
