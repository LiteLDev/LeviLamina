/**
 * @file  MC/VibrationListenerDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   2119396654
     * @symbol ?initialize@VibrationListenerDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   -1083101596
     * @symbol ?buildSchema@VibrationListenerDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VVibrationListenerDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class VibrationListenerDefinition>> &);

};