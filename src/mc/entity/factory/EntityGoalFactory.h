#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityGoalFactory {

public:
    // prevent constructor by default
    EntityGoalFactory& operator=(EntityGoalFactory const&) = delete;
    EntityGoalFactory(EntityGoalFactory const&)            = delete;
    EntityGoalFactory()                                    = delete;

public:
    /**
     * @symbol
     * ?tryGetDefinitionSerializer\@EntityGoalFactory\@\@QEAAPEAVIJsonDefinitionSerializer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class IJsonDefinitionSerializer* tryGetDefinitionSerializer(std::string const&); // NOLINT
    /**
     * @symbol ??1EntityGoalFactory\@\@QEAA\@XZ
     */
    MCAPI ~EntityGoalFactory(); // NOLINT
    /**
     * @symbol
     * ?addGoals\@EntityGoalFactory\@\@SAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@AEBVDefinitionInstanceGroup\@\@\@Z
     */
    MCAPI static void
    addGoals(class EntityRegistry&, class EntityContext&, class DefinitionInstanceGroup const&); // NOLINT
};
