/**
 * @file  OutOfControlDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OutOfControlDefinition.
 *
 */
class OutOfControlDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OUTOFCONTROLDEFINITION
public:
    class OutOfControlDefinition& operator=(class OutOfControlDefinition const &) = delete;
    OutOfControlDefinition(class OutOfControlDefinition const &) = delete;
    OutOfControlDefinition() = delete;
#endif

public:
    /**
     * @hash   -1427398759
     * @symbol ?initialize@OutOfControlDefinition@@QEBAXAEAVEntityContext@@AEAVOutOfControlComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class OutOfControlComponent &) const;
    /**
     * @hash   -876866647
     * @symbol ?uninitialize@OutOfControlDefinition@@QEBAXAEAVEntityContext@@AEAVOutOfControlComponent@@@Z
     */
    MCAPI void uninitialize(class EntityContext &, class OutOfControlComponent &) const;
    /**
     * @hash   839422102
     * @symbol ?buildSchema@OutOfControlDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VOutOfControlDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class OutOfControlDefinition>> &);

};