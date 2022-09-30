/**
 * @file  InteractActionNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InteractActionNode.
 *
 */
class InteractActionNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTACTIONNODE
public:
    class InteractActionNode& operator=(class InteractActionNode const &) = delete;
    InteractActionNode(class InteractActionNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~InteractActionNode();
    /**
     * @hash   -1940675925
     * @vftbl  1
     * @symbol ?tick@InteractActionNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @hash   -543657441
     * @vftbl  2
     * @symbol ?initializeFromDefinition@InteractActionNode@@EEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   -971746502
     * @symbol ??0InteractActionNode@@QEAA@XZ
     */
    MCAPI InteractActionNode();

};