#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ThrowableItemComponent {
public:
    // prevent constructor by default
    ThrowableItemComponent& operator=(ThrowableItemComponent const&);
    ThrowableItemComponent(ThrowableItemComponent const&);
    ThrowableItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ThrowableItemComponent();

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@ThrowableItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // symbol: ??0ThrowableItemComponent@@QEAA@_N@Z
    MCAPI explicit ThrowableItemComponent(bool);

    // symbol:
    // ?bindType@ThrowableItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@ThrowableItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_doThrow@ThrowableItemComponent@@AEBAXAEAVItemStack@@AEAVPlayer@@AEBVProjectileItemComponent@@M@Z
    MCAPI void _doThrow(class ItemStack&, class Player&, class ProjectileItemComponent const&, float) const;

    // symbol: ?_getLaunchPower@ThrowableItemComponent@@AEBAMHHH@Z
    MCAPI float _getLaunchPower(int, int, int) const;

    // NOLINTEND
};
