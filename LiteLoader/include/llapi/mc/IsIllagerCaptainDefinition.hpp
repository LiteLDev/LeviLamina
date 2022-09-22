/**
 * @file  IsIllagerCaptainDefinition.hpp
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
 * @brief MC structure IsIllagerCaptainDefinition.
 *
 */
struct IsIllagerCaptainDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISILLAGERCAPTAINDEFINITION
public:
    struct IsIllagerCaptainDefinition& operator=(struct IsIllagerCaptainDefinition const &) = delete;
    IsIllagerCaptainDefinition(struct IsIllagerCaptainDefinition const &) = delete;
    IsIllagerCaptainDefinition() = delete;
#endif

public:
    /**
     * @hash   -841121924
     * @symbol ?initialize@IsIllagerCaptainDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   -769764900
     * @symbol ?uninitialize@IsIllagerCaptainDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @hash   -637757958
     * @symbol ?buildSchema@IsIllagerCaptainDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsIllagerCaptainDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsIllagerCaptainDefinition>> &);

};