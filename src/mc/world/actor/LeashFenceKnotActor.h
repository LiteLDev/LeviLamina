#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/HangingActor.h"

class LeashFenceKnotActor : public ::HangingActor {

public:
    // prevent constructor by default
    LeashFenceKnotActor& operator=(LeashFenceKnotActor const&) = delete;
    LeashFenceKnotActor(LeashFenceKnotActor const&)            = delete;
    LeashFenceKnotActor()                                      = delete;

public:
    /**
     * @vftbl 10
     * @symbol
     * ?reloadHardcoded\@LeashFenceKnotActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?remove\@LeashFenceKnotActor\@\@UEAAXXZ
     */
    virtual void remove(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 38
     * @symbol ?teleportTo\@LeashFenceKnotActor\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool); // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@LeashFenceKnotActor\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const; // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 82
     * @symbol ?isPickable\@LeashFenceKnotActor\@\@UEAA_NXZ
     */
    virtual bool isPickable(); // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95(); // NOLINT
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96(); // NOLINT
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98(); // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202(); // NOLINT
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203(); // NOLINT
    /**
     * @vftbl 209
     * @symbol ?getInteraction\@LeashFenceKnotActor\@\@UEAA_NAEAVPlayer\@\@AEAVActorInteraction\@\@AEBVVec3\@\@\@Z
     */
    virtual bool getInteraction(class Player&, class ActorInteraction&, class Vec3 const&); // NOLINT
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219(); // NOLINT
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222(); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@LeashFenceKnotActor\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@LeashFenceKnotActor\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 252
     * @symbol ?_onSizeUpdated\@LeashFenceKnotActor\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 254
     * @symbol ?setDir\@LeashFenceKnotActor\@\@UEAAXH\@Z
     */
    virtual void setDir(int); // NOLINT
    /**
     * @vftbl 255
     * @symbol ?getWidth\@LeashFenceKnotActor\@\@UEBAHXZ
     */
    virtual int getWidth() const; // NOLINT
    /**
     * @vftbl 256
     * @symbol ?getHeight\@LeashFenceKnotActor\@\@UEBAHXZ
     */
    virtual int getHeight() const; // NOLINT
    /**
     * @vftbl 257
     * @symbol ?dropItem\@LeashFenceKnotActor\@\@UEAAXXZ
     */
    virtual void dropItem(); // NOLINT
    /**
     * @vftbl 259
     * @symbol ?wouldSurvive\@LeashFenceKnotActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool wouldSurvive(class BlockSource&); // NOLINT
    /**
     * @symbol
     * ??0LeashFenceKnotActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI
    LeashFenceKnotActor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?numberofAnimalsAttached\@LeashFenceKnotActor\@\@QEAAHXZ
     */
    MCAPI int numberofAnimalsAttached(); // NOLINT
    /**
     * @symbol ?removeAnimals\@LeashFenceKnotActor\@\@QEAAXXZ
     */
    MCAPI void removeAnimals(); // NOLINT
};
