/**
 * @file  IsStunnedDefinition.hpp
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
 * @brief MC structure IsStunnedDefinition.
 *
 */
struct IsStunnedDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSTUNNEDDEFINITION
public:
    struct IsStunnedDefinition& operator=(struct IsStunnedDefinition const &) = delete;
    IsStunnedDefinition(struct IsStunnedDefinition const &) = delete;
    IsStunnedDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@IsStunnedDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &) const;
    /**
     * @symbol  ?uninitialize\@IsStunnedDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext &) const;
    /**
     * @symbol  ?buildSchema\@IsStunnedDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UIsStunnedDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsStunnedDefinition>> &);

};