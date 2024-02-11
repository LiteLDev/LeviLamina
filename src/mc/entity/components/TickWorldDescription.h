#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class TickWorldDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    TickWorldDescription& operator=(TickWorldDescription const&);
    TickWorldDescription(TickWorldDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@TickWorldDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1TickWorldDescription@@UEAA@XZ
    virtual ~TickWorldDescription();

    // vIndex: 2, symbol: ?deserializeData@TickWorldDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // symbol: ??0TickWorldDescription@@QEAA@XZ
    MCAPI TickWorldDescription();

    // NOLINTEND
};
