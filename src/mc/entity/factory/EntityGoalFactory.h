#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityGoalFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYGOALFACTORY
public:
    EntityGoalFactory& operator=(EntityGoalFactory const&) = delete;
    EntityGoalFactory(EntityGoalFactory const&)            = delete;
    EntityGoalFactory()                                    = delete;
#endif

public:
    /**
     * @symbol
     * ?tryGetDefinitionSerializer\@EntityGoalFactory\@\@QEAAPEAVIJsonDefinitionSerializer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class IJsonDefinitionSerializer* tryGetDefinitionSerializer(std::string const&);
    /**
     * @symbol ??1EntityGoalFactory\@\@QEAA\@XZ
     */
    MCAPI ~EntityGoalFactory();
    /**
     * @symbol
     * ?addGoals\@EntityGoalFactory\@\@SAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@AEBVDefinitionInstanceGroup\@\@\@Z
     */
    MCAPI static void addGoals(class EntityRegistry&, class EntityContext&, class DefinitionInstanceGroup const&);
};
