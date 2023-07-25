#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class NetherFortressStart : public ::StructureStart {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERFORTRESSSTART
public:
    NetherFortressStart& operator=(NetherFortressStart const&) = delete;
    NetherFortressStart(NetherFortressStart const&)            = delete;
    NetherFortressStart()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0NetherFortressStart\@\@QEAA\@AEAVRandom\@\@FHH\@Z
     */
    MCAPI NetherFortressStart(class Random&, short, int, int);
};
