#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct PushableDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    PushableDescription& operator=(PushableDescription const&);
    PushableDescription(PushableDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@PushableDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@PushableDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1PushableDescription@@UEAA@XZ
    MCVAPI ~PushableDescription();

    // symbol: ??0PushableDescription@@QEAA@XZ
    MCAPI PushableDescription();

    // NOLINTEND
};
