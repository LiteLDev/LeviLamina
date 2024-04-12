#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/entity/utilities/ActorDefinitionParseStatus.h"
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/enums/LogArea.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ActorDefinitionGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ActorDefinitionGroup inner types declare
    // clang-format off
    struct LoadActorResult;
    // clang-format on

    // ActorDefinitionGroup inner types define
    struct LoadActorResult {
    public:
        // prevent constructor by default
        LoadActorResult& operator=(LoadActorResult const&);
        LoadActorResult(LoadActorResult const&);
        LoadActorResult();

    public:
        // NOLINTBEGIN
        // symbol: ??1LoadActorResult@ActorDefinitionGroup@@QEAA@XZ
        MCAPI ~LoadActorResult();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ActorDefinitionGroup& operator=(ActorDefinitionGroup const&);
    ActorDefinitionGroup(ActorDefinitionGroup const&);
    ActorDefinitionGroup();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorDefinitionGroup@@UEAA@XZ
    virtual ~ActorDefinitionGroup() = default;

    // symbol:
    // ??0ActorDefinitionGroup@@QEAA@AEAVLevel@@AEAVResourcePackManager@@AEAVIMinecraftEventing@@AEBVExperiments@@@Z
    MCAPI ActorDefinitionGroup(
        class Level&               level,
        class ResourcePackManager& resourcePackManager,
        class IMinecraftEventing&  eventing,
        class Experiments const&   experiments
    );

    // symbol:
    // ?buildActorEventList@ActorDefinitionGroup@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> buildActorEventList() const;

    // symbol: ?getComponentFactory@ActorDefinitionGroup@@QEAAPEAVActorComponentFactory@@XZ
    MCAPI class ActorComponentFactory* getComponentFactory();

    // symbol:
    // ?tryGetDefinition@ActorDefinitionGroup@@QEAA?AVActorDefinitionPtr@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class ActorDefinitionPtr tryGetDefinition(std::string const& definitionId);

    // symbol:
    // ?tryGetDefinitionGroup@ActorDefinitionGroup@@QEAA?AVActorDefinitionPtr@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI class ActorDefinitionPtr tryGetDefinitionGroup(std::string const& base, std::string const& definitionId);

    // symbol:
    // ?forEachComponentOf@ActorDefinitionGroup@@SAXAEAVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AXAEAVValue@Json@@0@Z@5@@Z
    MCAPI static void
    forEachComponentOf(class Json::Value&, std::string const&, std::function<void(class Json::Value&, class Json::Value&)> const&);

    // symbol:
    // ?loadActorDefinitionIdentifier@ActorDefinitionGroup@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool loadActorDefinitionIdentifier(
        class Json::Value const& root,
        class SemVersion const&  formatVersion,
        std::string&             identifier
    );

    // symbol:
    // ?loadActorDefinitionRuntimeIdentifier@ActorDefinitionGroup@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool loadActorDefinitionRuntimeIdentifier(
        class Json::Value const& root,
        class SemVersion const&  formatVersion,
        std::string&             runtimeIdentifier
    );

    // symbol: ?tryReadEntityResourceFile@ActorDefinitionGroup@@SA_NAEAVPackInstance@@AEBVPath@Core@@AEAVValue@Json@@@Z
    MCAPI static bool tryReadEntityResourceFile(
        class PackInstance&     packInstance,
        class Core::Path const& resource,
        class Json::Value&      outputRoot
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_addRef@ActorDefinitionGroup@@IEAAXAEAVActorDefinitionPtr@@@Z
    MCAPI void _addRef(class ActorDefinitionPtr& ptr);

    // symbol: ?_removeRef@ActorDefinitionGroup@@IEAAXAEAVActorDefinitionPtr@@@Z
    MCAPI void _removeRef(class ActorDefinitionPtr& ptr);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getResources@ActorDefinitionGroup@@AEAAXAEAVLevel@@@Z
    MCAPI void _getResources(class Level& level);

    // symbol:
    // ?_loadActorDefinition@ActorDefinitionGroup@@AEAA?AULoadActorResult@1@AEAVLevel@@AEBVSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBW4CurrentCmdVersion@@AEAVValue@Json@@AEAV?$unordered_set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@_NW4LogArea@@@Z
    MCAPI struct ActorDefinitionGroup::LoadActorResult _loadActorDefinition(
        class Level&,
        class SemVersion const&,
        std::string const&,
        ::CurrentCmdVersion const&,
        class Json::Value&,
        std::unordered_set<std::string>&,
        bool,
        ::LogArea
    );

    // symbol:
    // ?_loadDefinitionFromJSON@ActorDefinitionGroup@@AEAA_NAEBVSemVersion@@0AEBW4CurrentCmdVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@Json@@2AEAVLevel@@_NW4LogArea@@@Z
    MCAPI bool _loadDefinitionFromJSON(
        class SemVersion const&,
        class SemVersion const&,
        ::CurrentCmdVersion const&,
        std::string const&,
        class Json::Value&,
        std::string const&,
        class Level&,
        bool,
        ::LogArea
    );

    // symbol:
    // ?_loadTemplates@ActorDefinitionGroup@@AEAA?AW4ActorDefinitionParseStatus@@AEAVLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UDeserializeDataParams@@@Z
    MCAPI ::ActorDefinitionParseStatus
    _loadTemplates(class Level& level, std::string const& base, struct DeserializeDataParams deserializeDataParams);

    // symbol: ?_setupCommonResourceDefinitionMap@ActorDefinitionGroup@@AEAAXAEAVActorDefinition@@AEAVLevel@@@Z
    MCAPI void _setupCommonResourceDefinitionMap(class ActorDefinition& def, class Level& level);

    // symbol: ?_setupPropertyGroups@ActorDefinitionGroup@@AEAAXAEAVLevel@@@Z
    MCAPI void _setupPropertyGroups(class Level& level);

    // NOLINTEND
};
