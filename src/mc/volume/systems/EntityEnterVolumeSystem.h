#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/systems/ITickingSystem.h"

class EntityEnterVolumeSystem : public ::ITickingSystem {

public:
    // prevent constructor by default
    EntityEnterVolumeSystem& operator=(EntityEnterVolumeSystem const&) = delete;
    EntityEnterVolumeSystem(EntityEnterVolumeSystem const&)            = delete;
    EntityEnterVolumeSystem()                                          = delete;

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
     * @symbol ?tick\@EntityEnterVolumeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    /**
     * @symbol
     * ??0EntityEnterVolumeSystem\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@$$CBVILevel\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI EntityEnterVolumeSystem(class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel const>>);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_tick\@EntityEnterVolumeSystem\@\@AEBAXAEAVEntityContext\@\@AEAVVolumeBoundsComponent\@\@\@Z
     */
    MCAPI void _tick(class EntityContext&, class VolumeBoundsComponent&) const;
    // NOLINTEND
};
