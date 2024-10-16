#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/storage/GameRule.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class GameRules : public ::Bedrock::EnableNonOwnerReferences {
public:
    // GameRules inner types define
    enum class GameRulesIndex : int {
        InvalidGameRule           = -1,
        CommandBlockOutput        = 0x0,
        DoDayLightCycle           = 0x1,
        DoEntityDrops             = 0x2,
        DoFireTick                = 0x3,
        RecipesUnlock             = 0x4,
        DoLimitedCrafting         = 0x5,
        DoMobLoot                 = 0x6,
        DoMobSpawning             = 0x7,
        DoTileDrops               = 0x8,
        DoWeatherCycle            = 0x9,
        DrowningDamage            = 0xA,
        FallDamage                = 0xB,
        FireDamage                = 0xC,
        KeepInventory             = 0xD,
        MobGriefing               = 0xE,
        Pvp                       = 0xF,
        ShowCoordinates           = 0x10,
        ShowDaysPlayed            = 0x11,
        NaturalRegeneration       = 0x12,
        TntExplodes               = 0x13,
        SendCommandFeedback       = 0x14,
        MaxCommandChainLength     = 0x15,
        DoInsomnia                = 0x16,
        CommandBlocksEnabled      = 0x17,
        RandomTickSpeed           = 0x18,
        DoImmediateRespawn        = 0x19,
        ShowDeathMessages         = 0x1A,
        FunctionCommandLimit      = 0x1B,
        SpawnRadius               = 0x1C,
        ShowTags                  = 0x1D,
        FreezeDamage              = 0x1E,
        RespawnBlocksExplode      = 0x1F,
        ShowBorderEffect          = 0x20,
        ShowRecipeMessages        = 0x21,
        PlayersSleepingPercentage = 0x22,
        ProjectilesCanBreakBlocks = 0x23,
        TntExplosionDropDecay     = 0x24,
        VanillaGameRuleCount      = 0x25,
        GlobalMute                = 0x25,
        AllowDestructiveObjects   = 0x26,
        AllowMobs                 = 0x27,
        CodeBuilder               = 0x28,
        EduGameRuleCount          = 0x29,
    };

    using GameRuleList   = std::vector<class GameRule>;
    using WorldPolicyMap = std::map<class HashedString, class GameRule>;

    GameRuleList   mGameRules;
    WorldPolicyMap mWorldPolicies;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameRules();

    MCAPI GameRules();

    MCAPI GameRules(class GameRules const& rhs);

    MCAPI std::unique_ptr<class GameRulesChangedPacket> createAllGameRulesPacket() const;

    MCAPI void deserializeRules(class GameRulesChangedPacketData const& ruleData);

    MCAPI bool getBool(struct GameRuleId ruleType, bool defaultValue) const;

    MCAPI float getFloat(struct GameRuleId ruleType) const;

    MCAPI int getInt(struct GameRuleId ruleType) const;

    MCAPI class GameRule const* getRule(struct GameRuleId rule) const;

    MCAPI GameRuleList const& getRules() const;

    MCAPI void getTagData(class CompoundTag const& tag, class BaseGameVersion const& version);

    MCAPI bool hasRule(struct GameRuleId ruleType) const;

    MCAPI struct GameRuleId nameToGameRuleIndex(std::string const& name) const;

    MCAPI class GameRules& operator=(class GameRules const& rhs);

    MCAPI class Bedrock::PubSub::Subscription
    registerOnGameRuleChangeCallback(std::function<void(class GameRules const&, struct GameRuleId const&)> callback);

    MCAPI void setMarketplaceOverrides();

    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(
        struct GameRuleId                rule,
        bool                             value,
        bool                             returnPacket,
        bool*                            pValueValidated,
        bool*                            pValueChanged,
        class GameRule::ValidationError* errorOutput
    );

    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(
        struct GameRuleId                rule,
        float                            value,
        bool                             returnPacket,
        bool*                            pValueValidated,
        bool*                            pValueChanged,
        class GameRule::ValidationError* errorOutput
    );

    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(
        struct GameRuleId                rule,
        int                              value,
        bool                             returnPacket,
        bool*                            pValueValidated,
        bool*                            pValueChanged,
        class GameRule::ValidationError* errorOutput
    );

    MCAPI void setTagData(class CompoundTag& tag) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class GameRule& _registerRule(std::string const& name, struct GameRuleId rule);

    MCAPI void _registerRules();

    MCAPI std::unique_ptr<class GameRulesChangedPacket> _setGameRule(
        class GameRule*                  gameRule,
        union GameRule::Value            value,
        ::GameRule::Type                 type,
        bool                             returnPacket,
        bool*                            pValueValidated,
        bool*                            pValueChanged,
        class GameRule::ValidationError* errorOutput
    );

    MCAPI std::unique_ptr<class GameRulesChangedPacket> _setRule(
        struct GameRuleId                ruleType,
        union GameRule::Value            value,
        ::GameRule::Type                 type,
        bool                             returnPacket,
        bool*                            pValueValidated,
        bool*                            pValueChanged,
        class GameRule::ValidationError* errorOutput
    );

    MCAPI static std::map<struct GameRuleId, class GameRule> const& _getMarketplaceGameRulesDefaultMap();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class GameRules const& rhs);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static uint const& DEFAULT_PLAYER_SPAWN_RADIUS();

    MCAPI static int const& DEFAULT_RANDOMTICKSPEED();

    MCAPI static int const& MAX_FUNCTIONCOMMANDLIMIT();

    MCAPI static uint const& MAX_PLAYER_SPAWN_RADIUS();

    MCAPI static int const& MAX_RANDOMTICKSPEED();

    MCAPI static uint const& MIN_PLAYER_SPAWN_RADIUS();

    MCAPI static std::string const& WORLD_POLICY_TAG_NAME();

    // NOLINTEND
};
