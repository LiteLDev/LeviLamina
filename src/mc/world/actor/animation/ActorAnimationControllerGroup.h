#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ActorAnimationControllerGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ActorAnimationControllerGroup& operator=(ActorAnimationControllerGroup const&);
    ActorAnimationControllerGroup(ActorAnimationControllerGroup const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorAnimationControllerGroup() = default;

    MCAPI ActorAnimationControllerGroup();

    MCAPI class ActorAnimationControllerPtr getActorAnimationController(class HashedString const& name);

    MCAPI std::shared_ptr<class ActorAnimationControllerInfo>
          getActorAnimationControllerInfo(class HashedString const& name);

    MCAPI void loadActorAnimationControllersSync(class ResourcePackManager& resourcePackManager);

    MCAPI static bool loadFormatVersion(class Json::Value const& root, class SemVersion& version);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _loadActorAnimationController(
        std::string const&      fileData,
        class Core::Path const& filenameWithExtension,
        class SemVersion const& engineVersion,
        ::CurrentCmdVersion     packCommandVersion
    );

    MCAPI static std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
        class JsonUtil::EmptyClass,
        struct ActorAnimationControllerGroupParseMetaData>>
    _buildAnimationControllerFileSchema_v1_10_Or_Later(class SemVersion const& version);

    MCAPI static std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, bool>>
    _buildAnimationControllerFileSchema_v1_8();

    MCAPI static bool upgrade_v1_8_to_v1_10(class Json::Value& root, class SemVersion const& engineVersion);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
