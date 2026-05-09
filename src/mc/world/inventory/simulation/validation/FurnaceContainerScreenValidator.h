#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

// auto generated forward declare list
// clang-format off
class ContainerValidationCommitObject;
class ItemStack;
// clang-format on

class FurnaceContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // FurnaceContainerScreenValidator inner types declare
    // clang-format off
    struct ExperienceRewards;
    // clang-format on

    // FurnaceContainerScreenValidator inner types define
    struct ExperienceRewards {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mLastItemRemovedExperienceReward;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FurnaceContainerScreenValidator::ExperienceRewards>>
        mExperienceRewards;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::ContainerValidationCommitObject> postCommitItemRemoved(
        ::ContainerEnumName const containerEnumName,
        int const                 slot,
        ::ItemStack const&        item
    ) /*override*/;

    virtual ~FurnaceContainerScreenValidator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FurnaceContainerScreenValidator();
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ContainerValidationCommitObject>
    $postCommitItemRemoved(::ContainerEnumName const containerEnumName, int const slot, ::ItemStack const& item);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
