/**
 * @file  AvoidMobTypeDefinition.hpp
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
 * @brief MC class AvoidMobTypeDefinition.
 *
 */
class AvoidMobTypeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVOIDMOBTYPEDEFINITION
public:
    class AvoidMobTypeDefinition& operator=(class AvoidMobTypeDefinition const &) = delete;
    AvoidMobTypeDefinition(class AvoidMobTypeDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0AvoidMobTypeDefinition\@\@QEAA\@XZ
     */
    MCAPI AvoidMobTypeDefinition();
    /**
     * @symbol  ?initialize\@AvoidMobTypeDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVAvoidMobTypeGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class AvoidMobTypeGoal &) const;
    /**
     * @symbol  ?buildSchema\@AvoidMobTypeDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VAvoidMobTypeDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AvoidMobTypeDefinition>> &);

};