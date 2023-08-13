#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated inclusion list
#include "mc/world/level/storage/GameRule.h"

class GameRules {

public:
    enum class GameRulesIndex : int {
        InvalidGameRule         = -1,
        CommandBlockOutput      = 0x0,
        DoDaylightCycle         = 0x1,
        DoEntityDrops           = 0x2,
        DoFireTick              = 0x3,
        DoMobLoot               = 0x4,
        DoMobSpawning           = 0x5,
        DoTileDrops             = 0x6,
        DoWeatherCycle          = 0x7,
        DrowningDamage          = 0x8,
        FallDamage              = 0x9,
        FireDamage              = 0xA,
        KeepInventory           = 0xB,
        MobGriefing             = 0xC,
        PVP                     = 0xD,
        ShowCoordinates         = 0xE,
        DoNaturalRegeneration   = 0xF,
        DoTntExplode            = 0x10,
        SendCommandFeedback     = 0x11,
        MaxCommandChainLength   = 0x12,
        DoInsomnia              = 0x13,
        CommandBlocksEnabled    = 0x14,
        RandomTickSpeed         = 0x15,
        DoImmediateRespawn      = 0x16,
        ShowDeathMessages       = 0x17,
        FunctionCommandLimit    = 0x18,
        PlayerSpawnRadius       = 0x19,
        ShowTags                = 0x1A,
        FreezeDamage            = 0x1B,
        RespawnBlocksExplode    = 0x1C,
        ShowBorderEffect        = 0x1D,
        VanillaGameRuleCount    = 0x1E,
        GlobalMute              = 0x1E,
        AllowDestructiveObjects = 0x1F,
        AllowMobs               = 0x20,
        CodeBuilder             = 0x21,
        EduGameRuleCount        = 0x22,
    };

    using GameRuleList   = std::vector<class GameRule>;
    using WorldPolicyMap = std::map<class HashedString, class GameRule>;

    GameRuleList   mGameRules;
    WorldPolicyMap mWorldPolicies;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0GameRules\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI GameRules(class GameRules const&);
    /**
     * @symbol ??0GameRules\@\@QEAA\@XZ
     */
    MCAPI GameRules();
    /**
     * @symbol
     * ?createAllGameRulesPacket\@GameRules\@\@QEBA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> createAllGameRulesPacket() const;
    /**
     * @symbol ?deserializeRules\@GameRules\@\@QEAAXAEBVGameRulesChangedPacketData\@\@\@Z
     */
    MCAPI void deserializeRules(class GameRulesChangedPacketData const&);
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
    MCAPI class GameRule const* getRule(struct GameRuleId) const;
    /**
     * @symbol ?getRules\@GameRules\@\@QEBAAEBV?$vector\@VGameRule\@\@V?$allocator\@VGameRule\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI GameRuleList const& getRules() const;
    /**
     * @symbol ?getTagData\@GameRules\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void getTagData(class CompoundTag const&);
    /**
     * @symbol ?hasRule\@GameRules\@\@QEBA_NUGameRuleId\@\@\@Z
     */
    MCAPI bool hasRule(struct GameRuleId) const;
    /**
     * @symbol
     * ?nameToGameRuleIndex\@GameRules\@\@QEBA?AUGameRuleId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct GameRuleId nameToGameRuleIndex(std::string const&) const;
    /**
     * @symbol ?setMarketplaceOverrides\@GameRules\@\@QEAAXXZ
     */
    MCAPI void setMarketplaceOverrides();
    /**
     * @symbol
     * ?setRule\@GameRules\@\@QEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@UGameRuleId\@\@H_NPEA_N2PEAVValidationError\@GameRule\@\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket>
          setRule(struct GameRuleId, int, bool, bool*, bool*, class GameRule::ValidationError*);
    /**
     * @symbol
     * ?setRule\@GameRules\@\@QEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@UGameRuleId\@\@_N1PEA_N2PEAVValidationError\@GameRule\@\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket>
          setRule(struct GameRuleId, bool, bool, bool*, bool*, class GameRule::ValidationError*);
    /**
     * @symbol
     * ?setRule\@GameRules\@\@QEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@UGameRuleId\@\@M_NPEA_N2PEAVValidationError\@GameRule\@\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket>
          setRule(struct GameRuleId, float, bool, bool*, bool*, class GameRule::ValidationError*);
    /**
     * @symbol ?setTagData\@GameRules\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void setTagData(class CompoundTag&) const;
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
     * @symbol
     * ?WORLD_POLICY_TAG_NAME\@GameRules\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const WORLD_POLICY_TAG_NAME;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_registerRule\@GameRules\@\@AEAAAEAVGameRule\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UGameRuleId\@\@\@Z
     */
    MCAPI class GameRule& _registerRule(std::string const&, struct GameRuleId);
    /**
     * @symbol ?_registerRules\@GameRules\@\@AEAAXXZ
     */
    MCAPI void _registerRules();
    /**
     * @symbol
     * ?_setGameRule\@GameRules\@\@AEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@PEAVGameRule\@\@TValue\@4\@W4Type\@4\@_NPEA_N4PEAVValidationError\@4\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket>
    _setGameRule(class GameRule*, union GameRule::Value, enum class GameRule::Type, bool, bool*, bool*, class GameRule::ValidationError*);
    /**
     * @symbol
     * ?_setRule\@GameRules\@\@AEAA?AV?$unique_ptr\@VGameRulesChangedPacket\@\@U?$default_delete\@VGameRulesChangedPacket\@\@\@std\@\@\@std\@\@UGameRuleId\@\@TValue\@GameRule\@\@W4Type\@6\@_NPEA_N4PEAVValidationError\@6\@\@Z
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket>
    _setRule(struct GameRuleId, union GameRule::Value, enum class GameRule::Type, bool, bool*, bool*, class GameRule::ValidationError*);
    /**
     * @symbol
     * ?_getMarketplaceGameRulesDefaultMap\@GameRules\@\@CAAEBV?$map\@UGameRuleId\@\@VGameRule\@\@U?$less\@UGameRuleId\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBUGameRuleId\@\@VGameRule\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI static std::map<struct GameRuleId, class GameRule> const& _getMarketplaceGameRulesDefaultMap();
    // NOLINTEND
};
