#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SpawnAoECloudSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    SpawnAoECloudSubcomponent& operator=(SpawnAoECloudSubcomponent const&);
    SpawnAoECloudSubcomponent(SpawnAoECloudSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SpawnAoECloudSubcomponent() = default;

    // vIndex: 1, symbol: ?readfromJSON@SpawnAoECloudSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value&, class SemVersion const&);

    // vIndex: 2, symbol: ?writetoJSON@SpawnAoECloudSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value&) const;

    // vIndex: 3, symbol: ?doOnHitEffect@SpawnAoECloudSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);

    // vIndex: 4, symbol: ?getName@SpawnAoECloudSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0SpawnAoECloudSubcomponent@@QEAA@XZ
    MCAPI SpawnAoECloudSubcomponent();

    // NOLINTEND
};
