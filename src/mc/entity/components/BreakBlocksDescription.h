#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct BreakBlocksDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    BreakBlocksDescription& operator=(BreakBlocksDescription const&) = delete;
    BreakBlocksDescription(BreakBlocksDescription const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@BreakBlocksDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@BreakBlocksDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1BreakBlocksDescription@@UEAA@XZ
    MCVAPI ~BreakBlocksDescription();

    // symbol: ??0BreakBlocksDescription@@QEAA@XZ
    MCAPI BreakBlocksDescription();

    // NOLINTEND
};
