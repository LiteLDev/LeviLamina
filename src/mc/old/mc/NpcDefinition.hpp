/**
 * @file  NpcDefinition.hpp
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
 * @brief MC class NpcDefinition.
 *
 */
class NpcDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCDEFINITION
public:
    class NpcDefinition& operator=(class NpcDefinition const &) = delete;
    NpcDefinition(class NpcDefinition const &) = delete;
    NpcDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@NpcDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVNpcComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class NpcComponent &) const;
    /**
     * @symbol  ?buildSchema\@NpcDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VNpcDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NpcDefinition>> &);

};