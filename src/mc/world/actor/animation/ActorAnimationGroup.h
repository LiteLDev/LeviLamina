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
class ActorAnimationInfo;
class HashedString;
class MinEngineVersion;
class PackStats;
class ResourceLoadManager;
class ResourcePackManager;
struct ActorAnimationGroupParseMetaData;
namespace Core { class Path; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ActorAnimationGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64 const> mResourceLoadTimeStamp;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::ActorAnimationInfo>>>
                                                                                 mAnimations;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                       mActorAnimationMutex;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourceLoadManager>> mResourceLoadManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorAnimationGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ActorAnimationGroupParseMetaData>>
    _buildAnimationFileSchema_v1_8(bool isPersonaPack);

    MCAPI ::std::shared_ptr<::ActorAnimationInfo> getActorAnimationInfo(::HashedString const& name);

    MCAPI void loadActorAnimation(
        ::std::string const&      fileData,
        ::Core::Path const&       filenameWithExtension,
        ::PackStats&              stats,
        ::MinEngineVersion const& minEngineVersion,
        ::CurrentCmdVersion       packCommandVersion,
        bool                      isPersonaPack,
        ::std::string const&      personaPieceId
    );

    MCAPI void loadActorAnimationsSync(::ResourcePackManager& resourcePackManager);
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
