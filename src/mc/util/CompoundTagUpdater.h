#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class CompoundTagEditHelper;
// clang-format on

class CompoundTagUpdater {
public:
    // CompoundTagUpdater inner types declare
    // clang-format off
    struct Node;
    // clang-format on

    // CompoundTagUpdater inner types define
    struct Node {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::function<bool(::CompoundTagEditHelper&)>>> mFilters;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(::CompoundTagEditHelper&)>>> mUpdates;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CompoundTagUpdater::Node>>>   mChildren;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                        mVersion;
    ::ll::TypedStorage<8, 72, ::CompoundTagUpdater::Node> mHead;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _update(::CompoundTagUpdater::Node const& node, ::CompoundTag& tag) const;
    // NOLINTEND
};
