/**
 * @file  InsomniaDefinition.hpp
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
 * @brief MC class InsomniaDefinition.
 *
 */
class InsomniaDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSOMNIADEFINITION
public:
    class InsomniaDefinition& operator=(class InsomniaDefinition const &) = delete;
    InsomniaDefinition(class InsomniaDefinition const &) = delete;
    InsomniaDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@InsomniaDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVInsomniaComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class InsomniaComponent &) const;
    /**
     * @symbol  ?buildSchema\@InsomniaDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VInsomniaDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InsomniaDefinition>> &);

};