#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/level/storage/GameRule.h"

// auto generated forward declare list
// clang-format off
class GameRule;
class GameRulesChangedPacket;
class GameRulesChangedPacketData;
struct GameRuleId;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace cereal { struct NullType; }
// clang-format on

class GameRules : public ::Bedrock::EnableNonOwnerReferences {
public:
    // GameRules inner types define
    enum class GameRulesIndex : int {
        InvalidGameRule           = -1,
        CommandBlockOutput        = 0,
        DoDaylightCycle           = 1,
        DoEntityDrops             = 2,
        DoFireTick                = 3,
        RecipesUnlock             = 4,
        DoLimitedCrafting         = 5,
        DoMobLoot                 = 6,
        DoMobSpawning             = 7,
        DoTileDrops               = 8,
        DoWeatherCycle            = 9,
        DrowningDamage            = 10,
        FallDamage                = 11,
        FireDamage                = 12,
        KeepInventory             = 13,
        MobGriefing               = 14,
        Pvp                       = 15,
        ShowCoordinates           = 16,
        PlayerWaypoints           = 17,
        LocatorBarDeprecated      = 18,
        ShowDaysPlayed            = 19,
        DoNaturalRegeneration     = 20,
        DoTntExplode              = 21,
        SendCommandFeedback       = 22,
        MaxCommandChainLength     = 23,
        DoInsomnia                = 24,
        CommandBlocksEnabled      = 25,
        RandomTickSpeed           = 26,
        DoImmediateRespawn        = 27,
        ShowDeathMessages         = 28,
        FunctionCommandLimit      = 29,
        PlayerSpawnRadius         = 30,
        ShowTags                  = 31,
        FreezeDamage              = 32,
        RespawnBlocksExplode      = 33,
        ShowBorderEffect          = 34,
        ShowRecipeMessages        = 35,
        PlayerSleepingPercentage  = 36,
        ProjectilesCanBreakBlocks = 37,
        TntExplosionDropDecay     = 38,
        VanillaGameRuleCount      = 39,
        GlobalMute                = 39,
        AllowDestructiveObjects   = 40,
        AllowMobs                 = 41,
        CodeBuilder               = 42,
        EduCloudSave              = 43,
        EduGameRuleCount          = 44,
        GameRuleCount             = 44,
    };

    using GameRuleMap = ::std::vector<::GameRule>;

    using WorldPolicyMap = ::std::map<::HashedString, ::GameRule>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::GameRule>>              mGameRules;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::GameRule>> mWorldPolicies;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::GameRules const&, ::GameRuleId const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mGameRuleChangePublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameRules() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameRules();

    MCAPI GameRules(::GameRules const& rhs);

    MCAPI void _registerRules();

    MCAPI ::std::unique_ptr<::GameRulesChangedPacket> _setGameRule(
        ::GameRule*                                          gameRule,
        ::std::variant<::cereal::NullType, bool, int, float> value,
        ::GameRule::Type                                     type,
        bool                                                 returnPacket,
        bool*                                                pValueValidated,
        bool*                                                pValueChanged,
        ::GameRule::ValidationError*                         errorOutput
    );

    MCAPI ::std::unique_ptr<::GameRulesChangedPacket> createAllGameRulesPacket() const;

    MCAPI void deserializeRules(::GameRulesChangedPacketData const& ruleData);

    MCAPI bool getBool(::GameRuleId ruleType, bool defaultValue) const;

    MCAPI ::GameRules& operator=(::GameRules const& rhs);

#ifdef LL_PLAT_C
    MCAPI bool operator==(::GameRules const& rhs) const;

    MCAPI void setMarketplaceOverrides();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::GameRules const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
