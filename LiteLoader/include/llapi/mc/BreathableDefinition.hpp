/**
 * @file  BreathableDefinition.hpp
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
 * @brief MC class BreathableDefinition.
 *
 */
class BreathableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREATHABLEDEFINITION
public:
    class BreathableDefinition& operator=(class BreathableDefinition const &) = delete;
    BreathableDefinition(class BreathableDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -1675463079
     * @symbol ??0BreathableDefinition@@QEAA@XZ
     */
    MCAPI BreathableDefinition();
    /**
     * @hash   2076116776
     * @symbol ?addBreathableBlockDescriptor@BreathableDefinition@@QEAAXAEBVBlockDescriptor@@@Z
     */
    MCAPI void addBreathableBlockDescriptor(class BlockDescriptor const &);
    /**
     * @hash   -1790285014
     * @symbol ?addNonBreathableBlockDescriptor@BreathableDefinition@@QEAAXAEBVBlockDescriptor@@@Z
     */
    MCAPI void addNonBreathableBlockDescriptor(class BlockDescriptor const &);
    /**
     * @hash   1494114591
     * @symbol ?initialize@BreathableDefinition@@QEAAXAEAVEntityContext@@AEAVBreathableComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class BreathableComponent &);
    /**
     * @hash   -742874730
     * @symbol ?buildSchema@BreathableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBreathableDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BreathableDefinition>> &);

};