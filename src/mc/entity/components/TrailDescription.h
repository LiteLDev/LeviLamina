#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class TrailDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    TrailDescription& operator=(TrailDescription const&);
    TrailDescription(TrailDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@TrailDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1TrailDescription@@UEAA@XZ
    virtual ~TrailDescription();

    // vIndex: 2, symbol: ?deserializeData@TrailDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // symbol: ??0TrailDescription@@QEAA@XZ
    MCAPI TrailDescription();

    // NOLINTEND
};
