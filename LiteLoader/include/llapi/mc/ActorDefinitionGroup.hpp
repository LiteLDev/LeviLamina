/**
 * @file  ActorDefinitionGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionGroup.
 *
 */
class ActorDefinitionGroup {

#define AFTER_EXTRA
// Add Member There
public:
struct LoadActorResult {
    LoadActorResult() = delete;
    LoadActorResult(LoadActorResult const&) = delete;
    LoadActorResult(LoadActorResult const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONGROUP
public:
    class ActorDefinitionGroup& operator=(class ActorDefinitionGroup const &) = delete;
    ActorDefinitionGroup(class ActorDefinitionGroup const &) = delete;
    ActorDefinitionGroup() = delete;
#endif

public:
    /**
     * @symbol ??0ActorDefinitionGroup\@\@QEAA\@AEAVLevel\@\@AEAVResourcePackManager\@\@AEAVIMinecraftEventing\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI ActorDefinitionGroup(class Level &, class ResourcePackManager &, class IMinecraftEventing &, class Experiments const &);
    /**
     * @symbol ?buildActorEventList\@ActorDefinitionGroup\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> buildActorEventList() const;
    /**
     * @symbol ?tryGetDefinition\@ActorDefinitionGroup\@\@QEAA?AVActorDefinitionPtr\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ActorDefinitionPtr tryGetDefinition(std::string const &);
    /**
     * @symbol ?tryGetDefinitionGroup\@ActorDefinitionGroup\@\@QEAA?AVActorDefinitionPtr\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI class ActorDefinitionPtr tryGetDefinitionGroup(std::string const &, std::string const &);
    /**
     * @symbol ?loadActorDefinitionIdentifier\@ActorDefinitionGroup\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool loadActorDefinitionIdentifier(class Json::Value const &, class SemVersion const &, std::string &);
    /**
     * @symbol ?loadActorDefinitionRuntimeIdentifier\@ActorDefinitionGroup\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool loadActorDefinitionRuntimeIdentifier(class Json::Value const &, class SemVersion const &, std::string &);
    /**
     * @symbol ?tryReadEntityResourceFile\@ActorDefinitionGroup\@\@SA_NAEAVPackInstance\@\@AEBVPath\@Core\@\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI static bool tryReadEntityResourceFile(class PackInstance &, class Core::Path const &, class Json::Value &);

//protected:
    /**
     * @symbol ?_addRef\@ActorDefinitionGroup\@\@IEAAXAEAVActorDefinitionPtr\@\@\@Z
     */
    MCAPI void _addRef(class ActorDefinitionPtr &);
    /**
     * @symbol ?_removeRef\@ActorDefinitionGroup\@\@IEAAXAEAVActorDefinitionPtr\@\@\@Z
     */
    MCAPI void _removeRef(class ActorDefinitionPtr &);

//private:
    /**
     * @symbol ?_getResources\@ActorDefinitionGroup\@\@AEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void _getResources(class Level &);
    /**
     * @symbol ?_loadActorDefinition\@ActorDefinitionGroup\@\@AEAA?AULoadActorResult\@1\@AEAVLevel\@\@AEBVSemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBW4CurrentCmdVersion\@\@AEAVValue\@Json\@\@AEAV?$unordered_set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@6\@_NW4LogArea\@\@\@Z
     */
    MCAPI struct ActorDefinitionGroup::LoadActorResult _loadActorDefinition(class Level &, class SemVersion const &, std::string const &, enum class CurrentCmdVersion const &, class Json::Value &, class std::unordered_set<std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<std::string>> &, bool, enum class LogArea);
    /**
     * @symbol ?_loadDefinitionFromJSON\@ActorDefinitionGroup\@\@AEAA_NAEBVSemVersion\@\@0AEBW4CurrentCmdVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValue\@Json\@\@2AEAVLevel\@\@_NW4LogArea\@\@\@Z
     */
    MCAPI bool _loadDefinitionFromJSON(class SemVersion const &, class SemVersion const &, enum class CurrentCmdVersion const &, std::string const &, class Json::Value &, std::string const &, class Level &, bool, enum class LogArea);
    /**
     * @symbol ?_loadTemplates\@ActorDefinitionGroup\@\@AEAA?AW4ActorDefinitionParseStatus\@\@AEAVLevel\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UDeserializeDataParams\@\@\@Z
     */
    MCAPI enum class ActorDefinitionParseStatus _loadTemplates(class Level &, std::string const &, struct DeserializeDataParams);
    /**
     * @symbol ?_setupCommonResourceDefinitionMap\@ActorDefinitionGroup\@\@AEAAXAEAVActorDefinition\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void _setupCommonResourceDefinitionMap(class ActorDefinition &, class Level &);
    /**
     * @symbol ?_setupPropertyGroups\@ActorDefinitionGroup\@\@AEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void _setupPropertyGroups(class Level &);

protected:

private:

};
