/**
 * @file  GameRulesChangedPacketData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -936525948
     * @symbol  ?addRule\@GameRulesChangedPacketData\@\@QEAAXAEBVGameRule\@\@\@Z
     */
    MCAPI void addRule(class GameRule const &);
    /**
     * @hash   1154622866
     * @symbol  ?getRules\@GameRulesChangedPacketData\@\@QEBAAEBV?$vector\@VGameRule\@\@V?$allocator\@VGameRule\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class GameRule> const & getRules() const;
    /**
     * @hash   -1617114988
     * @symbol  ?setRules\@GameRulesChangedPacketData\@\@QEAAXV?$vector\@VGameRule\@\@V?$allocator\@VGameRule\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setRules(std::vector<class GameRule>);
    /**
     * @hash   -714615573
     * @symbol  ??1GameRulesChangedPacketData\@\@QEAA\@XZ
     */
    MCAPI ~GameRulesChangedPacketData();

};