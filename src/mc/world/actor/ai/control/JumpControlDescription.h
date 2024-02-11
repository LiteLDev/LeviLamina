#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct JumpControlDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    JumpControlDescription& operator=(JumpControlDescription const&);
    JumpControlDescription(JumpControlDescription const&);
    JumpControlDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@JumpControlDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1JumpControlDescription@@UEAA@XZ
    virtual ~JumpControlDescription();

    // vIndex: 2, symbol: ?deserializeData@JumpControlDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
