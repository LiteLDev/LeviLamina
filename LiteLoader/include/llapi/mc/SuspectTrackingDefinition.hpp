/**
 * @file  SuspectTrackingDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SuspectTrackingDefinition.
 *
 */
class SuspectTrackingDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUSPECTTRACKINGDEFINITION
public:
    class SuspectTrackingDefinition& operator=(class SuspectTrackingDefinition const &) = delete;
    SuspectTrackingDefinition(class SuspectTrackingDefinition const &) = delete;
    SuspectTrackingDefinition() = delete;
#endif

public:
    /**
     * @hash   1060430789
     * @symbol ?initialize@SuspectTrackingDefinition@@QEAAXAEAVEntityContext@@AEAVSuspectTrackingComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class SuspectTrackingComponent &);
    /**
     * @hash   1070025716
     * @symbol ?buildSchema@SuspectTrackingDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSuspectTrackingDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SuspectTrackingDefinition>> &);

};