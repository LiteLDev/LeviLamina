/**
 * @file  EntityExitVolumeSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityExitVolumeSystem.
 *
 */
class EntityExitVolumeSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYEXITVOLUMESYSTEM
public:
    class EntityExitVolumeSystem& operator=(class EntityExitVolumeSystem const &) = delete;
    EntityExitVolumeSystem(class EntityExitVolumeSystem const &) = delete;
    EntityExitVolumeSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EntityExitVolumeSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   1444598154
     * @vftbl  2
     * @symbol ?tick@EntityExitVolumeSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @hash   1222030215
     * @symbol ??0EntityExitVolumeSystem@@QEAA@V?$not_null@V?$NonOwnerPointer@$$CBVILevel@@@Bedrock@@@gsl@@@Z
     */
    MCAPI EntityExitVolumeSystem(class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel const>>);

//private:
    /**
     * @hash   82364089
     * @symbol ?_tick@EntityExitVolumeSystem@@AEBAXAEAVEntityContext@@AEAVVolumeBoundsComponent@@AEAVEntitiesInsideVolumeComponent@@@Z
     */
    MCAPI void _tick(class EntityContext &, class VolumeBoundsComponent &, class EntitiesInsideVolumeComponent &) const;

private:

};