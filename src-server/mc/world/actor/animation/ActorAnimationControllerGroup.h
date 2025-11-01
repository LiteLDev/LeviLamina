#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerInfo;
class HashedString;
class MinEngineVersion;
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
    ::ll::UntypedStorage<8, 8> mUnk105d01;
    ::ll::UntypedStorage<8, 80> mUnk820f1e;
    ::ll::UntypedStorage<8, 64> mUnkef9672;
    ::ll::UntypedStorage<8, 24> mUnk89a8cf;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerGroup& operator=(ActorAnimationControllerGroup const&);
    ActorAnimationControllerGroup(ActorAnimationControllerGroup const&);
    ActorAnimationControllerGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorAnimationControllerGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _loadActorAnimationController(::std::string const& fileData, ::Core::Path const& filenameWithExtension, ::MinEngineVersion const& minEngineVersion, ::CurrentCmdVersion packCommandVersion);

    MCNAPI ::std::shared_ptr<::ActorAnimationControllerInfo> getActorAnimationControllerInfo(::HashedString const& name);

    MCNAPI void loadActorAnimationControllersSync(::ResourcePackManager& resourcePackManager);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ActorAnimationControllerGroupParseMetaData>> _buildAnimationControllerFileSchema_v1_10_Or_Later(::SemVersion const& version);

    MCNAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, bool>> _buildAnimationControllerFileSchema_v1_8();

    MCNAPI static bool loadFormatVersion(::Json::Value const& root, ::SemVersion& version);

    MCNAPI static bool upgrade_v1_8_to_v1_10(::Json::Value& root, ::MinEngineVersion const& minEngineVersion);
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
