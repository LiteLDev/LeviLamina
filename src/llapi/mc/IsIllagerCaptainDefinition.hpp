/**
 * @file  IsIllagerCaptainDefinition.hpp
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
 * @brief MC structure IsIllagerCaptainDefinition.
 *
 */
struct IsIllagerCaptainDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISILLAGERCAPTAINDEFINITION
public:
    struct IsIllagerCaptainDefinition& operator=(struct IsIllagerCaptainDefinition const &) = delete;
    IsIllagerCaptainDefinition(struct IsIllagerCaptainDefinition const &) = delete;
    IsIllagerCaptainDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@IsIllagerCaptainDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &) const;
    /**
     * @symbol  ?uninitialize\@IsIllagerCaptainDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext &) const;
    /**
     * @symbol  ?buildSchema\@IsIllagerCaptainDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UIsIllagerCaptainDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsIllagerCaptainDefinition>> &);

};