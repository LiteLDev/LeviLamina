#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/enums/POIType.h"

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

    MCAPI bool parse(struct ConstDeserializeDataParams const&, int);

    MCAPI ~LegacyGoalDefinition();

    MCAPI static std::unique_ptr<class Goal> createGoal(class Mob&, struct LegacyGoalDefinition const&);

    MCAPI static bool goalExists(std::string const&);

    MCAPI static void init();

    MCAPI static void shutdown();

    MCAPI static std::unordered_map<
        std::string,
        std::function<std::unique_ptr<class Goal>(class Mob&, struct LegacyGoalDefinition const&)>>
        mGoalMap;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int _controlFlagsFromArr(class Json::Value const&);

    MCAPI static ::POIType _getPOITypeFromString(std::string);

    MCAPI static std::vector<::ActorDamageCause> _getPanicGoalDamageSources(struct ConstDeserializeDataParams const&);

    // NOLINTEND
};
