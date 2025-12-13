#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationInfo;
class ActorSkeletalAnimationPtr;
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
    ::ll::UntypedStorage<8, 8>  mUnkcc69e4;
    ::ll::UntypedStorage<8, 64> mUnk6df89c;
    ::ll::UntypedStorage<8, 80> mUnkc78eae;
    ::ll::UntypedStorage<8, 24> mUnk6b4a97;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationGroup& operator=(ActorAnimationGroup const&);
    ActorAnimationGroup(ActorAnimationGroup const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorAnimationGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ActorAnimationGroup();

    MCNAPI ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ActorAnimationGroupParseMetaData>>
    _buildAnimationFileSchema_v1_8(bool isPersonaPack);

    MCNAPI_C ::ActorSkeletalAnimationPtr getActorAnimation(::HashedString const& name);

    MCNAPI ::std::shared_ptr<::ActorAnimationInfo> getActorAnimationInfo(::HashedString const& name);

    MCNAPI void loadActorAnimation(
        ::std::string const&      fileData,
        ::Core::Path const&       filenameWithExtension,
        ::PackStats&              stats,
        ::MinEngineVersion const& minEngineVersion,
        ::CurrentCmdVersion       packCommandVersion,
        bool                      isPersonaPack,
        ::std::string const&      personaPieceId
    );

    MCNAPI_C void loadActorAnimationsAsync(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager
    );

    MCNAPI void loadActorAnimationsSync(::ResourcePackManager& resourcePackManager);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
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
