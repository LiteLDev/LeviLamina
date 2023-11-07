#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/AttributeDescription.h"

class MobEffectChangeDescription : public ::AttributeDescription {
public:
    // prevent constructor by default
    MobEffectChangeDescription& operator=(MobEffectChangeDescription const&);
    MobEffectChangeDescription(MobEffectChangeDescription const&);
    MobEffectChangeDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@MobEffectChangeDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1MobEffectChangeDescription@@UEAA@XZ
    virtual ~MobEffectChangeDescription();

    // vIndex: 2, symbol: ?deserializeData@MobEffectChangeDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // NOLINTEND
};
