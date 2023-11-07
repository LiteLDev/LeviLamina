#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FreezeOnHitSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    FreezeOnHitSubcomponent& operator=(FreezeOnHitSubcomponent const&);
    FreezeOnHitSubcomponent(FreezeOnHitSubcomponent const&);
    FreezeOnHitSubcomponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FreezeOnHitSubcomponent() = default;

    // vIndex: 1, symbol: ?readfromJSON@FreezeOnHitSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value&, class SemVersion const&);

    // vIndex: 2, symbol: ?writetoJSON@FreezeOnHitSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value&) const;

    // vIndex: 3, symbol: ?doOnHitEffect@FreezeOnHitSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);

    // vIndex: 4, symbol: ?getName@FreezeOnHitSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // NOLINTEND
};
