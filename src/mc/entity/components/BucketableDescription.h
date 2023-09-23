#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class BucketableDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    BucketableDescription& operator=(BucketableDescription const&);
    BucketableDescription(BucketableDescription const&);
    BucketableDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@BucketableDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@MobEffectChangeDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1BucketableDescription@@UEAA@XZ
    MCVAPI ~BucketableDescription();

    // NOLINTEND
};
