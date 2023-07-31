#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameRulesChangedPacketData {

public:
    // prevent constructor by default
    GameRulesChangedPacketData& operator=(GameRulesChangedPacketData const&) = delete;
    GameRulesChangedPacketData(GameRulesChangedPacketData const&)            = delete;
    GameRulesChangedPacketData()                                             = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
