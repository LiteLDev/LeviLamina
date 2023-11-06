#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TeleportToSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    TeleportToSubcomponent& operator=(TeleportToSubcomponent const&);
    TeleportToSubcomponent(TeleportToSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~TeleportToSubcomponent();

    // vIndex: 1, symbol: ?readfromJSON@TeleportToSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value&, class SemVersion const&);

    // vIndex: 2, symbol: ?writetoJSON@TeleportToSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value&) const;

    // vIndex: 3, symbol: ?doOnHitEffect@TeleportToSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);

    // vIndex: 4, symbol: ?getName@TeleportToSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0TeleportToSubcomponent@@QEAA@XZ
    MCAPI TeleportToSubcomponent();

    // NOLINTEND
};
