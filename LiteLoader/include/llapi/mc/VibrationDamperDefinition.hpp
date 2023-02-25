/**
 * @file  VibrationDamperDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure VibrationDamperDefinition.
 *
 */
struct VibrationDamperDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONDAMPERDEFINITION
public:
    struct VibrationDamperDefinition& operator=(struct VibrationDamperDefinition const &) = delete;
    VibrationDamperDefinition(struct VibrationDamperDefinition const &) = delete;
    VibrationDamperDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@VibrationDamperDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UVibrationDamperDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct VibrationDamperDefinition>> &);

};