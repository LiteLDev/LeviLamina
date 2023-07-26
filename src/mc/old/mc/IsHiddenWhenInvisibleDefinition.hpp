/**
 * @file  IsHiddenWhenInvisibleDefinition.hpp
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
 * @brief MC structure IsHiddenWhenInvisibleDefinition.
 *
 */
struct IsHiddenWhenInvisibleDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISHIDDENWHENINVISIBLEDEFINITION
public:
    struct IsHiddenWhenInvisibleDefinition& operator=(struct IsHiddenWhenInvisibleDefinition const &) = delete;
    IsHiddenWhenInvisibleDefinition(struct IsHiddenWhenInvisibleDefinition const &) = delete;
    IsHiddenWhenInvisibleDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@IsHiddenWhenInvisibleDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &) const;
    /**
     * @symbol  ?uninitialize\@IsHiddenWhenInvisibleDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext &) const;
    /**
     * @symbol  ?buildSchema\@IsHiddenWhenInvisibleDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UIsHiddenWhenInvisibleDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsHiddenWhenInvisibleDefinition>> &);

};