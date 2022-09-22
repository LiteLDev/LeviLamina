/**
 * @file  WorkComposterDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WorkComposterDefinition.
 *
 */
class WorkComposterDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKCOMPOSTERDEFINITION
public:
    class WorkComposterDefinition& operator=(class WorkComposterDefinition const &) = delete;
    WorkComposterDefinition(class WorkComposterDefinition const &) = delete;
#endif

public:
    /**
     * @hash   1694753484
     * @symbol ??0WorkComposterDefinition@@QEAA@XZ
     */
    MCAPI WorkComposterDefinition();
    /**
     * @hash   528858387
     * @symbol ?initialize@WorkComposterDefinition@@QEAAXAEAVEntityContext@@AEAVWorkComposterGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class WorkComposterGoal &);
    /**
     * @hash   -1352144547
     * @symbol ?buildSchema@WorkComposterDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VWorkComposterDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class WorkComposterDefinition>> &);

};