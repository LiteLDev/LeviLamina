#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
// clang-format on

class ActorAnimationGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ActorAnimationGroup& operator=(ActorAnimationGroup const&);
    ActorAnimationGroup(ActorAnimationGroup const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorAnimationGroup@@UEAA@XZ
    virtual ~ActorAnimationGroup() = default;

    // symbol: ??0ActorAnimationGroup@@QEAA@XZ
    MCAPI ActorAnimationGroup();

    // symbol: ?getActorAnimation@ActorAnimationGroup@@QEAA?AVActorSkeletalAnimationPtr@@AEBVHashedString@@@Z
    MCAPI class ActorSkeletalAnimationPtr getActorAnimation(class HashedString const& name);

    // symbol:
    // ?getActorAnimationInfo@ActorAnimationGroup@@QEAA?AV?$shared_ptr@VActorAnimationInfo@@@std@@AEBVHashedString@@@Z
    MCAPI std::shared_ptr<class ActorAnimationInfo> getActorAnimationInfo(class HashedString const& name);

    // symbol:
    // ?loadActorAnimation@ActorAnimationGroup@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@AEAVPackStats@@AEBVSemVersion@@W4CurrentCmdVersion@@_N0@Z
    MCAPI void
    loadActorAnimation(std::string const&, class Core::Path const&, class PackStats&, class SemVersion const&, ::CurrentCmdVersion, bool, std::string const&);

    // symbol: ?loadActorAnimationsSync@ActorAnimationGroup@@QEAAXAEAVResourcePackManager@@@Z
    MCAPI void loadActorAnimationsSync(class ResourcePackManager& resourcePackManager);

    // NOLINTEND
};
