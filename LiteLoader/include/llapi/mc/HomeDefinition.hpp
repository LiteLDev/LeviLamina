/**
 * @file  HomeDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class HomeDefinition.
 *
 */
class HomeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOMEDEFINITION
public:
    class HomeDefinition& operator=(class HomeDefinition const &) = delete;
    HomeDefinition(class HomeDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0HomeDefinition@@QEAA@XZ
     * @hash   1263157822
     */
    MCAPI HomeDefinition();
    /**
     * @symbol ?initialize@HomeDefinition@@QEAAXAEAVEntityContext@@AEAVHomeComponent@@@Z
     * @hash   405272249
     */
    MCAPI void initialize(class EntityContext &, class HomeComponent &);
    /**
     * @symbol ?buildSchema@HomeDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VHomeDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -1503528954
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HomeDefinition>> &);

};