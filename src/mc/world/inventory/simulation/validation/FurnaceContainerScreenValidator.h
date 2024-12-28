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
        ::ll::UntypedStorage<4, 4> mUnkb3b7d1;
        // NOLINTEND

    public:
        // prevent constructor by default
        ExperienceRewards& operator=(ExperienceRewards const&);
        ExperienceRewards(ExperienceRewards const&);
        ExperienceRewards();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5b666c;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceContainerScreenValidator& operator=(FurnaceContainerScreenValidator const&);
    FurnaceContainerScreenValidator(FurnaceContainerScreenValidator const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::shared_ptr<::ContainerValidationCommitObject> postCommitItemRemoved(
        ::ContainerEnumName const containerEnumName,
        int const                 slot,
        ::ItemStack const&        item
    ) /*override*/;

    // vIndex: 0
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
