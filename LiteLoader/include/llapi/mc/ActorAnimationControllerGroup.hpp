/**
 * @file  ActorAnimationControllerGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Core.hpp"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorAnimationControllerGroup.
 *
 */
class ActorAnimationControllerGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLERGROUP
public:
    class ActorAnimationControllerGroup& operator=(class ActorAnimationControllerGroup const &) = delete;
    ActorAnimationControllerGroup(class ActorAnimationControllerGroup const &) = delete;
#endif

public:
    /**
     * @hash   1361603008
     * @symbol ??0ActorAnimationControllerGroup@@QEAA@XZ
     */
    MCAPI ActorAnimationControllerGroup();
    /**
     * @hash   1860569061
     * @symbol ?getActorAnimationController@ActorAnimationControllerGroup@@QEAA?AVActorAnimationControllerPtr@@AEBVHashedString@@@Z
     */
    MCAPI class ActorAnimationControllerPtr getActorAnimationController(class HashedString const &);
    /**
     * @hash   -483610466
     * @symbol ?getActorAnimationControllerInfo@ActorAnimationControllerGroup@@QEAA?AV?$shared_ptr@VActorAnimationControllerInfo@@@std@@AEBVHashedString@@@Z
     */
    MCAPI class std::shared_ptr<class ActorAnimationControllerInfo> getActorAnimationControllerInfo(class HashedString const &);
    /**
     * @hash   1682544078
     * @symbol ?loadActorAnimationControllersSync@ActorAnimationControllerGroup@@QEAAXAEAVResourcePackManager@@@Z
     */
    MCAPI void loadActorAnimationControllersSync(class ResourcePackManager &);
    /**
     * @hash   634168176
     * @symbol ??1ActorAnimationControllerGroup@@QEAA@XZ
     */
    MCAPI ~ActorAnimationControllerGroup();
    /**
     * @hash   -2043587982
     * @symbol ?loadFormatVersion@ActorAnimationControllerGroup@@SA_NAEBVValue@Json@@AEAVSemVersion@@@Z
     */
    MCAPI static bool loadFormatVersion(class Json::Value const &, class SemVersion &);

//private:
    /**
     * @hash   298131042
     * @symbol ?_loadActorAnimationController@ActorAnimationControllerGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@W4CurrentCmdVersion@@@Z
     */
    MCAPI void _loadActorAnimationController(std::string const &, class Core::Path const &, enum CurrentCmdVersion);
    /**
     * @hash   -1620547445
     * @symbol ?_buildAnimationControllerFileSchema_v1_10_Or_Later@ActorAnimationControllerGroup@@CA?AV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UActorAnimationControllerGroupParseMetaData@@@JsonUtil@@@std@@AEBVSemVersion@@@Z
     */
    MCAPI static class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorAnimationControllerGroupParseMetaData>> _buildAnimationControllerFileSchema_v1_10_Or_Later(class SemVersion const &);
    /**
     * @hash   328334420
     * @symbol ?_buildAnimationControllerFileSchema_v1_8@ActorAnimationControllerGroup@@CA?AV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@_N@JsonUtil@@@std@@XZ
     */
    MCAPI static class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, bool>> _buildAnimationControllerFileSchema_v1_8();
    /**
     * @hash   -265818106
     * @symbol ?upgrade_v1_8_to_v1_10@ActorAnimationControllerGroup@@CA_NAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    MCAPI static bool upgrade_v1_8_to_v1_10(class Json::Value &, class SemVersion const &);

private:

};