/**
 * @file  GameRulesChangedPacketData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?addRule\@GameRulesChangedPacketData\@\@QEAAXAEBVGameRule\@\@\@Z
     */
    MCAPI void addRule(class GameRule const &);
    /**
     * @symbol  ?getRules\@GameRulesChangedPacketData\@\@QEBAAEBV?$vector\@VGameRule\@\@V?$allocator\@VGameRule\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class GameRule> const & getRules() const;
    /**
     * @symbol  ?setRules\@GameRulesChangedPacketData\@\@QEAAXV?$vector\@VGameRule\@\@V?$allocator\@VGameRule\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setRules(std::vector<class GameRule>);
    /**
     * @symbol  ??1GameRulesChangedPacketData\@\@QEAA\@XZ
     */
    MCAPI ~GameRulesChangedPacketData();

};