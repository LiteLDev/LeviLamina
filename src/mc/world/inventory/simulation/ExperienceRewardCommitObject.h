#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCommitObject.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
// clang-format on

class ExperienceRewardCommitObject : public ::ContainerValidationCommitObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7b9635;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceRewardCommitObject& operator=(ExperienceRewardCommitObject const&);
    ExperienceRewardCommitObject(ExperienceRewardCommitObject const&);
    ExperienceRewardCommitObject();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExperienceRewardCommitObject() /*override*/ = default;

    virtual bool append(::ContainerValidationCommitObject* other) /*override*/;

    virtual bool canCommit(::ContainerScreenContext const&) const /*override*/;

    virtual void commit(::ContainerScreenContext const& screenContext) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $append(::ContainerValidationCommitObject* other);

    MCNAPI bool $canCommit(::ContainerScreenContext const&) const;

    MCNAPI void $commit(::ContainerScreenContext const& screenContext);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
