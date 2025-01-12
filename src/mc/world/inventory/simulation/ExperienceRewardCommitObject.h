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
    // vIndex: 0
    virtual ~ExperienceRewardCommitObject() /*override*/ = default;

    // vIndex: 1
    virtual bool append(::ContainerValidationCommitObject* other) /*override*/;

    // vIndex: 2
    virtual bool canCommit(::ContainerScreenContext const&) const /*override*/;

    // vIndex: 3
    virtual void commit(::ContainerScreenContext const& screenContext) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $append(::ContainerValidationCommitObject* other);

    MCFOLD bool $canCommit(::ContainerScreenContext const&) const;

    MCAPI void $commit(::ContainerScreenContext const& screenContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
