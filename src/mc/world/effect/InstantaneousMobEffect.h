#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class InstantaneousMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    InstantaneousMobEffect& operator=(InstantaneousMobEffect const&);
    InstantaneousMobEffect(InstantaneousMobEffect const&);
    InstantaneousMobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InstantaneousMobEffect@@UEAA@XZ
    virtual ~InstantaneousMobEffect() = default;

    // vIndex: 5, symbol: ?isInstantaneous@InstantaneousMobEffect@@UEBA_NXZ
    virtual bool isInstantaneous() const;

    // vIndex: 7, symbol: ?isDurationEffectTick@InstantaneousMobEffect@@UEBA_NHH@Z
    virtual bool isDurationEffectTick(int remainingDuration, int) const;

    // symbol: ??0InstantaneousMobEffect@@QEAA@IAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_NHH@Z
    MCAPI InstantaneousMobEffect(
        uint               _id,
        std::string const& resourceName,
        std::string const& locName,
        bool               isHarmful,
        int                color,
        int                icon
    );

    // NOLINTEND
};
