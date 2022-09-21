/**
 * @file  MC/BribeableDefinition.hpp
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
 * @brief MC class BribeableDefinition.
 *
 */
class BribeableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRIBEABLEDEFINITION
public:
    class BribeableDefinition& operator=(class BribeableDefinition const &) = delete;
    BribeableDefinition(class BribeableDefinition const &) = delete;
    BribeableDefinition() = delete;
#endif

public:
    /**
     * @hash   -613881338
     * @symbol ?addBribeItem@BribeableDefinition@@QEAAXAEBVItemDescriptor@@@Z
     */
    MCAPI void addBribeItem(class ItemDescriptor const &);
    /**
     * @hash   -897082379
     * @symbol ?initialize@BribeableDefinition@@QEAAXAEAVEntityContext@@AEAVBribeableComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class BribeableComponent &);
    /**
     * @hash   -1051236332
     * @symbol ?buildSchema@BribeableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBribeableDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BribeableDefinition>> &);

};