#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class PlaceBlockNode : public ::BehaviorNode {

public:
    // prevent constructor by default
    PlaceBlockNode& operator=(PlaceBlockNode const&) = delete;
    PlaceBlockNode(PlaceBlockNode const&)            = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
