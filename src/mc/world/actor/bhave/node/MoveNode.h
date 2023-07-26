#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveNode {

public:
    // prevent constructor by default
    MoveNode& operator=(MoveNode const&) = delete;
    MoveNode(MoveNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@MoveNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@MoveNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0MoveNode\@\@QEAA\@XZ
     */
    MCAPI MoveNode(); // NOLINT

    // private:
    /**
     * @symbol
     * ?convertDirectionStringToKeyPress\@MoveNode\@\@AEAAEV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI unsigned char convertDirectionStringToKeyPress(std::string); // NOLINT

private:
};
