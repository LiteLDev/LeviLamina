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

    // vIndex: 1, symbol: ??1PushableDescription@@UEAA@XZ
    virtual ~PushableDescription();

    // vIndex: 2, symbol: ?deserializeData@PushableDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // symbol: ??0PushableDescription@@QEAA@XZ
    MCAPI PushableDescription();

    // NOLINTEND
};
