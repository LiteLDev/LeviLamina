/**
 * @file  WorkDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WorkDefinition.
 *
 */
class WorkDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKDEFINITION
public:
    class WorkDefinition& operator=(class WorkDefinition const &) = delete;
    WorkDefinition(class WorkDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -137547952
     * @symbol ??0WorkDefinition@@QEAA@XZ
     */
    MCAPI WorkDefinition();
    /**
     * @hash   1829623683
     * @symbol ?initialize@WorkDefinition@@QEAAXAEAVEntityContext@@AEAVWorkGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class WorkGoal &);
    /**
     * @hash   827412147
     * @symbol ?buildSchema@WorkDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VWorkDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class WorkDefinition>> &);

};