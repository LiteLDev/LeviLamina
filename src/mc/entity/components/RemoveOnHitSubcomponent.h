#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RemoveOnHitSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    RemoveOnHitSubcomponent& operator=(RemoveOnHitSubcomponent const&);
    RemoveOnHitSubcomponent(RemoveOnHitSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RemoveOnHitSubcomponent@@UEAA@XZ
    virtual ~RemoveOnHitSubcomponent() = default;

    // vIndex: 1, symbol: ?readfromJSON@RemoveOnHitSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value& component, class SemVersion const& engineVersion);

    // vIndex: 2, symbol: ?writetoJSON@RemoveOnHitSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3, symbol: ?doOnHitEffect@RemoveOnHitSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component);

    // vIndex: 4, symbol: ?getName@RemoveOnHitSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0RemoveOnHitSubcomponent@@QEAA@XZ
    MCAPI RemoveOnHitSubcomponent();

    // NOLINTEND
};
