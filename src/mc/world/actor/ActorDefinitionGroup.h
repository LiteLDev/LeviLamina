#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/world/actor/ActorDefinitionParseStatus.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class ActorDefinitionPtr;
class Experiments;
class IMinecraftEventing;
class IPackLoadContext;
class Level;
class PackInstance;
class ResourcePackManager;
class SemVersion;
struct DeserializeDataParams;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ActorDefinitionGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ActorDefinitionGroup inner types declare
    // clang-format off
    struct EDLWrapper;
    struct LoadActorResult;
    // clang-format on

    // ActorDefinitionGroup inner types define
    struct EDLWrapper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk4de780;
        // NOLINTEND

    public:
        // prevent constructor by default
        EDLWrapper& operator=(EDLWrapper const&);
        EDLWrapper(EDLWrapper const&);
        EDLWrapper();
    };

    enum class LoadStatus : int {
        Success                      = 0,
        FailedToParseIdentifier      = 1,
        InvalidNamespaceInIdentifier = 2,
        DefinitionAlreadyDefined     = 3,
        FailedToLoadFromJSON         = 4,
        InvalidIdentifier            = 5,
    };

    struct LoadActorResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk185ad2;
        ::ll::UntypedStorage<8, 32> mUnkfdabe0;
        ::ll::UntypedStorage<1, 1>  mUnk725dc2;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadActorResult& operator=(LoadActorResult const&);
        LoadActorResult(LoadActorResult const&);
        LoadActorResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~LoadActorResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkea40af;
    ::ll::UntypedStorage<8, 64> mUnk13770a;
    ::ll::UntypedStorage<8, 64> mUnkfa226d;
    ::ll::UntypedStorage<8, 8>  mUnk6d02ad;
    ::ll::UntypedStorage<8, 80> mUnk3e218b;
    ::ll::UntypedStorage<8, 8>  mUnkcf7ca4;
    ::ll::UntypedStorage<8, 8>  mUnk6ed894;
    ::ll::UntypedStorage<8, 72> mUnkc1236e;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionGroup& operator=(ActorDefinitionGroup const&);
    ActorDefinitionGroup(ActorDefinitionGroup const&);
    ActorDefinitionGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorDefinitionGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionGroup(
        ::Level&               level,
        ::ResourcePackManager& resourcePackManager,
        ::IMinecraftEventing&  eventing,
        ::Experiments const&   experiments
    );

    MCAPI void _getResources(::Level& level);

    MCAPI ::ActorDefinitionGroup::LoadActorResult _loadActorDefinition(
        ::Level&                             level,
        ::IPackLoadContext&                  packLoadContext,
        ::std::string const&                 relativeResourceFilepath,
        ::Json::Value&                       root,
        ::std::unordered_set<::std::string>& definitions,
        ::LogArea                            logArea
    );

    MCAPI bool _loadDefinitionFromJSON(
        ::SemVersion const&  formatVersion,
        ::IPackLoadContext&  packLoadContext,
        ::std::string const& relativeResourceFilepath,
        ::Json::Value&       minecraftEntityNode,
        ::JsonBetaState      useBetaFeatures,
        ::std::string const& identifier,
        ::Level&             level,
        ::LogArea            logArea
    );

    MCAPI ::ActorDefinitionParseStatus
    _loadTemplates(::Level& level, ::std::string const& base, ::DeserializeDataParams deserializeDataParams);

    MCAPI void _removeRef(::ActorDefinitionPtr& ptr);

    MCAPI void _setupCommonResourceDefinitionMap(::ActorDefinition& def, ::Level& level);

    MCAPI void _setupPropertyGroups(::Level& level, ::ActorDefinition const& def);

    MCAPI ::std::vector<::std::string> buildActorEventList() const;

    MCAPI ::ActorDefinitionPtr tryGetDefinitionGroup(::std::string const& base, ::std::string const& definitionId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void forEachComponentOf(
        ::Json::Value&                                               entityValue,
        ::std::string const&                                         componentName,
        ::std::function<void(::Json::Value&, ::Json::Value&)> const& callback
    );

    MCAPI static void loadActorDefinitionFormatVersion(::Json::Value const& root, ::SemVersion& formatVersion);

    MCAPI static bool loadActorDefinitionIdentifier(
        ::Json::Value const& root,
        ::SemVersion const&  formatVersion,
        ::std::string&       identifier
    );

    MCAPI static bool loadActorDefinitionRuntimeIdentifier(
        ::Json::Value const& root,
        ::SemVersion const&  formatVersion,
        ::std::string&       runtimeIdentifier
    );

    MCAPI static bool
    tryReadEntityResourceFile(::PackInstance& packInstance, ::Core::Path const& resource, ::Json::Value& outputRoot);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Level&               level,
        ::ResourcePackManager& resourcePackManager,
        ::IMinecraftEventing&  eventing,
        ::Experiments const&   experiments
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
