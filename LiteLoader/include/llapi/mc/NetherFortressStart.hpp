/**
 * @file  NetherFortressStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetherFortressStart.
 *
 */
class NetherFortressStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERFORTRESSSTART
public:
    class NetherFortressStart& operator=(class NetherFortressStart const &) = delete;
    NetherFortressStart(class NetherFortressStart const &) = delete;
    NetherFortressStart() = delete;
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
    MCAPI NetherFortressStart(class Random &, short, int, int);

};
