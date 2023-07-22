/**
 * @file  EntityEnterVolumeSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityEnterVolumeSystem.
 *
 */
class EntityEnterVolumeSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYENTERVOLUMESYSTEM
public:
    class EntityEnterVolumeSystem& operator=(class EntityEnterVolumeSystem const &) = delete;
    EntityEnterVolumeSystem(class EntityEnterVolumeSystem const &) = delete;
    EntityEnterVolumeSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EntityEnterVolumeSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@EntityEnterVolumeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol  ??0EntityEnterVolumeSystem\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@$$CBVILevel\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI EntityEnterVolumeSystem(class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel const>>);

//private:
    /**
     * @symbol  ?_tick\@EntityEnterVolumeSystem\@\@AEBAXAEAVEntityContext\@\@AEAVVolumeBoundsComponent\@\@\@Z
     */
    MCAPI void _tick(class EntityContext &, class VolumeBoundsComponent &) const;

private:

};