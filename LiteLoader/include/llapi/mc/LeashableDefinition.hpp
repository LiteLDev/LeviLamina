/**
 * @file  LeashableDefinition.hpp
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
 * @brief MC class LeashableDefinition.
 *
 */
class LeashableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEASHABLEDEFINITION
public:
    class LeashableDefinition& operator=(class LeashableDefinition const &) = delete;
    LeashableDefinition(class LeashableDefinition const &) = delete;
#endif

public:
    /**
     * @hash   1655011286
     * @symbol ??0LeashableDefinition@@QEAA@XZ
     */
    MCAPI LeashableDefinition();
    /**
     * @hash   601906166
     * @symbol ?buildSchema@LeashableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VLeashableDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class LeashableDefinition>> &);

};