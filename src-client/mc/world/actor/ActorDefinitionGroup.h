#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/puv/puv_load_data/LoadResultWithTiming.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/world/actor/ActorDefinitionParseStatus.h"
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
class ActorComponentFactory;
class ActorDefinition;
class ActorDefinitionPtr;
class Level;
class PackInstance;
class SemVersion;
struct IMinecraftEventing;
struct IPackLoadContext;
struct LinkedAssetValidator;
struct ResourcePackManager;
namespace Core { class Path; }
namespace Json { class Value; }
namespace Puv { struct Input; }
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
    using ActorDefinitionList = ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>>;

    struct EDLWrapper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>>> mList;
        // NOLINTEND
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
        ::ll::TypedStorage<4, 4, ::ActorDefinitionGroup::LoadStatus>   mLoadStatus;
        ::ll::TypedStorage<8, 32, ::std::string>                       mActorId;
        ::ll::TypedStorage<1, 1, bool>                                 mIsVanillaOverride;
        ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming> mLoadTime;
        // NOLINTEND

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
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorDefinitionPtr*>> mRegisteredPtrs;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>>> mDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ActorDefinitionGroup::EDLWrapper>>   mTemplateMap;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                              mResourcePackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>> mLinkedAssetValidator;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                        mReferenceMutex;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                               mEventing;
    ::ll::TypedStorage<8, 8, ::ActorComponentFactory*>                            mComponentFactory;
    ::ll::TypedStorage<8, 72, ::Experiments>                                      mExperiments;
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
        ::Level&                                           level,
        ::ResourcePackManager&                             resourcePackManager,
        ::IMinecraftEventing&                              eventing,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator
    );

    MCAPI void _getResources(::Level& level);

    MCAPI ::Puv::LoadResult<::SharedTypes::v1_21_120::ActorDocument> _initActorDefinition(
        ::Puv::Input const&  input,
        ::SemVersion const&  formatVersion,
        ::IPackLoadContext&  packLoadContext,
        ::std::string const& relativeResourceFilepath,
        ::JsonBetaState      useBetaFeatures,
        ::std::string const& identifier,
        ::Level&             level,
        ::LogArea            logArea
    );

    MCAPI ::ActorDefinitionGroup::LoadActorResult _loadActorDefinition(
        ::Level&                             level,
        ::IPackLoadContext&                  packLoadContext,
        ::std::string const&                 relativeResourceFilepath,
        ::Json::Value&                       root,
        ::std::unordered_set<::std::string>& definitions,
        ::LogArea                            logArea
    );

    MCAPI ::Puv::LoadResult<::SharedTypes::v1_21_120::ActorDocument> _loadDefinitionFromJSON(
        ::SemVersion const&  formatVersion,
        ::IPackLoadContext&  packLoadContext,
        ::std::string const& relativeResourceFilepath,
        ::Json::Value        minecraftEntityNode,
        ::JsonBetaState      useBetaFeatures,
        ::std::string const& identifier,
        ::Level&             level,
        ::LogArea            logArea
    );

    MCAPI ::ActorDefinitionParseStatus _loadTemplates(
        ::Level&                                                                         level,
        ::std::string const&                                                             base,
        ::std::unordered_map<::std::string, ::SharedTypes::v1_21_120::ActorDefinitions>& componentsGroup,
        ::SemVersion const&                                                              formatVersion,
        ::IPackLoadContext const&                                                        packLoadContext,
        ::JsonBetaState                                                                  useBetaFeatures
    );

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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
