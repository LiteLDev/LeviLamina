#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class HideDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    HideDescription& operator=(HideDescription const&);
    HideDescription(HideDescription const&);
    HideDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@HideDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@MobEffectChangeDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1HideDescription@@UEAA@XZ
    MCVAPI ~HideDescription();

    // NOLINTEND
};
