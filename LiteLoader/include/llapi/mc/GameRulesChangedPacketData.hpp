/**
 * @file  GameRulesChangedPacketData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameRulesChangedPacketData.
 *
 */
class GameRulesChangedPacketData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULESCHANGEDPACKETDATA
public:
    class GameRulesChangedPacketData& operator=(class GameRulesChangedPacketData const &) = delete;
    GameRulesChangedPacketData(class GameRulesChangedPacketData const &) = delete;
    GameRulesChangedPacketData() = delete;
#endif

public:
    /**
     * @hash   -26020732
     * @symbol ?addRule@GameRulesChangedPacketData@@QEAAXAEBVGameRule@@@Z
     */
    MCAPI void addRule(class GameRule const &);
    /**
     * @hash   1058000082
     * @symbol ?getRules@GameRulesChangedPacketData@@QEBAAEBV?$vector@VGameRule@@V?$allocator@VGameRule@@@std@@@std@@XZ
     */
    MCAPI std::vector<class GameRule> const & getRules() const;
    /**
     * @hash   -706609772
     * @symbol ?setRules@GameRulesChangedPacketData@@QEAAXV?$vector@VGameRule@@V?$allocator@VGameRule@@@std@@@std@@@Z
     */
    MCAPI void setRules(std::vector<class GameRule>);
    /**
     * @hash   164845499
     * @symbol ??1GameRulesChangedPacketData@@QEAA@XZ
     */
    MCAPI ~GameRulesChangedPacketData();

};