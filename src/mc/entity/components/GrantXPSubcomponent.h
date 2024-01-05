#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class GrantXPSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    GrantXPSubcomponent& operator=(GrantXPSubcomponent const&);
    GrantXPSubcomponent(GrantXPSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GrantXPSubcomponent@@UEAA@XZ
    virtual ~GrantXPSubcomponent() = default;

    // vIndex: 1, symbol: ?readfromJSON@GrantXPSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value& component, class SemVersion const& engineVersion);

    // vIndex: 2, symbol: ?writetoJSON@GrantXPSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3, symbol: ?doOnHitEffect@GrantXPSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component);

    // vIndex: 4, symbol: ?getName@GrantXPSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0GrantXPSubcomponent@@QEAA@XZ
    MCAPI GrantXPSubcomponent();

    // NOLINTEND
};
