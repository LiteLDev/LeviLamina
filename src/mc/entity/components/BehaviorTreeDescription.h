#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class BehaviorTreeDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    BehaviorTreeDescription& operator=(BehaviorTreeDescription const&);
    BehaviorTreeDescription(BehaviorTreeDescription const&);
    BehaviorTreeDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@BehaviorTreeDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@MobEffectChangeDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1BehaviorTreeDescription@@UEAA@XZ
    MCVAPI ~BehaviorTreeDescription();

    // NOLINTEND
};
