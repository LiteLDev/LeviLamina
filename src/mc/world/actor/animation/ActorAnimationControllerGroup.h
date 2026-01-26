#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerInfo;
class ActorAnimationControllerPtr;
class HashedString;
class MinEngineVersion;
class ResourceLoadManager;
class ResourcePackManager;
class SemVersion;
struct ActorAnimationControllerGroupParseMetaData;
namespace Core { class Path; }
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ActorAnimationControllerGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64 const>                  mResourceLoadTimeStamp;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mActorAnimationControllerLock;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::ActorAnimationControllerInfo>>>
                                                                                 mAnimationControllers;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourceLoadManager>> mResourceLoadManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorAnimationControllerGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _loadActorAnimationController(
        ::std::string const&      fileData,
        ::Core::Path const&       filenameWithExtension,
        ::MinEngineVersion const& minEngineVersion,
        ::CurrentCmdVersion       packCommandVersion
    );

    MCAPI_C ::ActorAnimationControllerPtr getActorAnimationController(::HashedString const& name);

    MCAPI ::std::shared_ptr<::ActorAnimationControllerInfo> getActorAnimationControllerInfo(::HashedString const& name);

    MCAPI_C void loadActorAnimationControllersAsync(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager
    );

    MCAPI void loadActorAnimationControllersSync(::ResourcePackManager& resourcePackManager);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ActorAnimationControllerGroupParseMetaData>>
    _buildAnimationControllerFileSchema_v1_10_Or_Later(::SemVersion const& version);

    MCAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, bool>>
    _buildAnimationControllerFileSchema_v1_8();

    MCAPI static bool loadFormatVersion(::Json::Value const& root, ::SemVersion& version);

    MCAPI static bool upgrade_v1_8_to_v1_10(::Json::Value& root, ::MinEngineVersion const& minEngineVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();
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
