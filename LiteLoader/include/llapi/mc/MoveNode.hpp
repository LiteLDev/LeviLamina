/**
 * @file  MoveNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveNode.
 *
 */
class MoveNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVENODE
public:
    class MoveNode& operator=(class MoveNode const &) = delete;
    MoveNode(class MoveNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveNode();
    /**
     * @hash   -1999678960
     * @vftbl  1
     * @symbol ?tick@MoveNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @hash   1428738052
     * @vftbl  2
     * @symbol ?initializeFromDefinition@MoveNode@@EEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   -1933948689
     * @symbol ??0MoveNode@@QEAA@XZ
     */
    MCAPI MoveNode();

//private:
    /**
     * @hash   -1379300546
     * @symbol ?convertDirectionStringToKeyPress@MoveNode@@AEAAEV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI unsigned char convertDirectionStringToKeyPress(std::string);

private:

};