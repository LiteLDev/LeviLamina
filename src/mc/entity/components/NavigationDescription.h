#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct NavigationDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    NavigationDescription& operator=(NavigationDescription const&);
    NavigationDescription(NavigationDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 1, symbol: ??1NavigationDescription@@UEAA@XZ
    virtual ~NavigationDescription();

    // vIndex: 2, symbol: ?deserializeData@NavigationDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // symbol: ??0NavigationDescription@@QEAA@XZ
    MCAPI NavigationDescription();

    // NOLINTEND
};
