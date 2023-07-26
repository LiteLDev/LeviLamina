/**
 * @file  NetherFortressStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NetherFortressStart();
    /**
     * @symbol  ??0NetherFortressStart\@\@QEAA\@AEAVRandom\@\@FHH\@Z
     */
    MCAPI NetherFortressStart(class Random &, short, int, int);

};