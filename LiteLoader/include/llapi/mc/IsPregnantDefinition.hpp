/**
 * @file  IsPregnantDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct IsPregnantDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISPREGNANTDEFINITION
public:
    struct IsPregnantDefinition& operator=(struct IsPregnantDefinition const &) = delete;
    IsPregnantDefinition(struct IsPregnantDefinition const &) = delete;
    IsPregnantDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize\@IsPregnantDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &) const;
    /**
     * @symbol ?uninitialize\@IsPregnantDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext &) const;
    /**
     * @symbol ?buildSchema\@IsPregnantDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UIsPregnantDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsPregnantDefinition>> &);

};