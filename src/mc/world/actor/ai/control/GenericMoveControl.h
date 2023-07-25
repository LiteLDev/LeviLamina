#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class GenericMoveControl : public ::MoveControl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENERICMOVECONTROL
public:
    GenericMoveControl& operator=(GenericMoveControl const&) = delete;
    GenericMoveControl(GenericMoveControl const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initializeInternal\@GenericMoveControl\@\@UEAAXAEAVMob\@\@PEAUMoveControlDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob&, struct MoveControlDescription*);
    /**
     * @vftbl 2
     * @symbol ?tick\@GenericMoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent&, class Mob&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GENERICMOVECONTROL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GenericMoveControl();
#endif
    /**
     * @symbol ??0GenericMoveControl\@\@QEAA\@XZ
     */
    MCAPI GenericMoveControl();
};
