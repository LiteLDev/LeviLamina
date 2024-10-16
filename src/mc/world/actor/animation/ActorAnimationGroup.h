#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/server/commands/CurrentCmdVersion.h"

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

    MCAPI void loadActorAnimation(
        std::string const&      fileData,
        class Core::Path const& filenameWithExtension,
        class PackStats&        stats,
        class SemVersion const& engineVersion,
        ::CurrentCmdVersion     packCommandVersion,
        bool                    isPersonaPack,
        std::string const&      personaPieceId
    );

    MCAPI void loadActorAnimationsSync(class ResourcePackManager& resourcePackManager);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
