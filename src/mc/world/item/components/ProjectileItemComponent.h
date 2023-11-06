#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ProjectileItemComponent {
public:
    // prevent constructor by default
    ProjectileItemComponent& operator=(ProjectileItemComponent const&);
    ProjectileItemComponent(ProjectileItemComponent const&);
    ProjectileItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ProjectileItemComponent@@UEAA@XZ
    virtual ~ProjectileItemComponent();

    // symbol: ??0ProjectileItemComponent@@QEAA@W4ActorType@@M@Z
    MCAPI ProjectileItemComponent(::ActorType, float);

    // symbol: ?getShootDir@ProjectileItemComponent@@QEBA?AVVec3@@AEBVPlayer@@M@Z
    MCAPI class Vec3 getShootDir(class Player const&, float) const;

    // symbol: ?shootProjectile@ProjectileItemComponent@@QEBAPEAVActor@@AEAVBlockSource@@AEBVVec3@@1MPEAVPlayer@@@Z
    MCAPI class Actor*
    shootProjectile(class BlockSource&, class Vec3 const&, class Vec3 const&, float, class Player*) const;

    // symbol:
    // ?bindType@ProjectileItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@ProjectileItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
