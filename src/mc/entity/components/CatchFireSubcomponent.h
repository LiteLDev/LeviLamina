#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CatchFireSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    CatchFireSubcomponent& operator=(CatchFireSubcomponent const&);
    CatchFireSubcomponent(CatchFireSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CatchFireSubcomponent@@UEAA@XZ
    virtual ~CatchFireSubcomponent() = default;

    // vIndex: 1, symbol: ?readfromJSON@CatchFireSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value& component, class SemVersion const& engineVersion);

    // vIndex: 2, symbol: ?writetoJSON@CatchFireSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3, symbol: ?doOnHitEffect@CatchFireSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component);

    // vIndex: 4, symbol: ?getName@CatchFireSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0CatchFireSubcomponent@@QEAA@XZ
    MCAPI CatchFireSubcomponent();

    // NOLINTEND
};
