#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Facing.h"

class GetInteractionPositionForBlockNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETINTERACTIONPOSITIONFORBLOCKNODE
public:
    GetInteractionPositionForBlockNode& operator=(GetInteractionPositionForBlockNode const&) = delete;
    GetInteractionPositionForBlockNode(GetInteractionPositionForBlockNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@GetInteractionPositionForBlockNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@GetInteractionPositionForBlockNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0GetInteractionPositionForBlockNode\@\@QEAA\@XZ
     */
    MCAPI GetInteractionPositionForBlockNode();

    // private:
    /**
     * @symbol
     * ?parseFacingNameFromString\@GetInteractionPositionForBlockNode\@\@AEAA?AW4Name\@Facing\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class Facing::Name parseFacingNameFromString(std::string);

private:
};
