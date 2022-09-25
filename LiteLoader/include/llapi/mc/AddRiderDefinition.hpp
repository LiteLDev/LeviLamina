/**
 * @file  AddRiderDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AddRiderDefinition.
 *
 */
class AddRiderDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDRIDERDEFINITION
public:
    class AddRiderDefinition& operator=(class AddRiderDefinition const &) = delete;
    AddRiderDefinition(class AddRiderDefinition const &) = delete;
    AddRiderDefinition() = delete;
#endif

public:
    /**
     * @hash   29938157
     * @symbol ?initialize@AddRiderDefinition@@QEAAXAEAVEntityContext@@AEAVAddRiderComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class AddRiderComponent &);
    /**
     * @hash   1850206966
     * @symbol ?buildSchema@AddRiderDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VAddRiderDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AddRiderDefinition>> &);

};