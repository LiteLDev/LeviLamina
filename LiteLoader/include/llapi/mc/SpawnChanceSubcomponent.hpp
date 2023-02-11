/**
 * @file  SpawnChanceSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnChanceSubcomponent.
 *
 */
class SpawnChanceSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNCHANCESUBCOMPONENT
public:
    class SpawnChanceSubcomponent& operator=(class SpawnChanceSubcomponent const &) = delete;
    SpawnChanceSubcomponent(class SpawnChanceSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SpawnChanceSubcomponent();
    /**
     * @hash   1550591276
     * @vftbl  1
     * @symbol  ?readfromJSON\@SpawnChanceSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -489908531
     * @vftbl  2
     * @symbol  ?writetoJSON\@SpawnChanceSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   -715113002
     * @vftbl  3
     * @symbol  ?doOnHitEffect\@SpawnChanceSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   669344833
     * @vftbl  4
     * @symbol  ?getName\@SpawnChanceSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   -572603432
     * @symbol  ??0SpawnChanceSubcomponent\@\@QEAA\@XZ
     */
    MCAPI SpawnChanceSubcomponent();

};