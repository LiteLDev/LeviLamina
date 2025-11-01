#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerValidationCommitObject;
class ItemInstance;
struct AllowedAnywhereConsume;
struct ExpectedAnywhereConsume;
struct ExpectedSlotConsume;
// clang-format on

struct ContainerValidationCraftResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>            mResults;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedSlotConsume>>     mExpectedSlotConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedAnywhereConsume>> mExpectedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::AllowedAnywhereConsume>>  mAllowedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ContainerValidationCommitObject>>> mCommitObjects;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerValidationCraftResult& operator=(ContainerValidationCraftResult const&);
    ContainerValidationCraftResult(ContainerValidationCraftResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerValidationCraftResult();

    MCNAPI ContainerValidationCraftResult(::ContainerValidationCraftResult&&);

    MCNAPI ~ContainerValidationCraftResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ContainerValidationCraftResult&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
