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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MonsterRoomFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@MonsterRoomFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ??0MonsterRoomFeature\@\@QEAA\@XZ
     */
    MCAPI MonsterRoomFeature();

};