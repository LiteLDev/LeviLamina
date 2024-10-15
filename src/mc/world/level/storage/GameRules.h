#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    enum class GameRulesIndex {};

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

    MCAPI std::vector<class GameRule> const& getRules() const;

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
    MCAPI static void** $vftable();

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
