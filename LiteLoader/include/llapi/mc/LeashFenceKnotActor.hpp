/**
 * @file  LeashFenceKnotActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Actor.hpp"
#include "../../HangingActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LeashFenceKnotActor.
 *
 */
class LeashFenceKnotActor : public HangingActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEASHFENCEKNOTACTOR
public:
    class LeashFenceKnotActor& operator=(class LeashFenceKnotActor const &) = delete;
    LeashFenceKnotActor(class LeashFenceKnotActor const &) = delete;
    LeashFenceKnotActor() = delete;
#endif

public:
    /**
     * @hash   -755937820
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@LeashFenceKnotActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~LeashFenceKnotActor();
    /**
     * @hash   738356130
     * @vftbl  19
     * @symbol  ?remove\@LeashFenceKnotActor\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   1492738054
     * @vftbl  44
     * @symbol  ?teleportTo\@LeashFenceKnotActor\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @hash   -286830547
     * @vftbl  81
     * @symbol  ?getShadowRadius\@LeashFenceKnotActor\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @hash   -235960555
     * @vftbl  96
     * @symbol  ?isPickable\@LeashFenceKnotActor\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @hash   -1235597870
     * @vftbl  231
     * @symbol  ?getInteraction\@LeashFenceKnotActor\@\@UEAA_NAEAVPlayer\@\@AEAVActorInteraction\@\@AEBVVec3\@\@\@Z
     */
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   -2068040930
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@LeashFenceKnotActor\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   70265279
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@LeashFenceKnotActor\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   1304520748
     * @vftbl  276
     * @symbol  ?_onSizeUpdated\@LeashFenceKnotActor\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @hash   -879096074
     * @vftbl  278
     * @symbol  ?setDir\@LeashFenceKnotActor\@\@UEAAXH\@Z
     */
    virtual void setDir(int);
    /**
     * @hash   -1680725230
     * @vftbl  279
     * @symbol  ?getWidth\@LeashFenceKnotActor\@\@UEBAHXZ
     */
    virtual int getWidth() const;
    /**
     * @hash   2133973695
     * @vftbl  280
     * @symbol  ?getHeight\@LeashFenceKnotActor\@\@UEBAHXZ
     */
    virtual int getHeight() const;
    /**
     * @hash   -759598768
     * @vftbl  281
     * @symbol  ?dropItem\@LeashFenceKnotActor\@\@UEAAXXZ
     */
    virtual void dropItem();
    /**
     * @hash   -432711977
     * @vftbl  283
     * @symbol  ?wouldSurvive\@LeashFenceKnotActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool wouldSurvive(class BlockSource &);
    /**
     * @hash   -249433291
     * @symbol  ??0LeashFenceKnotActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI LeashFenceKnotActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -540795504
     * @symbol  ?numberofAnimalsAttached\@LeashFenceKnotActor\@\@QEAAHXZ
     */
    MCAPI int numberofAnimalsAttached();

};