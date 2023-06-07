/**
 * @file  TripodCamera.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TripodCamera.
 *
 */
class TripodCamera : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIPODCAMERA
public:
    class TripodCamera& operator=(class TripodCamera const &) = delete;
    TripodCamera(class TripodCamera const &) = delete;
    TripodCamera() = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@TripodCamera\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol ?remove\@TripodCamera\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol __unk_vfn_68
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl 77
     * @symbol ?getShadowHeightOffs\@TripodCamera\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl 78
     * @symbol ?getShadowRadius\@TripodCamera\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol ?isPickable\@TripodCamera\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 176
     * @symbol __unk_vfn_176
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl 190
     * @symbol __unk_vfn_190
     */
    virtual void __unk_vfn_190();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 216
     * @symbol __unk_vfn_216
     */
    virtual void __unk_vfn_216();
    /**
     * @vftbl 232
     * @symbol __unk_vfn_232
     */
    virtual void __unk_vfn_232();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 250
     * @symbol ?updateEntitySpecificMolangVariables\@TripodCamera\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl 252
     * @symbol __unk_vfn_252
     */
    virtual void __unk_vfn_252();
    /**
     * @vftbl 253
     * @symbol ?_hurt\@TripodCamera\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 267
     * @symbol __unk_vfn_267
     */
    virtual void __unk_vfn_267();
    /**
     * @vftbl 293
     * @symbol __unk_vfn_293
     */
    virtual void __unk_vfn_293();
    /**
     * @vftbl 297
     * @symbol __unk_vfn_297
     */
    virtual void __unk_vfn_297();
    /**
     * @vftbl 330
     * @symbol ?canExistWhenDisallowMob\@TripodCamera\@\@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const;
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRIPODCAMERA
    /**
     * @symbol ?breaksFallingBlocks\@TripodCamera\@\@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @symbol ?interactPreventDefault\@TripodCamera\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
    /**
     * @symbol ?isTargetable\@TripodCamera\@\@UEBA_NXZ
     */
    MCVAPI bool isTargetable() const;
#endif
    /**
     * @symbol ??0TripodCamera\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI TripodCamera(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?interactWithPlayer\@TripodCamera\@\@QEAA_NAEAVPlayer\@\@\@Z
     */
    MCAPI bool interactWithPlayer(class Player &);
    /**
     * @symbol ?isActivated\@TripodCamera\@\@QEBA_NXZ
     */
    MCAPI bool isActivated() const;
    /**
     * @symbol ?startTakingPicture\@TripodCamera\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void startTakingPicture(class Player &);

};
