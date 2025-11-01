#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerValidationCommitObject;
class ItemStack;
class SimpleSparseContainer;
struct AllowedAnywhereConsume;
struct ExpectedAnywhereConsume;
struct ExpectedSlotConsume;
// clang-format on

struct ContainerValidationLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SimpleSparseContainer>>> mContainers;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ItemStack, bool>>> mDropItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedSlotConsume>> mExpectedSlotConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedAnywhereConsume>> mExpectedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::AllowedAnywhereConsume>> mAllowedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ContainerValidationCommitObject>>> mCommitObjects;
    // NOLINTEND

};
