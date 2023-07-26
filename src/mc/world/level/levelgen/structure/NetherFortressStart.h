#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class NetherFortressStart : public ::StructureStart {

public:
    // prevent constructor by default
    NetherFortressStart& operator=(NetherFortressStart const&) = delete;
    NetherFortressStart(NetherFortressStart const&)            = delete;
    NetherFortressStart()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @symbol ??0NetherFortressStart\@\@QEAA\@AEAVRandom\@\@FHH\@Z
     */
    MCAPI NetherFortressStart(class Random&, short, int, int); // NOLINT
};
