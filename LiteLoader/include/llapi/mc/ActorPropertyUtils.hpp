/**
 * @file  MC/ActorPropertyUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ActorPropertyUtils.
 *
 */
namespace ActorPropertyUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   -1351207100
     * @symbol ?_applyValueChangeFromTag@ActorPropertyUtils@@YAXAEAVPropertyComponent@@AEBVPropertyGroup@@AEBVPropertyMetadata@@AEBVTag@@@Z
     */
    MCAPI void _applyValueChangeFromTag(class PropertyComponent &, class PropertyGroup const &, class PropertyMetadata const &, class Tag const &);
    /**
     * @hash   -480634315
     * @symbol ?_checkAndQueueBoolValue@ActorPropertyUtils@@YA_NAEBVPropertyGroup@@_KPEAVActorDefinitionDiffList@@_N@Z
     */
    MCAPI bool _checkAndQueueBoolValue(class PropertyGroup const &, unsigned __int64, class ActorDefinitionDiffList *, bool);
    /**
     * @hash   1157027876
     * @symbol ?_checkAndQueueEnumIndexValueByHash@ActorPropertyUtils@@YA_NAEBVPropertyGroup@@_K1PEAVActorDefinitionDiffList@@1@Z
     */
    MCAPI bool _checkAndQueueEnumIndexValueByHash(class PropertyGroup const &, unsigned __int64, unsigned __int64, class ActorDefinitionDiffList *, unsigned __int64);
    /**
     * @hash   -1222595826
     * @symbol ?_checkAndQueueFloatValue@ActorPropertyUtils@@YA_NAEBVPropertyGroup@@_K1PEAVActorDefinitionDiffList@@M@Z
     */
    MCAPI bool _checkAndQueueFloatValue(class PropertyGroup const &, unsigned __int64, unsigned __int64, class ActorDefinitionDiffList *, float);
    /**
     * @hash   11770944
     * @symbol ?_checkAndQueueIntValue@ActorPropertyUtils@@YA_NAEBVPropertyGroup@@_K1PEAVActorDefinitionDiffList@@H@Z
     */
    MCAPI bool _checkAndQueueIntValue(class PropertyGroup const &, unsigned __int64, unsigned __int64, class ActorDefinitionDiffList *, int);
    /**
     * @hash   -1363992383
     * @symbol ?addPendingEventResponseChange@ActorPropertyUtils@@YAXAEBVPropertyComponent@@AEAVActor@@AEBVHashedString@@AEBUMolangScriptArg@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void addPendingEventResponseChange(class PropertyComponent const &, class Actor &, class HashedString const &, struct MolangScriptArg const &, std::string const &);
    /**
     * @hash   917910916
     * @symbol ?ingestPropertyUpdate@ActorPropertyUtils@@YAXAEAVPropertyComponent@@AEBVCompoundTag@@@Z
     */
    MCAPI void ingestPropertyUpdate(class PropertyComponent &, class CompoundTag const &);

};