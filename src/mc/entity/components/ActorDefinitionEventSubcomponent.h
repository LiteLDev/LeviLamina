#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorDefinitionEventSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    ActorDefinitionEventSubcomponent& operator=(ActorDefinitionEventSubcomponent const&);
    ActorDefinitionEventSubcomponent(ActorDefinitionEventSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorDefinitionEventSubcomponent@@UEAA@XZ
    virtual ~ActorDefinitionEventSubcomponent() = default;

    // vIndex: 1, symbol: ?readfromJSON@ActorDefinitionEventSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
    virtual void readfromJSON(class Json::Value& component, class SemVersion const& engineVersion);

    // vIndex: 2, symbol: ?writetoJSON@ActorDefinitionEventSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3, symbol: ?doOnHitEffect@ActorDefinitionEventSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component);

    // vIndex: 4, symbol: ?getName@ActorDefinitionEventSubcomponent@@UEAAPEBDXZ
    virtual char const* getName();

    // symbol: ??0ActorDefinitionEventSubcomponent@@QEAA@XZ
    MCAPI ActorDefinitionEventSubcomponent();

    // NOLINTEND
};
