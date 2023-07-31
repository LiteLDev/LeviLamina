#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Facing.h"

class GetInteractionPositionForBlockNode {

public:
    // prevent constructor by default
    GetInteractionPositionForBlockNode& operator=(GetInteractionPositionForBlockNode const&) = delete;
    GetInteractionPositionForBlockNode(GetInteractionPositionForBlockNode const&)            = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?parseFacingNameFromString\@GetInteractionPositionForBlockNode\@\@AEAA?AW4Name\@Facing\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class Facing::Name parseFacingNameFromString(std::string);
    // NOLINTEND
};
