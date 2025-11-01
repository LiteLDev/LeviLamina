#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/LoadResult.h"
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
class LinkedAssetValidator;
class PackInstance;
class ResourcePackManager;
class SemVersion;
namespace Core { class Path; }
namespace Json { class Value; }
namespace Puv { class Input; }
namespace SharedTypes::v1_21_120 { struct ActorDefinitions; }
namespace SharedTypes::v1_21_120 { struct ActorDocument; }
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
        ::ll::UntypedStorage<8, 32> mUnk48c042;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadActorResult& operator=(LoadActorResult const&);
        LoadActorResult(LoadActorResult const&);
        LoadActorResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LoadActorResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkea40af;
    ::ll::UntypedStorage<8, 64> mUnk13770a;
    ::ll::UntypedStorage<8, 64> mUnkfa226d;
    ::ll::UntypedStorage<8, 8>  mUnk6d02ad;
    ::ll::UntypedStorage<8, 24> mUnk7caf27;
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
    MCNAPI ActorDefinitionGroup(
        ::Level&                                           level,
        ::ResourcePackManager&                             resourcePackManager,
        ::IMinecraftEventing&                              eventing,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator
    );

    MCNAPI void _getResources(::Level& level);

    MCNAPI ::Puv::LoadResult<::SharedTypes::v1_21_120::ActorDocument> _initActorDefinition(
        ::Puv::Input const&  input,
        ::SemVersion const&  formatVersion,
        ::IPackLoadContext&  packLoadContext,
        ::std::string const& relativeResourceFilepath,
        ::JsonBetaState      useBetaFeatures,
        ::std::string const& identifier,
        ::Level&             level,
        ::LogArea            logArea
    );

    MCNAPI ::ActorDefinitionGroup::LoadActorResult _loadActorDefinition(
        ::Level&                             level,
        ::IPackLoadContext&                  packLoadContext,
        ::std::string const&                 relativeResourceFilepath,
        ::Json::Value&                       root,
        ::std::unordered_set<::std::string>& definitions,
        ::LogArea                            logArea
    );

    MCNAPI ::Puv::LoadResult<::SharedTypes::v1_21_120::ActorDocument> _loadDefinitionFromJSON(
        ::SemVersion const&  formatVersion,
        ::IPackLoadContext&  packLoadContext,
        ::std::string const& relativeResourceFilepath,
        ::Json::Value        minecraftEntityNode,
        ::JsonBetaState      useBetaFeatures,
        ::std::string const& identifier,
        ::Level&             level,
        ::LogArea            logArea
    );

    MCNAPI ::ActorDefinitionParseStatus _loadTemplates(
        ::Level&                                                                         level,
        ::std::string const&                                                             base,
        ::std::unordered_map<::std::string, ::SharedTypes::v1_21_120::ActorDefinitions>& componentsGroup,
        ::SemVersion const&                                                              formatVersion,
        ::IPackLoadContext const&                                                        packLoadContext,
        ::JsonBetaState                                                                  useBetaFeatures
    );

    MCNAPI void _removeRef(::ActorDefinitionPtr& ptr);

    MCNAPI void _setupCommonResourceDefinitionMap(::ActorDefinition& def, ::Level& level);

    MCNAPI void _setupPropertyGroups(::Level& level, ::ActorDefinition const& def);

    MCNAPI ::std::vector<::std::string> buildActorEventList() const;

    MCNAPI ::ActorDefinitionPtr tryGetDefinitionGroup(::std::string const& base, ::std::string const& definitionId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void forEachComponentOf(
        ::Json::Value&                                               entityValue,
        ::std::string const&                                         componentName,
        ::std::function<void(::Json::Value&, ::Json::Value&)> const& callback
    );

    MCNAPI static bool loadActorDefinitionIdentifier(
        ::Json::Value const& root,
        ::SemVersion const&  formatVersion,
        ::std::string&       identifier
    );

    MCNAPI static bool loadActorDefinitionRuntimeIdentifier(
        ::Json::Value const& root,
        ::SemVersion const&  formatVersion,
        ::std::string&       runtimeIdentifier
    );

    MCNAPI static bool
    tryReadEntityResourceFile(::PackInstance& packInstance, ::Core::Path const& resource, ::Json::Value& outputRoot);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Level&                                           level,
        ::ResourcePackManager&                             resourcePackManager,
        ::IMinecraftEventing&                              eventing,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
