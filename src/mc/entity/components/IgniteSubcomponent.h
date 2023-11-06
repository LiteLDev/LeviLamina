#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IgniteSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    IgniteSubcomponent& operator=(IgniteSubcomponent const&);
    IgniteSubcomponent(IgniteSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~IgniteSubcomponent() = default;

    // vIndex: 1, symbol: ?readfromJSON@IgniteSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value&, class SemVersion const&);

    // vIndex: 2, symbol: ?writetoJSON@IgniteSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value&) const;

    // vIndex: 3, symbol: ?doOnHitEffect@IgniteSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);

    // vIndex: 4, symbol: ?getName@IgniteSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0IgniteSubcomponent@@QEAA@XZ
    MCAPI IgniteSubcomponent();

    // NOLINTEND
};
