/**
 * @file  VibrationListenerDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VibrationListenerDefinition.
 *
 */
class VibrationListenerDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONLISTENERDEFINITION
public:
    class VibrationListenerDefinition& operator=(class VibrationListenerDefinition const &) = delete;
    VibrationListenerDefinition(class VibrationListenerDefinition const &) = delete;
    VibrationListenerDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@VibrationListenerDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &) const;
    /**
     * @symbol  ?buildSchema\@VibrationListenerDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VVibrationListenerDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class VibrationListenerDefinition>> &);

};