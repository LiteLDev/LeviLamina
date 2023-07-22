/**
 * @file  BoostableDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BoostableDefinition.
 *
 */
class BoostableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOSTABLEDEFINITION
public:
    class BoostableDefinition& operator=(class BoostableDefinition const &) = delete;
    BoostableDefinition(class BoostableDefinition const &) = delete;
    BoostableDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@BoostableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBoostableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class BoostableComponent &) const;
    /**
     * @symbol  ?buildSchema\@BoostableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBoostableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BoostableDefinition>> &);

};