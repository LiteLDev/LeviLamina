/**
 * @file  AmbientSoundIntervalDefinition.hpp
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
 * @brief MC structure AmbientSoundIntervalDefinition.
 *
 */
struct AmbientSoundIntervalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMBIENTSOUNDINTERVALDEFINITION
public:
    struct AmbientSoundIntervalDefinition& operator=(struct AmbientSoundIntervalDefinition const &) = delete;
    AmbientSoundIntervalDefinition(struct AmbientSoundIntervalDefinition const &) = delete;
    AmbientSoundIntervalDefinition() = delete;
#endif

public:
    /**
     * @hash   -527973978
     * @symbol ?addDynamic@AmbientSoundIntervalDefinition@@QEAAXAEBUDynamicAmbientSound@@@Z
     */
    MCAPI void addDynamic(struct DynamicAmbientSound const &);
    /**
     * @hash   -1062128785
     * @symbol ?initialize@AmbientSoundIntervalDefinition@@QEAAXAEAVEntityContext@@AEAVAmbientSoundServerComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class AmbientSoundServerComponent &);
    /**
     * @hash   898764362
     * @symbol ?buildSchema@AmbientSoundIntervalDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UAmbientSoundIntervalDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct AmbientSoundIntervalDefinition>> &);

};