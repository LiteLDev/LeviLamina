/**
 * @file  ExhaustionDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExhaustionDefinition.
 *
 */
class ExhaustionDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXHAUSTIONDEFINITION
public:
    class ExhaustionDefinition& operator=(class ExhaustionDefinition const &) = delete;
    ExhaustionDefinition(class ExhaustionDefinition const &) = delete;
    ExhaustionDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@ExhaustionDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVExhaustionComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class ExhaustionComponent &) const;
    /**
     * @symbol  ?buildSchema\@ExhaustionDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VExhaustionDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExhaustionDefinition>> &);

};