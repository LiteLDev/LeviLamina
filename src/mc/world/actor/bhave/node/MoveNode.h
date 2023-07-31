#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveNode {

public:
    // prevent constructor by default
    MoveNode& operator=(MoveNode const&) = delete;
    MoveNode(MoveNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@MoveNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@MoveNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0MoveNode\@\@QEAA\@XZ
     */
    MCAPI MoveNode();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?convertDirectionStringToKeyPress\@MoveNode\@\@AEAAEV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI unsigned char convertDirectionStringToKeyPress(std::string);
    // NOLINTEND
};
