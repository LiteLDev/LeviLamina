#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class AnimationsDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    AnimationsDescription& operator=(AnimationsDescription const&);
    AnimationsDescription(AnimationsDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@AnimationsDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1AnimationsDescription@@UEAA@XZ
    virtual ~AnimationsDescription();

    // vIndex: 2, symbol: ?deserializeData@AnimationsDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // symbol: ??0AnimationsDescription@@QEAA@XZ
    MCAPI AnimationsDescription();

    // NOLINTEND
};
