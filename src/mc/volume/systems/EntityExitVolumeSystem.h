#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/systems/ITickingSystem.h"

class EntityExitVolumeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    EntityExitVolumeSystem& operator=(EntityExitVolumeSystem const&);
    EntityExitVolumeSystem(EntityExitVolumeSystem const&);
    EntityExitVolumeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@EntityExitVolumeSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // symbol: ??0EntityExitVolumeSystem@@QEAA@V?$not_null@V?$NonOwnerPointer@$$CBVILevel@@@Bedrock@@@gsl@@@Z
    MCAPI explicit EntityExitVolumeSystem(gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel const>>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tick@EntityExitVolumeSystem@@AEBAXAEAVEntityContext@@AEAVVolumeBoundsComponent@@AEAVEntitiesInsideVolumeComponent@@@Z
    MCAPI void _tick(class EntityContext&, class VolumeBoundsComponent&, class EntitiesInsideVolumeComponent&) const;

    // NOLINTEND
};
