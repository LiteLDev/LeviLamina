/**
 * @file  LookAtDefinition.hpp
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
 * @brief MC class LookAtDefinition.
 *
 */
class LookAtDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATDEFINITION
public:
    class LookAtDefinition& operator=(class LookAtDefinition const &) = delete;
    LookAtDefinition(class LookAtDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0LookAtDefinition\@\@QEAA\@XZ
     */
    MCAPI LookAtDefinition();
    /**
     * @symbol  ?initialize\@LookAtDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVLookAtComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class LookAtComponent &) const;
    /**
     * @symbol  ?buildSchema\@LookAtDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VLookAtDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class LookAtDefinition>> &);

};