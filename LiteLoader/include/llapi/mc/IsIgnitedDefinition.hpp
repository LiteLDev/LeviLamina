/**
 * @file  IsIgnitedDefinition.hpp
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
 * @brief MC structure IsIgnitedDefinition.
 *
 */
struct IsIgnitedDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISIGNITEDDEFINITION
public:
    struct IsIgnitedDefinition& operator=(struct IsIgnitedDefinition const &) = delete;
    IsIgnitedDefinition(struct IsIgnitedDefinition const &) = delete;
    IsIgnitedDefinition() = delete;
#endif

public:
    /**
     * @hash   478030030
     * @symbol ?initialize@IsIgnitedDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   1475888060
     * @symbol ?uninitialize@IsIgnitedDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @hash   2069124372
     * @symbol ?buildSchema@IsIgnitedDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsIgnitedDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsIgnitedDefinition>> &);

};