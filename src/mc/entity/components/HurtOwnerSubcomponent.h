#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class HurtOwnerSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    HurtOwnerSubcomponent& operator=(HurtOwnerSubcomponent const&);
    HurtOwnerSubcomponent(HurtOwnerSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~HurtOwnerSubcomponent() = default;

    // vIndex: 1, symbol: ?readfromJSON@HurtOwnerSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value&, class SemVersion const&);

    // vIndex: 2, symbol: ?writetoJSON@HurtOwnerSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value&) const;

    // vIndex: 3, symbol: ?doOnHitEffect@HurtOwnerSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);

    // vIndex: 4, symbol: ?getName@HurtOwnerSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0HurtOwnerSubcomponent@@QEAA@XZ
    MCAPI HurtOwnerSubcomponent();

    // NOLINTEND
};
