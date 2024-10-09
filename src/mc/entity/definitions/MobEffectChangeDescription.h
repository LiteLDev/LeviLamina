#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEffectChangeDescription {
public:
    // prevent constructor by default
    MobEffectChangeDescription& operator=(MobEffectChangeDescription const&);
    MobEffectChangeDescription(MobEffectChangeDescription const&);
    MobEffectChangeDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~MobEffectChangeDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
