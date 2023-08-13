#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class LookAtBlockNode : public ::BehaviorNode {

public:
    // prevent constructor by default
    LookAtBlockNode& operator=(LookAtBlockNode const&) = delete;
    LookAtBlockNode(LookAtBlockNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@LookAtBlockNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@LookAtBlockNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0LookAtBlockNode\@\@QEAA\@XZ
     */
    MCAPI LookAtBlockNode();
    // NOLINTEND
};
