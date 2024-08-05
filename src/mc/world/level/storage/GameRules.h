#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
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
    // vIndex: 0
    virtual ~GameRules();

    MCAPI GameRules();

    MCAPI GameRules(class GameRules const&);

    MCAPI std::unique_ptr<class GameRulesChangedPacket> createAllGameRulesPacket() const;

    MCAPI void deserializeRules(class GameRulesChangedPacketData const& ruleData);

    MCAPI bool getBool(struct GameRuleId ruleType, bool defaultValue) const;

    MCAPI float getFloat(struct GameRuleId ruleType) const;

    MCAPI int getInt(struct GameRuleId ruleType) const;

    MCAPI class GameRule const* getRule(struct GameRuleId rule) const;

    MCAPI GameRuleList const& getRules() const;

    MCAPI void getTagData(class CompoundTag const&, class BaseGameVersion const&);

    MCAPI bool hasRule(struct GameRuleId ruleType) const;

    MCAPI struct GameRuleId nameToGameRuleIndex(std::string const& name) const;

    MCAPI class GameRules& operator=(class GameRules const&);

    MCAPI class Bedrock::PubSub::Subscription
        registerOnGameRuleChangeCallback(std::function<void(class GameRules const&, struct GameRuleId const&)>);

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

    MCAPI static uint const DEFAULT_PLAYER_SPAWN_RADIUS;

    MCAPI static int const DEFAULT_RANDOMTICKSPEED;

    MCAPI static int const MAX_FUNCTIONCOMMANDLIMIT;

    MCAPI static uint const MAX_PLAYER_SPAWN_RADIUS;

    MCAPI static int const MAX_RANDOMTICKSPEED;

    MCAPI static uint const MIN_PLAYER_SPAWN_RADIUS;

    MCAPI static std::string const WORLD_POLICY_TAG_NAME;

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
};
