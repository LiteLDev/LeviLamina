/**
 * @file  MC/ScaleByAgeDefinition.hpp
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
 * @brief MC class ScaleByAgeDefinition.
 *
 */
class ScaleByAgeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCALEBYAGEDEFINITION
public:
    class ScaleByAgeDefinition& operator=(class ScaleByAgeDefinition const &) = delete;
    ScaleByAgeDefinition(class ScaleByAgeDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -1413019395
     * @symbol ??0ScaleByAgeDefinition@@QEAA@XZ
     */
    MCAPI ScaleByAgeDefinition();
    /**
     * @hash   520762215
     * @symbol ?initialize@ScaleByAgeDefinition@@QEAAXAEAVEntityContext@@AEAVScaleByAgeComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class ScaleByAgeComponent &);
    /**
     * @hash   1022221174
     * @symbol ?buildSchema@ScaleByAgeDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VScaleByAgeDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ScaleByAgeDefinition>> &);

};