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
    // vIndex: 0
    virtual ~ActorDefinitionGroup() = default;

    MCAPI ActorDefinitionGroup(
        class Level&               level,
        class ResourcePackManager& resourcePackManager,
        class IMinecraftEventing&  eventing,
        class Experiments const&   experiments
    );

    MCAPI std::vector<std::string> buildActorEventList() const;

    MCAPI class ActorComponentFactory* getComponentFactory();

    MCAPI void setComponentFactory(class ActorComponentFactory* componentFactory);

    MCAPI class ActorDefinitionPtr tryGetDefinition(std::string const& definitionId);

    MCAPI class ActorDefinitionPtr tryGetDefinitionGroup(std::string const& base, std::string const& definitionId);

    MCAPI static void
    forEachComponentOf(class Json::Value&, std::string const&, std::function<void(class Json::Value&, class Json::Value&)> const&);

    MCAPI static bool loadActorDefinitionIdentifier(
        class Json::Value const& root,
        class SemVersion const&  formatVersion,
        std::string&             identifier
    );

    MCAPI static bool loadActorDefinitionRuntimeIdentifier(
        class Json::Value const& root,
        class SemVersion const&  formatVersion,
        std::string&             runtimeIdentifier
    );

    MCAPI static bool tryReadEntityResourceFile(
        class PackInstance&     packInstance,
        class Core::Path const& resource,
        class Json::Value&      outputRoot
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _addRef(class ActorDefinitionPtr& ptr);

    MCAPI void _removeRef(class ActorDefinitionPtr& ptr);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _getResources(class Level& level);

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

    MCAPI ::ActorDefinitionParseStatus
    _loadTemplates(class Level& level, std::string const& base, struct DeserializeDataParams deserializeDataParams);

    MCAPI void _setupCommonResourceDefinitionMap(class ActorDefinition& def, class Level& level);

    MCAPI void _setupPropertyGroups(class Level& level);

    // NOLINTEND
};
