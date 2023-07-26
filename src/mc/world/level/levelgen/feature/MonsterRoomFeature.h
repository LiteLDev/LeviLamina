#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class MonsterRoomFeature : public ::Feature {

public:
    // prevent constructor by default
    MonsterRoomFeature& operator=(MonsterRoomFeature const&) = delete;
    MonsterRoomFeature(MonsterRoomFeature const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@MonsterRoomFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MONSTERROOMFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MonsterRoomFeature(); // NOLINT
#endif
    /**
     * @symbol ??0MonsterRoomFeature\@\@QEAA\@XZ
     */
    MCAPI MonsterRoomFeature(); // NOLINT
};
