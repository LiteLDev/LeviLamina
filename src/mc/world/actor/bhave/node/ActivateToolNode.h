#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class ActivateToolNode : public ::BehaviorNode {

public:
    // prevent constructor by default
    ActivateToolNode& operator=(ActivateToolNode const&) = delete;
    ActivateToolNode(ActivateToolNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@ActivateToolNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@ActivateToolNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0ActivateToolNode\@\@QEAA\@XZ
     */
    MCAPI ActivateToolNode();
    // NOLINTEND
};
