/**
 * @file  LavaSlime.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Slime.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LavaSlime.
 *
 */
class LavaSlime : public Slime {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAVASLIME
public:
    class LavaSlime& operator=(class LavaSlime const &) = delete;
    LavaSlime(class LavaSlime const &) = delete;
    LavaSlime() = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@LavaSlime\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
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
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 85
     * @symbol ?getBrightness\@LavaSlime\@\@UEBAMMAEBVIConstBlockSource\@\@\@Z
     */
    virtual float getBrightness(float, class IConstBlockSource const &) const;
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
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
     * @vftbl 102
     * @symbol ?isOnFire\@LavaSlime\@\@MEBA_NXZ
     */
    virtual bool isOnFire() const;
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
     * @vftbl 252
     * @symbol __unk_vfn_252
     */
    virtual void __unk_vfn_252();
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
     * @vftbl 285
     * @symbol ?checkSpawnRules\@LavaSlime\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
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
     * @vftbl 302
     * @symbol ?getArmorValue\@LavaSlime\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl 336
     * @symbol ?jumpFromGround\@LavaSlime\@\@MEAAXAEBVIConstBlockSource\@\@\@Z
     */
    virtual void jumpFromGround(class IConstBlockSource const &);
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343();
    /**
     * @vftbl 345
     * @symbol ?isDarkEnoughToSpawn\@LavaSlime\@\@UEBA_NXZ
     */
    virtual bool isDarkEnoughToSpawn() const;
    /**
     * @vftbl 349
     * @symbol ?doPlayLandSound\@LavaSlime\@\@MEAA_NXZ
     */
    virtual bool doPlayLandSound();
    /**
     * @vftbl 352
     * @symbol ?decreaseSquish\@LavaSlime\@\@MEAAXXZ
     */
    virtual void decreaseSquish();
    /**
     * @vftbl 353
     * @symbol ?createChild\@LavaSlime\@\@MEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@H\@Z
     */
    virtual class OwnerPtrT<struct EntityRefTraits> createChild(int);
    /**
     * @symbol ??0LavaSlime\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI LavaSlime(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};
