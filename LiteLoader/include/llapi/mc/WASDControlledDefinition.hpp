/**
 * @file  WASDControlledDefinition.hpp
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
 * @brief MC structure WASDControlledDefinition.
 *
 */
struct WASDControlledDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WASDCONTROLLEDDEFINITION
public:
    struct WASDControlledDefinition& operator=(struct WASDControlledDefinition const &) = delete;
    WASDControlledDefinition(struct WASDControlledDefinition const &) = delete;
    WASDControlledDefinition() = delete;
#endif

public:
    /**
     * @hash   1260751724
     * @symbol ?initialize@WASDControlledDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   -133806164
     * @symbol ?uninitialize@WASDControlledDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @hash   1764272698
     * @symbol ?buildSchema@WASDControlledDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UWASDControlledDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct WASDControlledDefinition>> &);

};