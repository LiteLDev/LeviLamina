#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/GameRule.h"

class GameRules {

public:
    // prevent constructor by default
    GameRules& operator=(GameRules const&) = delete;

public:
    /**
     * @symbol ??0GameRules\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI GameRules(class GameRules const&); // NOLINT
    /**
     * @symbol ??0GameRules\@\@QEAA\@XZ
     */
    MCAPI GameRules(); // NOLINT
    /**
     * @symbol
     * ?createAllGameRulesPacket\@GameRules\@\@QEBA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> createAllGameRulesPacket() const; // NOLINT
    /**
     * @symbol ?deserializeRules\@GameRules\@\@QEAAXAEBVGameRulesChangedPacketData\@\@\@Z
     */
    MCAPI void deserializeRules(class GameRulesChangedPacketData const&); // NOLINT
    /**
     * @symbol ?getBool\@GameRules\@\@QEBA_NUGameRuleId\@\@_N\@Z
     */
    MCAPI bool getBool(struct GameRuleId, bool) const; // NOLINT
    /**
     * @symbol ?getInt\@GameRules\@\@QEBAHUGameRuleId\@\@\@Z
     */
    MCAPI int getInt(struct GameRuleId) const; // NOLINT
    /**
     * @symbol ?getRule\@GameRules\@\@QEBAPEBVGameRule\@\@UGameRuleId\@\@\@Z
     */
    MCAPI class GameRule const* getRule(struct GameRuleId) const; // NOLINT
    /**
     * @symbol ?getRules\@GameRules\@\@QEBAAEBV?$vector\@VGameRule\@\@V?$allocator\@VGameRule\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class GameRule> const& getRules() const; // NOLINT
    /**
     * @symbol ?getTagData\@GameRules\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void getTagData(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?hasRule\@GameRules\@\@QEBA_NUGameRuleId\@\@\@Z
     */
    MCAPI bool hasRule(struct GameRuleId) const; // NOLINT
    /**
     * @symbol
     * ?nameToGameRuleIndex\@GameRules\@\@QEBA?AUGameRuleId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct GameRuleId nameToGameRuleIndex(std::string const&) const; // NOLINT
    /**
     * @symbol ?setMarketplaceOverrides\@GameRules\@\@QEAAXXZ
     */
    MCAPI void setMarketplaceOverrides(); // NOLINT
    /**
     * @symbol
     * ?setRule\@GameRules\@\@QEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@UGameRuleId\@\@_N1PEA_N2PEAVValidationError\@GameRule\@\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket>
          setRule(struct GameRuleId, bool, bool, bool*, bool*, class GameRule::ValidationError*); // NOLINT
    /**
     * @symbol
     * ?setRule\@GameRules\@\@QEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@UGameRuleId\@\@M_NPEA_N2PEAVValidationError\@GameRule\@\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket>
          setRule(struct GameRuleId, float, bool, bool*, bool*, class GameRule::ValidationError*); // NOLINT
    /**
     * @symbol
     * ?setRule\@GameRules\@\@QEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@UGameRuleId\@\@H_NPEA_N2PEAVValidationError\@GameRule\@\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket>
          setRule(struct GameRuleId, int, bool, bool*, bool*, class GameRule::ValidationError*); // NOLINT
    /**
     * @symbol ?setTagData\@GameRules\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void setTagData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ??1GameRules\@\@QEAA\@XZ
     */
    MCAPI ~GameRules(); // NOLINT
    /**
     * @symbol ?DEFAULT_PLAYER_SPAWN_RADIUS\@GameRules\@\@2IB
     */
    MCAPI static unsigned int const DEFAULT_PLAYER_SPAWN_RADIUS; // NOLINT
    /**
     * @symbol ?DEFAULT_RANDOMTICKSPEED\@GameRules\@\@2HB
     */
    MCAPI static int const DEFAULT_RANDOMTICKSPEED; // NOLINT
    /**
     * @symbol ?MAX_FUNCTIONCOMMANDLIMIT\@GameRules\@\@2HB
     */
    MCAPI static int const MAX_FUNCTIONCOMMANDLIMIT; // NOLINT
    /**
     * @symbol ?MAX_PLAYER_SPAWN_RADIUS\@GameRules\@\@2IB
     */
    MCAPI static unsigned int const MAX_PLAYER_SPAWN_RADIUS; // NOLINT
    /**
     * @symbol ?MAX_RANDOMTICKSPEED\@GameRules\@\@2HB
     */
    MCAPI static int const MAX_RANDOMTICKSPEED; // NOLINT
    /**
     * @symbol ?MIN_PLAYER_SPAWN_RADIUS\@GameRules\@\@2IB
     */
    MCAPI static unsigned int const MIN_PLAYER_SPAWN_RADIUS; // NOLINT
    /**
     * @symbol
     * ?WORLD_POLICY_TAG_NAME\@GameRules\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const WORLD_POLICY_TAG_NAME; // NOLINT

    // private:
    /**
     * @symbol
     * ?_registerRule\@GameRules\@\@AEAAAEAVGameRule\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UGameRuleId\@\@\@Z
     */
    MCAPI class GameRule& _registerRule(std::string const&, struct GameRuleId); // NOLINT
    /**
     * @symbol ?_registerRules\@GameRules\@\@AEAAXXZ
     */
    MCAPI void _registerRules(); // NOLINT
    /**
     * @symbol
     * ?_setGameRule\@GameRules\@\@AEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@PEAVGameRule\@\@TValue\@4\@W4Type\@4\@_NPEA_N4PEAVValidationError\@4\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket>
    _setGameRule(class GameRule*, union GameRule::Value, enum class GameRule::Type, bool, bool*, bool*, class GameRule::ValidationError*); // NOLINT
    /**
     * @symbol
     * ?_setRule\@GameRules\@\@AEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@UGameRuleId\@\@TValue\@GameRule\@\@W4Type\@6\@_NPEA_N4PEAVValidationError\@6\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket>
    _setRule(struct GameRuleId, union GameRule::Value, enum class GameRule::Type, bool, bool*, bool*, class GameRule::ValidationError*); // NOLINT
    /**
     * @symbol
     * ?_getMarketplaceGameRulesDefaultMap\@GameRules\@\@CAAEBV?$map\@UGameRuleId\@\@VGameRule\@\@U?$less\@UGameRuleId\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBUGameRuleId\@\@VGameRule\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI static class std::map<
        struct GameRuleId,
        class GameRule,
        struct std::less<struct GameRuleId>,
        class std::allocator<struct std::pair<struct GameRuleId const, class GameRule>>> const&
    _getMarketplaceGameRulesDefaultMap(); // NOLINT

private:
};
