#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameRulesChangedPacketData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULESCHANGEDPACKETDATA
public:
    GameRulesChangedPacketData& operator=(GameRulesChangedPacketData const&) = delete;
    GameRulesChangedPacketData(GameRulesChangedPacketData const&)            = delete;
    GameRulesChangedPacketData()                                             = delete;
#endif

public:
    /**
     * @symbol ?addRule\@GameRulesChangedPacketData\@\@QEAAXAEBVGameRule\@\@\@Z
     */
    MCAPI void addRule(class GameRule const&);
    /**
     * @symbol
     * ?getRules\@GameRulesChangedPacketData\@\@QEBAAEBV?$vector\@VGameRule\@\@V?$allocator\@VGameRule\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class GameRule> const& getRules() const;
    /**
     * @symbol
     * ?setRules\@GameRulesChangedPacketData\@\@QEAAXV?$vector\@VGameRule\@\@V?$allocator\@VGameRule\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setRules(std::vector<class GameRule>);
    /**
     * @symbol ??1GameRulesChangedPacketData\@\@QEAA\@XZ
     */
    MCAPI ~GameRulesChangedPacketData();
};
