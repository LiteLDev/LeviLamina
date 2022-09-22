/**
 * @file  SoundVolumeDefinition.hpp
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
 * @brief MC structure SoundVolumeDefinition.
 *
 */
struct SoundVolumeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOUNDVOLUMEDEFINITION
public:
    struct SoundVolumeDefinition& operator=(struct SoundVolumeDefinition const &) = delete;
    SoundVolumeDefinition(struct SoundVolumeDefinition const &) = delete;
    SoundVolumeDefinition() = delete;
#endif

public:
    /**
     * @hash   -1896755586
     * @symbol ?initialize@SoundVolumeDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @hash   1309662534
     * @symbol ?buildSchema@SoundVolumeDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@USoundVolumeDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct SoundVolumeDefinition>> &);

};