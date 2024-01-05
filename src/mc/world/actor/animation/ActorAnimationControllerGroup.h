#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/enums/CurrentCmdVersion.h"

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
    // vIndex: 0, symbol: __gen_??1ActorAnimationControllerGroup@@UEAA@XZ
    virtual ~ActorAnimationControllerGroup() = default;

    // symbol: ??0ActorAnimationControllerGroup@@QEAA@XZ
    MCAPI ActorAnimationControllerGroup();

    // symbol:
    // ?getActorAnimationController@ActorAnimationControllerGroup@@QEAA?AVActorAnimationControllerPtr@@AEBVHashedString@@@Z
    MCAPI class ActorAnimationControllerPtr getActorAnimationController(class HashedString const& name);

    // symbol:
    // ?getActorAnimationControllerInfo@ActorAnimationControllerGroup@@QEAA?AV?$shared_ptr@VActorAnimationControllerInfo@@@std@@AEBVHashedString@@@Z
    MCAPI std::shared_ptr<class ActorAnimationControllerInfo>
          getActorAnimationControllerInfo(class HashedString const& name);

    // symbol: ?loadActorAnimationControllersSync@ActorAnimationControllerGroup@@QEAAXAEAVResourcePackManager@@@Z
    MCAPI void loadActorAnimationControllersSync(class ResourcePackManager& resourcePackManager);

    // symbol: ?loadFormatVersion@ActorAnimationControllerGroup@@SA_NAEBVValue@Json@@AEAVSemVersion@@@Z
    MCAPI static bool loadFormatVersion(class Json::Value const& root, class SemVersion& version);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_loadActorAnimationController@ActorAnimationControllerGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@AEBVSemVersion@@W4CurrentCmdVersion@@@Z
    MCAPI void _loadActorAnimationController(
        std::string const&,
        class Core::Path const&,
        class SemVersion const&,
        ::CurrentCmdVersion
    );

    // symbol:
    // ?_buildAnimationControllerFileSchema_v1_10_Or_Later@ActorAnimationControllerGroup@@CA?AV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UActorAnimationControllerGroupParseMetaData@@@JsonUtil@@@std@@AEBVSemVersion@@@Z
    MCAPI static std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
        class JsonUtil::EmptyClass,
        struct ActorAnimationControllerGroupParseMetaData>>
    _buildAnimationControllerFileSchema_v1_10_Or_Later(class SemVersion const& version);

    // symbol:
    // ?_buildAnimationControllerFileSchema_v1_8@ActorAnimationControllerGroup@@CA?AV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@_N@JsonUtil@@@std@@XZ
    MCAPI static std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, bool>>
    _buildAnimationControllerFileSchema_v1_8();

    // symbol: ?upgrade_v1_8_to_v1_10@ActorAnimationControllerGroup@@CA_NAEAVValue@Json@@AEBVSemVersion@@@Z
    MCAPI static bool upgrade_v1_8_to_v1_10(class Json::Value& root, class SemVersion const& engineVersion);

    // NOLINTEND
};
