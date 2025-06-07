#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/level/storage/GameRule.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class GameRule;
class GameRulesChangedPacket;
class GameRulesChangedPacketData;
class HashedString;
struct GameRuleId;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class GameRules : public ::Bedrock::EnableNonOwnerReferences {
public:
    // GameRules inner types define
    using GameRuleMap = ::std::vector<::GameRule>;

    using WorldPolicyMap = ::std::map<::HashedString, ::GameRule>;

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
        LocatorBar                = 17,
        ShowDaysPlayed            = 18,
        DoNaturalRegeneration     = 19,
        DoTntExplode              = 20,
        SendCommandFeedback       = 21,
        MaxCommandChainLength     = 22,
        DoInsomnia                = 23,
        CommandBlocksEnabled      = 24,
        RandomTickSpeed           = 25,
        DoImmediateRespawn        = 26,
        ShowDeathMessages         = 27,
        FunctionCommandLimit      = 28,
        PlayerSpawnRadius         = 29,
        ShowTags                  = 30,
        FreezeDamage              = 31,
        RespawnBlocksExplode      = 32,
        ShowBorderEffect          = 33,
        ShowRecipeMessages        = 34,
        PlayerSleepingPercentage  = 35,
        ProjectilesCanBreakBlocks = 36,
        TntExplosionDropDecay     = 37,
        VanillaGameRuleCount      = 38,
        GlobalMute                = 38,
        AllowDestructiveObjects   = 39,
        AllowMobs                 = 40,
        CodeBuilder               = 41,
        EduCloudSave              = 42,
        EduGameRuleCount          = 43,
        GameRuleCount             = 43,
    };

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
    // vIndex: 0
    virtual ~GameRules() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameRules();

    MCAPI GameRules(::GameRules const& rhs);

    MCAPI ::GameRule& _registerRule(::std::string const& name, ::GameRuleId rule);

    MCAPI void _registerRules();

    MCAPI ::std::unique_ptr<::GameRulesChangedPacket> _setGameRule(
        ::GameRule*                  gameRule,
        ::GameRule::Value            value,
        ::GameRule::Type             type,
        bool                         returnPacket,
        bool*                        pValueValidated,
        bool*                        pValueChanged,
        ::GameRule::ValidationError* errorOutput
    );

    MCAPI ::std::unique_ptr<::GameRulesChangedPacket> createAllGameRulesPacket() const;

    MCAPI void deserializeRules(::GameRulesChangedPacketData const& ruleData);

    MCAPI bool getBool(::GameRuleId ruleType, bool defaultValue) const;

    MCAPI int getInt(::GameRuleId ruleType) const;

    MCAPI void getTagData(::CompoundTag const& tag, ::BaseGameVersion const& version);

    MCAPI ::GameRuleId nameToGameRuleIndex(::std::string const& name) const;

    MCAPI ::GameRules& operator=(::GameRules const& rhs);

    MCAPI void setMarketplaceOverrides();

    MCAPI ::std::unique_ptr<::GameRulesChangedPacket> setRule(
        ::GameRuleId                 rule,
        bool                         value,
        bool                         returnPacket,
        bool*                        pValueValidated,
        bool*                        pValueChanged,
        ::GameRule::ValidationError* errorOutput
    );

    MCAPI void setTagData(::CompoundTag& tag) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::map<::GameRuleId, ::GameRule> const& _getMarketplaceGameRulesDefaultMap();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_FUNCTIONCOMMANDLIMIT();

    MCAPI static ::std::string const& WORLD_POLICY_TAG_NAME();
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
