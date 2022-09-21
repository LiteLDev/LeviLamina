/**
 * @file  MC/IsSaddledDefinition.hpp
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
 * @brief MC structure IsSaddledDefinition.
 *
 */
struct IsSaddledDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSADDLEDDEFINITION
public:
    struct IsSaddledDefinition& operator=(struct IsSaddledDefinition const &) = delete;
    IsSaddledDefinition(struct IsSaddledDefinition const &) = delete;
    IsSaddledDefinition() = delete;
#endif

public:
    /**
     * @hash   -1240374834
     * @symbol ?initialize@IsSaddledDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   1313340700
     * @symbol ?uninitialize@IsSaddledDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @hash   -676456198
     * @symbol ?buildSchema@IsSaddledDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsSaddledDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsSaddledDefinition>> &);

};