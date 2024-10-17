#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ai/village/POIType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct LegacyGoalDefinition {
public:
    // NOLINTBEGIN
    MCAPI LegacyGoalDefinition();

    MCAPI LegacyGoalDefinition(struct LegacyGoalDefinition&&);

    MCAPI LegacyGoalDefinition(struct LegacyGoalDefinition const&);

    MCAPI struct LegacyGoalDefinition& operator=(struct LegacyGoalDefinition&&);

    MCAPI struct LegacyGoalDefinition& operator=(struct LegacyGoalDefinition const&);

    MCAPI bool parse(struct ConstDeserializeDataParams const& deserializeDataParams, int priority);

    MCAPI ~LegacyGoalDefinition();

    MCAPI static std::unique_ptr<class Goal> createGoal(class Mob& mob, struct LegacyGoalDefinition const& def);

    MCAPI static bool goalExists(std::string const& name);

    MCAPI static void init();

    MCAPI static void shutdown();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int _controlFlagsFromArr(class Json::Value const& flags);

    MCAPI static ::POIType _getPOITypeFromString(std::string poiStr);

    MCAPI static std::vector<::ActorDamageCause>
    _getPanicGoalDamageSources(struct ConstDeserializeDataParams const& deserializeDataParams);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct LegacyGoalDefinition&&);

    MCAPI void* ctor$(struct LegacyGoalDefinition const&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static std::unordered_map<
        std::string,
        std::function<std::unique_ptr<class Goal>(class Mob&, struct LegacyGoalDefinition const&)>>&
    mGoalMap();

    // NOLINTEND
};
