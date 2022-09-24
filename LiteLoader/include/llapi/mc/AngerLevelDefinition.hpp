/**
 * @file  AngerLevelDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AngerLevelDefinition.
 *
 */
class AngerLevelDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANGERLEVELDEFINITION
public:
    class AngerLevelDefinition& operator=(class AngerLevelDefinition const &) = delete;
    AngerLevelDefinition(class AngerLevelDefinition const &) = delete;
    AngerLevelDefinition() = delete;
#endif

public:
    /**
     * @hash   -1328480724
     * @symbol ?addOnIncreaseSoundDefinition@AngerLevelDefinition@@QEAAXAEBVSoundDefinition@@@Z
     */
    MCAPI void addOnIncreaseSoundDefinition(class SoundDefinition const &);
    /**
     * @hash   -912711115
     * @symbol ?initialize@AngerLevelDefinition@@QEAAXAEAVEntityContext@@AEAVAngerLevelComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class AngerLevelComponent &);
    /**
     * @hash   -1434957082
     * @symbol ?buildSchema@AngerLevelDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VAngerLevelDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AngerLevelDefinition>> &);

};