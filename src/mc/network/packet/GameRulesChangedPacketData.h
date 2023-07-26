#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameRulesChangedPacketData {

public:
    // prevent constructor by default
    GameRulesChangedPacketData& operator=(GameRulesChangedPacketData const&) = delete;
    GameRulesChangedPacketData(GameRulesChangedPacketData const&)            = delete;
    GameRulesChangedPacketData()                                             = delete;

public:
    /**
     * @symbol ?addRule\@GameRulesChangedPacketData\@\@QEAAXAEBVGameRule\@\@\@Z
     */
    MCAPI void addRule(class GameRule const&); // NOLINT
    /**
     * @symbol
     * ?getRules\@GameRulesChangedPacketData\@\@QEBAAEBV?$vector\@VGameRule\@\@V?$allocator\@VGameRule\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class GameRule> const& getRules() const; // NOLINT
    /**
     * @symbol
     * ?setRules\@GameRulesChangedPacketData\@\@QEAAXV?$vector\@VGameRule\@\@V?$allocator\@VGameRule\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setRules(std::vector<class GameRule>); // NOLINT
    /**
     * @symbol ??1GameRulesChangedPacketData\@\@QEAA\@XZ
     */
    MCAPI ~GameRulesChangedPacketData(); // NOLINT
};
