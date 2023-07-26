#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ActorDefinitionGroup {
public:
    // ActorDefinitionGroup inner types declare
    // clang-format off
    struct LoadActorResult;
    // clang-format on

    // ActorDefinitionGroup inner types define
    struct LoadActorResult {

    public:
        // prevent constructor by default
        LoadActorResult& operator=(LoadActorResult const&) = delete;
        LoadActorResult(LoadActorResult const&)            = delete;
        LoadActorResult()                                  = delete;

    public:
        /**
         * @symbol ??1LoadActorResult\@ActorDefinitionGroup\@\@QEAA\@XZ
         */
        MCAPI ~LoadActorResult(); // NOLINT
    };

public:
    // prevent constructor by default
    ActorDefinitionGroup& operator=(ActorDefinitionGroup const&) = delete;
    ActorDefinitionGroup(ActorDefinitionGroup const&)            = delete;
    ActorDefinitionGroup()                                       = delete;

public:
    /**
     * @symbol
     * ??0ActorDefinitionGroup\@\@QEAA\@AEAVLevel\@\@AEAVResourcePackManager\@\@AEAVIMinecraftEventing\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI
    ActorDefinitionGroup(class Level&, class ResourcePackManager&, class IMinecraftEventing&, class Experiments const&); // NOLINT
    /**
     * @symbol
     * ?buildActorEventList\@ActorDefinitionGroup\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> buildActorEventList() const; // NOLINT
    /**
     * @symbol
     * ?tryGetDefinition\@ActorDefinitionGroup\@\@QEAA?AVActorDefinitionPtr\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ActorDefinitionPtr tryGetDefinition(std::string const&); // NOLINT
    /**
     * @symbol
     * ?tryGetDefinitionGroup\@ActorDefinitionGroup\@\@QEAA?AVActorDefinitionPtr\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI class ActorDefinitionPtr tryGetDefinitionGroup(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?forEachComponentOf\@ActorDefinitionGroup\@\@SAXAEAVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$function\@$$A6AXAEAVValue\@Json\@\@0\@Z\@5\@\@Z
     */
    MCAPI static void
    forEachComponentOf(class Json::Value&, std::string const&, class std::function<void(class Json::Value&, class Json::Value&)> const&); // NOLINT
    /**
     * @symbol
     * ?loadActorDefinitionIdentifier\@ActorDefinitionGroup\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool
    loadActorDefinitionIdentifier(class Json::Value const&, class SemVersion const&, std::string&); // NOLINT
    /**
     * @symbol
     * ?loadActorDefinitionRuntimeIdentifier\@ActorDefinitionGroup\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool
    loadActorDefinitionRuntimeIdentifier(class Json::Value const&, class SemVersion const&, std::string&); // NOLINT
    /**
     * @symbol
     * ?tryReadEntityResourceFile\@ActorDefinitionGroup\@\@SA_NAEAVPackInstance\@\@AEBVPath\@Core\@\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI static bool
    tryReadEntityResourceFile(class PackInstance&, class Core::Path const&, class Json::Value&); // NOLINT

    // protected:
    /**
     * @symbol ?_addRef\@ActorDefinitionGroup\@\@IEAAXAEAVActorDefinitionPtr\@\@\@Z
     */
    MCAPI void _addRef(class ActorDefinitionPtr&); // NOLINT
    /**
     * @symbol ?_removeRef\@ActorDefinitionGroup\@\@IEAAXAEAVActorDefinitionPtr\@\@\@Z
     */
    MCAPI void _removeRef(class ActorDefinitionPtr&); // NOLINT

    // private:
    /**
     * @symbol ?_getResources\@ActorDefinitionGroup\@\@AEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void _getResources(class Level&); // NOLINT
    /**
     * @symbol
     * ?_loadActorDefinition\@ActorDefinitionGroup\@\@AEAA?AULoadActorResult\@1\@AEAVLevel\@\@AEBVSemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBW4CurrentCmdVersion\@\@AEAVValue\@Json\@\@AEAV?$unordered_set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@6\@_NW4LogArea\@\@\@Z
     */
    MCAPI struct ActorDefinitionGroup::LoadActorResult _loadActorDefinition(
        class Level&,
        class SemVersion const&,
        std::string const&,
        enum class CurrentCmdVersion const&,
        class Json::Value&,
        class std::unordered_set<
            std::string,
            struct std::hash<std::string>,
            struct std::equal_to<std::string>,
            class std::allocator<std::string>>&,
        bool,
        enum class LogArea
    ); // NOLINT
    /**
     * @symbol
     * ?_loadDefinitionFromJSON\@ActorDefinitionGroup\@\@AEAA_NAEBVSemVersion\@\@0AEBW4CurrentCmdVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValue\@Json\@\@2AEAVLevel\@\@_NW4LogArea\@\@\@Z
     */
    MCAPI bool _loadDefinitionFromJSON(
        class SemVersion const&,
        class SemVersion const&,
        enum class CurrentCmdVersion const&,
        std::string const&,
        class Json::Value&,
        std::string const&,
        class Level&,
        bool,
        enum class LogArea
    ); // NOLINT
    /**
     * @symbol
     * ?_loadTemplates\@ActorDefinitionGroup\@\@AEAA?AW4ActorDefinitionParseStatus\@\@AEAVLevel\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UDeserializeDataParams\@\@\@Z
     */
    MCAPI enum class ActorDefinitionParseStatus
    _loadTemplates(class Level&, std::string const&, struct DeserializeDataParams); // NOLINT
    /**
     * @symbol ?_setupCommonResourceDefinitionMap\@ActorDefinitionGroup\@\@AEAAXAEAVActorDefinition\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void _setupCommonResourceDefinitionMap(class ActorDefinition&, class Level&); // NOLINT
    /**
     * @symbol ?_setupPropertyGroups\@ActorDefinitionGroup\@\@AEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void _setupPropertyGroups(class Level&); // NOLINT

protected:
private:
};
