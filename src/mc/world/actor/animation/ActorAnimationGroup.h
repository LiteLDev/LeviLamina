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
    // vIndex: 0
    virtual ~ActorAnimationGroup() = default;

    MCAPI ActorAnimationGroup();

    MCAPI class ActorSkeletalAnimationPtr getActorAnimation(class HashedString const& name);

    MCAPI std::shared_ptr<class ActorAnimationInfo> getActorAnimationInfo(class HashedString const& name);

    MCAPI void
    loadActorAnimation(std::string const&, class Core::Path const&, class PackStats&, class SemVersion const&, ::CurrentCmdVersion, bool, std::string const&);

    MCAPI void loadActorAnimationsSync(class ResourcePackManager& resourcePackManager);

    // NOLINTEND
};
