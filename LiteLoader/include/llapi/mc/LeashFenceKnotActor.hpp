/**
 * @file  LeashFenceKnotActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "HangingActor.hpp"

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
     * @vftbl 10
     * @symbol ?reloadHardcoded\@LeashFenceKnotActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol ?remove\@LeashFenceKnotActor\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 38
     * @symbol ?teleportTo\@LeashFenceKnotActor\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol ?getShadowRadius\@LeashFenceKnotActor\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl 81
     * @symbol ?isPickable\@LeashFenceKnotActor\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl 92
     * @symbol __unk_vfn_92
     */
    virtual void __unk_vfn_92();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 198
     * @symbol __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl 199
     * @symbol __unk_vfn_199
     */
    virtual void __unk_vfn_199();
    /**
     * @vftbl 205
     * @symbol ?getInteraction\@LeashFenceKnotActor\@\@UEAA_NAEAVPlayer\@\@AEAVActorInteraction\@\@AEBVVec3\@\@\@Z
     */
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 239
     * @symbol ?readAdditionalSaveData\@LeashFenceKnotActor\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 240
     * @symbol ?addAdditionalSaveData\@LeashFenceKnotActor\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 247
     * @symbol ?_onSizeUpdated\@LeashFenceKnotActor\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl 248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl 249
     * @symbol ?setDir\@LeashFenceKnotActor\@\@UEAAXH\@Z
     */
    virtual void setDir(int);
    /**
     * @vftbl 250
     * @symbol ?getWidth\@LeashFenceKnotActor\@\@UEBAHXZ
     */
    virtual int getWidth() const;
    /**
     * @vftbl 251
     * @symbol ?getHeight\@LeashFenceKnotActor\@\@UEBAHXZ
     */
    virtual int getHeight() const;
    /**
     * @vftbl 252
     * @symbol ?dropItem\@LeashFenceKnotActor\@\@UEAAXXZ
     */
    virtual void dropItem();
    /**
     * @vftbl 254
     * @symbol ?wouldSurvive\@LeashFenceKnotActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool wouldSurvive(class BlockSource &);
    /**
     * @symbol ??0LeashFenceKnotActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI LeashFenceKnotActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?numberofAnimalsAttached\@LeashFenceKnotActor\@\@QEAAHXZ
     */
    MCAPI int numberofAnimalsAttached();
    /**
     * @symbol ?removeAnimals\@LeashFenceKnotActor\@\@QEAAXXZ
     */
    MCAPI void removeAnimals();

};
