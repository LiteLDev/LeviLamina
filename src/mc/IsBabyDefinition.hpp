/**
 * @file  IsBabyDefinition.hpp
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
 * @brief MC structure IsBabyDefinition.
 *
 */
struct IsBabyDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISBABYDEFINITION
public:
    struct IsBabyDefinition& operator=(struct IsBabyDefinition const &) = delete;
    IsBabyDefinition(struct IsBabyDefinition const &) = delete;
    IsBabyDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@IsBabyDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &) const;
    /**
     * @symbol  ?uninitialize\@IsBabyDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext &) const;
    /**
     * @symbol  ?buildSchema\@IsBabyDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UIsBabyDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsBabyDefinition>> &);

};