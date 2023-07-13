/**
 * @file  GameRules.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "GameRule.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameRules.
 *
 */
class GameRules {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULES
public:
    class GameRules& operator=(class GameRules const &) = delete;
#endif

public:
    /**
     * @symbol ??0GameRules\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI GameRules(class GameRules const &);
    /**
     * @symbol ??0GameRules\@\@QEAA\@XZ
     */
    MCAPI GameRules();
    /**
     * @symbol ?createAllGameRulesPacket\@GameRules\@\@QEBA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> createAllGameRulesPacket() const;
    /**
     * @symbol ?deserializeRules\@GameRules\@\@QEAAXAEBVGameRulesChangedPacketData\@\@\@Z
     */
    MCAPI void deserializeRules(class GameRulesChangedPacketData const &);
    /**
     * @symbol ?getBool\@GameRules\@\@QEBA_NUGameRuleId\@\@_N\@Z
     */
    MCAPI bool getBool(struct GameRuleId, bool) const;
    /**
     * @symbol ?getInt\@GameRules\@\@QEBAHUGameRuleId\@\@\@Z
     */
    MCAPI int getInt(struct GameRuleId) const;
    /**
     * @symbol ?getRule\@GameRules\@\@QEBAPEBVGameRule\@\@UGameRuleId\@\@\@Z
     */
    MCAPI class GameRule const * getRule(struct GameRuleId) const;
    /**
     * @symbol ?getRules\@GameRules\@\@QEBAAEBV?$vector\@VGameRule\@\@V?$allocator\@VGameRule\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class GameRule> const & getRules() const;
    /**
     * @symbol ?getTagData\@GameRules\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @symbol ?hasRule\@GameRules\@\@QEBA_NUGameRuleId\@\@\@Z
     */
    MCAPI bool hasRule(struct GameRuleId) const;
    /**
     * @symbol ?nameToGameRuleIndex\@GameRules\@\@QEBA?AUGameRuleId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct GameRuleId nameToGameRuleIndex(std::string const &) const;
    /**
     * @symbol ?setMarketplaceOverrides\@GameRules\@\@QEAAXXZ
     */
    MCAPI void setMarketplaceOverrides();
    /**
     * @symbol ?setRule\@GameRules\@\@QEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@UGameRuleId\@\@_N1PEA_N2PEAVValidationError\@GameRule\@\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(struct GameRuleId, bool, bool, bool *, bool *, class GameRule::ValidationError *);
    /**
     * @symbol ?setRule\@GameRules\@\@QEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@UGameRuleId\@\@M_NPEA_N2PEAVValidationError\@GameRule\@\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(struct GameRuleId, float, bool, bool *, bool *, class GameRule::ValidationError *);
    /**
     * @symbol ?setRule\@GameRules\@\@QEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@UGameRuleId\@\@H_NPEA_N2PEAVValidationError\@GameRule\@\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(struct GameRuleId, int, bool, bool *, bool *, class GameRule::ValidationError *);
    /**
     * @symbol ?setTagData\@GameRules\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @symbol ??1GameRules\@\@QEAA\@XZ
     */
    MCAPI ~GameRules();
    /**
     * @symbol ?DEFAULT_PLAYER_SPAWN_RADIUS\@GameRules\@\@2IB
     */
    MCAPI static unsigned int const DEFAULT_PLAYER_SPAWN_RADIUS;
    /**
     * @symbol ?DEFAULT_RANDOMTICKSPEED\@GameRules\@\@2HB
     */
    MCAPI static int const DEFAULT_RANDOMTICKSPEED;
    /**
     * @symbol ?MAX_FUNCTIONCOMMANDLIMIT\@GameRules\@\@2HB
     */
    MCAPI static int const MAX_FUNCTIONCOMMANDLIMIT;
    /**
     * @symbol ?MAX_PLAYER_SPAWN_RADIUS\@GameRules\@\@2IB
     */
    MCAPI static unsigned int const MAX_PLAYER_SPAWN_RADIUS;
    /**
     * @symbol ?MAX_RANDOMTICKSPEED\@GameRules\@\@2HB
     */
    MCAPI static int const MAX_RANDOMTICKSPEED;
    /**
     * @symbol ?MIN_PLAYER_SPAWN_RADIUS\@GameRules\@\@2IB
     */
    MCAPI static unsigned int const MIN_PLAYER_SPAWN_RADIUS;
    /**
     * @symbol ?WORLD_POLICY_TAG_NAME\@GameRules\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const WORLD_POLICY_TAG_NAME;

//private:
    /**
     * @symbol ?_registerRule\@GameRules\@\@AEAAAEAVGameRule\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UGameRuleId\@\@\@Z
     */
    MCAPI class GameRule & _registerRule(std::string const &, struct GameRuleId);
    /**
     * @symbol ?_registerRules\@GameRules\@\@AEAAXXZ
     */
    MCAPI void _registerRules();
    /**
     * @symbol ?_setGameRule\@GameRules\@\@AEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@PEAVGameRule\@\@TValue\@4\@W4Type\@4\@_NPEA_N4PEAVValidationError\@4\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> _setGameRule(class GameRule *, union GameRule::Value, enum class GameRule::Type, bool, bool *, bool *, class GameRule::ValidationError *);
    /**
     * @symbol ?_setRule\@GameRules\@\@AEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@UGameRuleId\@\@TValue\@GameRule\@\@W4Type\@6\@_NPEA_N4PEAVValidationError\@6\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> _setRule(struct GameRuleId, union GameRule::Value, enum class GameRule::Type, bool, bool *, bool *, class GameRule::ValidationError *);
    /**
     * @symbol ?_getMarketplaceGameRulesDefaultMap\@GameRules\@\@CAAEBV?$map\@UGameRuleId\@\@VGameRule\@\@U?$less\@UGameRuleId\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBUGameRuleId\@\@VGameRule\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI static class std::map<struct GameRuleId, class GameRule, struct std::less<struct GameRuleId>, class std::allocator<struct std::pair<struct GameRuleId const, class GameRule>>> const & _getMarketplaceGameRulesDefaultMap();

private:

};
