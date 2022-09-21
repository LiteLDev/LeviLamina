/**
 * @file  MC/BuoyancyDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BuoyancyDefinition.
 *
 */
class BuoyancyDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUOYANCYDEFINITION
public:
    class BuoyancyDefinition& operator=(class BuoyancyDefinition const &) = delete;
    BuoyancyDefinition(class BuoyancyDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -2017418097
     * @symbol ??0BuoyancyDefinition@@QEAA@XZ
     */
    MCAPI BuoyancyDefinition();
    /**
     * @hash   411695865
     * @symbol ?initialize@BuoyancyDefinition@@QEBAXAEAVEntityContext@@AEAVBuoyancyComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class BuoyancyComponent &) const;
    /**
     * @hash   1850732537
     * @symbol ?uninitialize@BuoyancyDefinition@@QEBAXAEAVEntityContext@@AEAVBuoyancyComponent@@@Z
     */
    MCAPI void uninitialize(class EntityContext &, class BuoyancyComponent &) const;
    /**
     * @hash   1514773910
     * @symbol ?buildSchema@BuoyancyDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBuoyancyDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BuoyancyDefinition>> &);

//private:
    /**
     * @hash   -872094106
     * @symbol ?_addLiquidBlockDescriptor@BuoyancyDefinition@@AEAAXAEBVBlockDescriptor@@@Z
     */
    MCAPI void _addLiquidBlockDescriptor(class BlockDescriptor const &);
    /**
     * @hash   -1497130823
     * @symbol ?_serialize@BuoyancyDefinition@@AEBA?AVValue@Json@@XZ
     */
    MCAPI class Json::Value _serialize() const;

private:

};