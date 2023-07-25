#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlaceBlockNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLACEBLOCKNODE
public:
    PlaceBlockNode& operator=(PlaceBlockNode const&) = delete;
    PlaceBlockNode(PlaceBlockNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@PlaceBlockNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @symbol ??0PlaceBlockNode\@\@QEAA\@XZ
     */
    MCAPI PlaceBlockNode();
};
