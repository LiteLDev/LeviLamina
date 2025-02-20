#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationInfo;
class ActorSkeletalAnimationPtr;
class HashedString;
class MinEngineVersion;
class PackStats;
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
    ActorAnimationGroup();

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

    MCAPI ::ActorSkeletalAnimationPtr getActorAnimation(::HashedString const& name);

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
