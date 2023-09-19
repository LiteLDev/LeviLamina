#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class TeleportDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    TeleportDescription& operator=(TeleportDescription const&);
    TeleportDescription(TeleportDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@TeleportDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@TeleportDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1TeleportDescription@@UEAA@XZ
    MCVAPI ~TeleportDescription();

    // symbol: ??0TeleportDescription@@QEAA@XZ
    MCAPI TeleportDescription();

    // NOLINTEND
};
