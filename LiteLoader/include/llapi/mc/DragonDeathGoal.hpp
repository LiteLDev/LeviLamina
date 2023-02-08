/**
 * @file  DragonDeathGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonDeathGoal.
 *
 */
class DragonDeathGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONDEATHGOAL
public:
    class DragonDeathGoal& operator=(class DragonDeathGoal const &) = delete;
    DragonDeathGoal(class DragonDeathGoal const &) = delete;
    DragonDeathGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DragonDeathGoal();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   302916725
     * @vftbl  4
     * @symbol  ?start\@DragonDeathGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1192267957
     * @vftbl  5
     * @symbol  ?stop\@DragonDeathGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1030938032
     * @vftbl  6
     * @symbol  ?tick\@DragonDeathGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1450076692
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@DragonDeathGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONDEATHGOAL
    /**
     * @hash   1533860698
     * @symbol  ?canContinueToUse\@DragonDeathGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
    /**
     * @hash   792968060
     * @symbol  ?canUse\@DragonDeathGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse();
#endif
    /**
     * @hash   -1105506061
     * @symbol  ??0DragonDeathGoal\@\@QEAA\@AEAVEnderDragon\@\@\@Z
     */
    MCAPI DragonDeathGoal(class EnderDragon &);

};