/**
 * @file  EntityGoalFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityGoalFactory.
 *
 */
class EntityGoalFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYGOALFACTORY
public:
    class EntityGoalFactory& operator=(class EntityGoalFactory const &) = delete;
    EntityGoalFactory(class EntityGoalFactory const &) = delete;
    EntityGoalFactory() = delete;
#endif

public:
    /**
     * @hash   1088184266
     * @symbol  ?tryGetDefinitionSerializer\@EntityGoalFactory\@\@QEAAPEAVIJsonDefinitionSerializer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class IJsonDefinitionSerializer * tryGetDefinitionSerializer(std::string const &);
    /**
     * @hash   -420312224
     * @symbol  ??1EntityGoalFactory\@\@QEAA\@XZ
     */
    MCAPI ~EntityGoalFactory();
    /**
     * @symbol  ?addGoals\@EntityGoalFactory\@\@SAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@AEBVDefinitionInstanceGroup\@\@\@Z
     */
    MCAPI static void addGoals(class EntityRegistry &, class EntityContext &, class DefinitionInstanceGroup const &);

};