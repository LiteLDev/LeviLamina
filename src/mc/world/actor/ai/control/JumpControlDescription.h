#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct JumpControlDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    JumpControlDescription& operator=(JumpControlDescription const&) = delete;
    JumpControlDescription(JumpControlDescription const&)            = delete;
    JumpControlDescription()                                         = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@JumpControlDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@JumpControlDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1JumpControlDescription@@UEAA@XZ
    MCVAPI ~JumpControlDescription();

    // NOLINTEND
};
