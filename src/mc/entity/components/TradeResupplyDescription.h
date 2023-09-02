#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class TradeResupplyDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    TradeResupplyDescription& operator=(TradeResupplyDescription const&) = delete;
    TradeResupplyDescription(TradeResupplyDescription const&)            = delete;
    TradeResupplyDescription()                                           = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@TradeResupplyDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@Description@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1TradeResupplyDescription@@UEAA@XZ
    MCVAPI ~TradeResupplyDescription();

    // NOLINTEND
};
