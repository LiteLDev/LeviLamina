#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class EntityExitVolumeSystem {

public:
    // prevent constructor by default
    EntityExitVolumeSystem& operator=(EntityExitVolumeSystem const&) = delete;
    EntityExitVolumeSystem(EntityExitVolumeSystem const&)            = delete;
    EntityExitVolumeSystem()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@EntityExitVolumeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    /**
     * @symbol
     * ??0EntityExitVolumeSystem\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@$$CBVILevel\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI EntityExitVolumeSystem(class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel const>>);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_tick\@EntityExitVolumeSystem\@\@AEBAXAEAVEntityContext\@\@AEAVVolumeBoundsComponent\@\@AEAVEntitiesInsideVolumeComponent\@\@\@Z
     */
    MCAPI void _tick(class EntityContext&, class VolumeBoundsComponent&, class EntitiesInsideVolumeComponent&) const;
    // NOLINTEND
};
