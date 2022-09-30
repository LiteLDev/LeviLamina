/**
 * @file  GameRules.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -455221919
     * @symbol ??0GameRules@@QEAA@XZ
     */
    MCAPI GameRules();
    /**
     * @hash   -215995999
     * @symbol ??0GameRules@@QEAA@AEBV0@@Z
     */
    MCAPI GameRules(class GameRules const &);
    /**
     * @hash   1674611462
     * @symbol ?createAllGameRulesPacket@GameRules@@QEBA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> createAllGameRulesPacket() const;
    /**
     * @hash   -877113616
     * @symbol ?deserializeRules@GameRules@@QEAAXAEBVGameRulesChangedPacketData@@@Z
     */
    MCAPI void deserializeRules(class GameRulesChangedPacketData const &);
    /**
     * @hash   -567370516
     * @symbol ?getBool@GameRules@@QEBA_NUGameRuleId@@_N@Z
     */
    MCAPI bool getBool(struct GameRuleId, bool) const;
    /**
     * @hash   1640906435
     * @symbol ?getInt@GameRules@@QEBAHUGameRuleId@@@Z
     */
    MCAPI int getInt(struct GameRuleId) const;
    /**
     * @hash   -236064116
     * @symbol ?getRule@GameRules@@QEBAPEBVGameRule@@UGameRuleId@@@Z
     */
    MCAPI class GameRule const * getRule(struct GameRuleId) const;
    /**
     * @hash   672737930
     * @symbol ?getRules@GameRules@@QEBAAEBV?$vector@VGameRule@@V?$allocator@VGameRule@@@std@@@std@@XZ
     */
    MCAPI std::vector<class GameRule> const & getRules() const;
    /**
     * @hash   2066258920
     * @symbol ?getTagData@GameRules@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @hash   1028652439
     * @symbol ?hasRule@GameRules@@QEBA_NUGameRuleId@@@Z
     */
    MCAPI bool hasRule(struct GameRuleId) const;
    /**
     * @hash   825811271
     * @symbol ?nameToGameRuleIndex@GameRules@@QEBA?AUGameRuleId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI struct GameRuleId nameToGameRuleIndex(std::string const &) const;
    /**
     * @hash   664031761
     * @symbol ?setMarketplaceOverrides@GameRules@@QEAAXXZ
     */
    MCAPI void setMarketplaceOverrides();
    /**
     * @hash   -1622559970
     * @symbol ?setRule@GameRules@@QEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@UGameRuleId@@H_NPEA_N2PEAVValidationError@GameRule@@@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(struct GameRuleId, int, bool, bool *, bool *, class GameRule::ValidationError *);
    /**
     * @hash   7800140
     * @symbol ?setRule@GameRules@@QEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@UGameRuleId@@M_NPEA_N2PEAVValidationError@GameRule@@@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(struct GameRuleId, float, bool, bool *, bool *, class GameRule::ValidationError *);
    /**
     * @hash   -2092373816
     * @symbol ?setRule@GameRules@@QEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@UGameRuleId@@_N1PEA_N2PEAVValidationError@GameRule@@@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(struct GameRuleId, bool, bool, bool *, bool *, class GameRule::ValidationError *);
    /**
     * @hash   -405899852
     * @symbol ?setTagData@GameRules@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @hash   443139697
     * @symbol ??1GameRules@@QEAA@XZ
     */
    MCAPI ~GameRules();
    /**
     * @hash   781852589
     * @symbol ?DEFAULT_PLAYER_SPAWN_RADIUS@GameRules@@2IB
     */
    MCAPI static unsigned int const DEFAULT_PLAYER_SPAWN_RADIUS;
    /**
     * @hash   56490363
     * @symbol ?DEFAULT_RANDOMTICKSPEED@GameRules@@2HB
     */
    MCAPI static int const DEFAULT_RANDOMTICKSPEED;
    /**
     * @hash   1407316245
     * @symbol ?MAX_FUNCTIONCOMMANDLIMIT@GameRules@@2HB
     */
    MCAPI static int const MAX_FUNCTIONCOMMANDLIMIT;
    /**
     * @hash   224269819
     * @symbol ?MAX_PLAYER_SPAWN_RADIUS@GameRules@@2IB
     */
    MCAPI static unsigned int const MAX_PLAYER_SPAWN_RADIUS;
    /**
     * @hash   162853829
     * @symbol ?MAX_RANDOMTICKSPEED@GameRules@@2HB
     */
    MCAPI static int const MAX_RANDOMTICKSPEED;
    /**
     * @hash   944521171
     * @symbol ?MIN_PLAYER_SPAWN_RADIUS@GameRules@@2IB
     */
    MCAPI static unsigned int const MIN_PLAYER_SPAWN_RADIUS;
    /**
     * @hash   219708553
     * @symbol ?WORLD_POLICY_TAG_NAME@GameRules@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const WORLD_POLICY_TAG_NAME;

//private:
    /**
     * @hash   -1941025612
     * @symbol ?_registerRule@GameRules@@AEAAAEAVGameRule@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UGameRuleId@@@Z
     */
    MCAPI class GameRule & _registerRule(std::string const &, struct GameRuleId);
    /**
     * @hash   421060780
     * @symbol ?_registerRules@GameRules@@AEAAXXZ
     */
    MCAPI void _registerRules();
    /**
     * @hash   1651551429
     * @symbol ?_setGameRule@GameRules@@AEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@PEAVGameRule@@TValue@4@W4Type@4@_NPEA_N4PEAVValidationError@4@@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> _setGameRule(class GameRule *, union GameRule::Value, enum class GameRule::Type, bool, bool *, bool *, class GameRule::ValidationError *);
    /**
     * @hash   676481444
     * @symbol ?_setRule@GameRules@@AEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@UGameRuleId@@TValue@GameRule@@W4Type@6@_NPEA_N4PEAVValidationError@6@@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> _setRule(struct GameRuleId, union GameRule::Value, enum class GameRule::Type, bool, bool *, bool *, class GameRule::ValidationError *);

private:

};