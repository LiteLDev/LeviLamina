/**
 * @file  ActorPropertyUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?_checkAndQueueBoolValue\@ActorPropertyUtils\@\@YA_NAEBVPropertyGroup\@\@_KPEAVActorDefinitionDiffList\@\@_N\@Z
     */
    MCAPI bool _checkAndQueueBoolValue(class PropertyGroup const &, unsigned __int64, class ActorDefinitionDiffList *, bool);
    /**
     * @symbol  ?_checkAndQueueEnumIndexValueByHash\@ActorPropertyUtils\@\@YA_NAEBVPropertyGroup\@\@_K1PEAVActorDefinitionDiffList\@\@1\@Z
     */
    MCAPI bool _checkAndQueueEnumIndexValueByHash(class PropertyGroup const &, unsigned __int64, unsigned __int64, class ActorDefinitionDiffList *, unsigned __int64);
    /**
     * @symbol  ?_checkAndQueueFloatValue\@ActorPropertyUtils\@\@YA_NAEBVPropertyGroup\@\@_K1PEAVActorDefinitionDiffList\@\@M\@Z
     */
    MCAPI bool _checkAndQueueFloatValue(class PropertyGroup const &, unsigned __int64, unsigned __int64, class ActorDefinitionDiffList *, float);
    /**
     * @symbol  ?_checkAndQueueIntValue\@ActorPropertyUtils\@\@YA_NAEBVPropertyGroup\@\@_K1PEAVActorDefinitionDiffList\@\@H\@Z
     */
    MCAPI bool _checkAndQueueIntValue(class PropertyGroup const &, unsigned __int64, unsigned __int64, class ActorDefinitionDiffList *, int);
    /**
     * @symbol  ?addPendingEventResponseChange\@ActorPropertyUtils\@\@YAXAEBVPropertyComponent\@\@AEAVActor\@\@AEBVHashedString\@\@AEBUMolangScriptArg\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addPendingEventResponseChange(class PropertyComponent const &, class Actor &, class HashedString const &, struct MolangScriptArg const &, std::string const &);

};