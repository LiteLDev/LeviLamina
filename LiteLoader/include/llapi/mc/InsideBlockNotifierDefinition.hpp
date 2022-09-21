/**
 * @file  MC/InsideBlockNotifierDefinition.hpp
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
 * @brief MC class InsideBlockNotifierDefinition.
 *
 */
class InsideBlockNotifierDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKNOTIFIERDEFINITION
public:
    class InsideBlockNotifierDefinition& operator=(class InsideBlockNotifierDefinition const &) = delete;
    InsideBlockNotifierDefinition(class InsideBlockNotifierDefinition const &) = delete;
    InsideBlockNotifierDefinition() = delete;
#endif

public:
    /**
     * @hash   -1959883515
     * @symbol ?initialize@InsideBlockNotifierDefinition@@QEBAXAEAVEntityContext@@AEAVInsideBlockNotifierComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class InsideBlockNotifierComponent &) const;
    /**
     * @hash   1132663878
     * @symbol ?buildSchema@InsideBlockNotifierDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VInsideBlockNotifierDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InsideBlockNotifierDefinition>> &);

};