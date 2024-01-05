#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityGoalFactory {
public:
    // prevent constructor by default
    EntityGoalFactory& operator=(EntityGoalFactory const&);
    EntityGoalFactory(EntityGoalFactory const&);
    EntityGoalFactory();

public:
    // NOLINTBEGIN
    // symbol:
    // ?tryGetDefinitionSerializer@EntityGoalFactory@@QEAAPEAVIJsonDefinitionSerializer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class IJsonDefinitionSerializer* tryGetDefinitionSerializer(std::string const& name);

    // symbol: ??1EntityGoalFactory@@QEAA@XZ
    MCAPI ~EntityGoalFactory();

    // symbol: ?addGoals@EntityGoalFactory@@SAXAEAVEntityRegistry@@AEAVEntityContext@@AEBVDefinitionInstanceGroup@@@Z
    MCAPI static void addGoals(
        class EntityRegistry&                entityRegistry,
        class EntityContext&                 entity,
        class DefinitionInstanceGroup const& definitionGroup
    );

    // NOLINTEND
};
