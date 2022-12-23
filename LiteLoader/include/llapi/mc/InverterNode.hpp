/**
 * @file  InverterNode.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InverterNode.
 *
 */
class InverterNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVERTERNODE
public:
    class InverterNode& operator=(class InverterNode const &) = delete;
    InverterNode(class InverterNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   93461359
     */
    virtual ~InverterNode();
    /**
     * @vftbl  1
     * @symbol ?tick@InverterNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     * @hash   165492898
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol ?initializeFromDefinition@InverterNode@@MEAAXAEAVActor@@@Z
     * @hash   -1205598561
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol ??0InverterNode@@QEAA@XZ
     * @hash   -1274142255
     */
    MCAPI InverterNode();

};