#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/GameRule.h"

class GameRules {
public:
    // prevent constructor by default
    GameRules& operator=(GameRules const&);

public:
    // NOLINTBEGIN
    // symbol: ??0GameRules@@QEAA@XZ
    MCAPI GameRules();

    // symbol: ??0GameRules@@QEAA@AEBV0@@Z
    MCAPI GameRules(class GameRules const&);

    // symbol:
    // ?createAllGameRulesPacket@GameRules@@QEBA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class GameRulesChangedPacket> createAllGameRulesPacket() const;

    // symbol: ?deserializeRules@GameRules@@QEAAXAEBVGameRulesChangedPacketData@@@Z
    MCAPI void deserializeRules(class GameRulesChangedPacketData const& ruleData);

    // symbol: ?getBool@GameRules@@QEBA_NUGameRuleId@@_N@Z
    MCAPI bool getBool(struct GameRuleId, bool) const;

    // symbol: ?getInt@GameRules@@QEBAHUGameRuleId@@@Z
    MCAPI int getInt(struct GameRuleId ruleType) const;

    // symbol: ?getRule@GameRules@@QEBAPEBVGameRule@@UGameRuleId@@@Z
    MCAPI class GameRule const* getRule(struct GameRuleId rule) const;

    // symbol: ?getRules@GameRules@@QEBAAEBV?$vector@VGameRule@@V?$allocator@VGameRule@@@std@@@std@@XZ
    MCAPI std::vector<class GameRule> const& getRules() const;

    // symbol: ?getTagData@GameRules@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void getTagData(class CompoundTag const& tag);

    // symbol: ?hasRule@GameRules@@QEBA_NUGameRuleId@@@Z
    MCAPI bool hasRule(struct GameRuleId ruleType) const;

    // symbol:
    // ?nameToGameRuleIndex@GameRules@@QEBA?AUGameRuleId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct GameRuleId nameToGameRuleIndex(std::string const& name) const;

    // symbol: ?setMarketplaceOverrides@GameRules@@QEAAXXZ
    MCAPI void setMarketplaceOverrides();

    // symbol:
    // ?setRule@GameRules@@QEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@UGameRuleId@@_N1PEA_N2PEAVValidationError@GameRule@@@Z
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(
        struct GameRuleId                rule,
        bool                             value,
        bool                             returnPacket,
        bool*                            pValueValidated,
        bool*                            pValueChanged,
        class GameRule::ValidationError* errorOutput
    );

    // symbol:
    // ?setRule@GameRules@@QEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@UGameRuleId@@M_NPEA_N2PEAVValidationError@GameRule@@@Z
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(
        struct GameRuleId                rule,
        float                            value,
        bool                             returnPacket,
        bool*                            pValueValidated,
        bool*                            pValueChanged,
        class GameRule::ValidationError* errorOutput
    );

    // symbol:
    // ?setRule@GameRules@@QEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@UGameRuleId@@H_NPEA_N2PEAVValidationError@GameRule@@@Z
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(
        struct GameRuleId                rule,
        int                              value,
        bool                             returnPacket,
        bool*                            pValueValidated,
        bool*                            pValueChanged,
        class GameRule::ValidationError* errorOutput
    );

    // symbol: ?setTagData@GameRules@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void setTagData(class CompoundTag& tag) const;

    // symbol: ??1GameRules@@QEAA@XZ
    MCAPI ~GameRules();

    // symbol: ?DEFAULT_PLAYER_SPAWN_RADIUS@GameRules@@2IB
    MCAPI static uint const DEFAULT_PLAYER_SPAWN_RADIUS;

    // symbol: ?DEFAULT_RANDOMTICKSPEED@GameRules@@2HB
    MCAPI static int const DEFAULT_RANDOMTICKSPEED;

    // symbol: ?MAX_FUNCTIONCOMMANDLIMIT@GameRules@@2HB
    MCAPI static int const MAX_FUNCTIONCOMMANDLIMIT;

    // symbol: ?MAX_PLAYER_SPAWN_RADIUS@GameRules@@2IB
    MCAPI static uint const MAX_PLAYER_SPAWN_RADIUS;

    // symbol: ?MAX_RANDOMTICKSPEED@GameRules@@2HB
    MCAPI static int const MAX_RANDOMTICKSPEED;

    // symbol: ?MIN_PLAYER_SPAWN_RADIUS@GameRules@@2IB
    MCAPI static uint const MIN_PLAYER_SPAWN_RADIUS;

    // symbol: ?WORLD_POLICY_TAG_NAME@GameRules@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const WORLD_POLICY_TAG_NAME;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_registerRule@GameRules@@AEAAAEAVGameRule@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UGameRuleId@@@Z
    MCAPI class GameRule& _registerRule(std::string const& name, struct GameRuleId rule);

    // symbol: ?_registerRules@GameRules@@AEAAXXZ
    MCAPI void _registerRules();

    // symbol:
    // ?_setGameRule@GameRules@@AEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@PEAVGameRule@@TValue@4@W4Type@4@_NPEA_N4PEAVValidationError@4@@Z
    MCAPI std::unique_ptr<class GameRulesChangedPacket>
    _setGameRule(class GameRule*, union GameRule::Value, ::GameRule::Type, bool, bool*, bool*, class GameRule::ValidationError*);

    // symbol:
    // ?_setRule@GameRules@@AEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@UGameRuleId@@TValue@GameRule@@W4Type@6@_NPEA_N4PEAVValidationError@6@@Z
    MCAPI std::unique_ptr<class GameRulesChangedPacket> _setRule(
        struct GameRuleId                ruleType,
        union GameRule::Value            value,
        ::GameRule::Type                 type,
        bool                             returnPacket,
        bool*                            pValueValidated,
        bool*                            pValueChanged,
        class GameRule::ValidationError* errorOutput
    );

    // symbol:
    // ?_getMarketplaceGameRulesDefaultMap@GameRules@@CAAEBV?$map@UGameRuleId@@VGameRule@@U?$less@UGameRuleId@@@std@@V?$allocator@U?$pair@$$CBUGameRuleId@@VGameRule@@@std@@@4@@std@@XZ
    MCAPI static std::map<struct GameRuleId, class GameRule> const& _getMarketplaceGameRulesDefaultMap();

    // NOLINTEND
};
