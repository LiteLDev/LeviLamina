/**
 * @file  VariableMaxAutoStepDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VariableMaxAutoStepDefinition.
 *
 */
class VariableMaxAutoStepDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARIABLEMAXAUTOSTEPDEFINITION
public:
    class VariableMaxAutoStepDefinition& operator=(class VariableMaxAutoStepDefinition const &) = delete;
    VariableMaxAutoStepDefinition(class VariableMaxAutoStepDefinition const &) = delete;
    VariableMaxAutoStepDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@VariableMaxAutoStepDefinition\@\@QEBAXAEAVEntityContext\@\@AEAUVariableMaxAutoStepComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, struct VariableMaxAutoStepComponent &) const;
    /**
     * @symbol  ?buildSchema\@VariableMaxAutoStepDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VVariableMaxAutoStepDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class VariableMaxAutoStepDefinition>> &);

};