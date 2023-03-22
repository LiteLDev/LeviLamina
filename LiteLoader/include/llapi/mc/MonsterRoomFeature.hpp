/**
 * @file  MonsterRoomFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MonsterRoomFeature.
 *
 */
class MonsterRoomFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MONSTERROOMFEATURE
public:
    class MonsterRoomFeature& operator=(class MonsterRoomFeature const &) = delete;
    MonsterRoomFeature(class MonsterRoomFeature const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@MonsterRoomFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MONSTERROOMFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MonsterRoomFeature();
#endif
    /**
     * @symbol ??0MonsterRoomFeature\@\@QEAA\@XZ
     */
    MCAPI MonsterRoomFeature();

};
