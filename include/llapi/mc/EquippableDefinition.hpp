/**
 * @file  EquippableDefinition.hpp
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
 * @brief MC class EquippableDefinition.
 *
 */
class EquippableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPPABLEDEFINITION
public:
    class EquippableDefinition& operator=(class EquippableDefinition const &) = delete;
    EquippableDefinition(class EquippableDefinition const &) = delete;
    EquippableDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@EquippableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVEquippableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class EquippableComponent &) const;
    /**
     * @symbol  ?buildSchema\@EquippableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VEquippableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EquippableDefinition>> &);

};