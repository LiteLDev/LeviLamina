/**
 * @file  AdmireItemDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AdmireItemDefinition.
 *
 */
class AdmireItemDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADMIREITEMDEFINITION
public:
    class AdmireItemDefinition& operator=(class AdmireItemDefinition const &) = delete;
    AdmireItemDefinition(class AdmireItemDefinition const &) = delete;
    AdmireItemDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@AdmireItemDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VAdmireItemDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AdmireItemDefinition>> &);

};