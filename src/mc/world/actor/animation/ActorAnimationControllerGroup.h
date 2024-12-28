#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerInfo;
class ActorAnimationControllerPtr;
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
    ::ll::UntypedStorage<8, 8>  mUnk105d01;
    ::ll::UntypedStorage<8, 80> mUnk820f1e;
    ::ll::UntypedStorage<8, 64> mUnkef9672;
    ::ll::UntypedStorage<8, 24> mUnk89a8cf;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerGroup& operator=(ActorAnimationControllerGroup const&);
    ActorAnimationControllerGroup(ActorAnimationControllerGroup const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorAnimationControllerGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorAnimationControllerGroup();

    MCAPI void _loadActorAnimationController(
        ::std::string const&      fileData,
        ::Core::Path const&       filenameWithExtension,
        ::MinEngineVersion const& minEngineVersion,
        ::CurrentCmdVersion       packCommandVersion
    );

    MCAPI ::ActorAnimationControllerPtr getActorAnimationController(::HashedString const& name);

    MCAPI ::std::shared_ptr<::ActorAnimationControllerInfo> getActorAnimationControllerInfo(::HashedString const& name);

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
    MCAPI void* $ctor();
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
