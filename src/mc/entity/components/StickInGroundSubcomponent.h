#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class StickInGroundSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    StickInGroundSubcomponent& operator=(StickInGroundSubcomponent const&);
    StickInGroundSubcomponent(StickInGroundSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~StickInGroundSubcomponent() = default;

    // vIndex: 1, symbol: ?readfromJSON@StickInGroundSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value&, class SemVersion const&);

    // vIndex: 2, symbol: ?writetoJSON@StickInGroundSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value&) const;

    // vIndex: 3, symbol: ?doOnHitEffect@StickInGroundSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);

    // vIndex: 4, symbol: ?getName@StickInGroundSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0StickInGroundSubcomponent@@QEAA@XZ
    MCAPI StickInGroundSubcomponent();

    // NOLINTEND
};
