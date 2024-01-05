#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class DouseFireSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    DouseFireSubcomponent& operator=(DouseFireSubcomponent const&);
    DouseFireSubcomponent(DouseFireSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DouseFireSubcomponent@@UEAA@XZ
    virtual ~DouseFireSubcomponent() = default;

    // vIndex: 1, symbol: ?readfromJSON@DouseFireSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value& component, class SemVersion const& engineVersion);

    // vIndex: 2, symbol: ?writetoJSON@DouseFireSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3, symbol: ?doOnHitEffect@DouseFireSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component);

    // vIndex: 4, symbol: ?getName@DouseFireSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0DouseFireSubcomponent@@QEAA@XZ
    MCAPI DouseFireSubcomponent();

    // symbol: ?douseFire@DouseFireSubcomponent@@QEAAXAEAVActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void douseFire(class Actor& owner, class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
