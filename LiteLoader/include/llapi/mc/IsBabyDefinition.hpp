/**
 * @file  MC/IsBabyDefinition.hpp
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
 * @brief MC structure IsBabyDefinition.
 *
 */
struct IsBabyDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISBABYDEFINITION
public:
    struct IsBabyDefinition& operator=(struct IsBabyDefinition const &) = delete;
    IsBabyDefinition(struct IsBabyDefinition const &) = delete;
    IsBabyDefinition() = delete;
#endif

public:
    /**
     * @hash   -28169844
     * @symbol ?initialize@IsBabyDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   872278876
     * @symbol ?uninitialize@IsBabyDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @hash   2065442106
     * @symbol ?buildSchema@IsBabyDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsBabyDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsBabyDefinition>> &);

};