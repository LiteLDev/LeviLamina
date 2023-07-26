/**
 * @file  BribeableDefinition.hpp
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
 * @brief MC class BribeableDefinition.
 *
 */
class BribeableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRIBEABLEDEFINITION
public:
    class BribeableDefinition& operator=(class BribeableDefinition const &) = delete;
    BribeableDefinition(class BribeableDefinition const &) = delete;
    BribeableDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?addBribeItem\@BribeableDefinition\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void addBribeItem(class ItemDescriptor const &);
    /**
     * @symbol  ?initialize\@BribeableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBribeableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class BribeableComponent &) const;
    /**
     * @symbol  ?buildSchema\@BribeableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBribeableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BribeableDefinition>> &);

};