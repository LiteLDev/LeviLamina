#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace CameraAimAssist {

class PriorityPreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk6002d4;
    ::ll::UntypedStorage<8, 48> mUnk5f4ca9;
    ::ll::UntypedStorage<8, 64> mUnk1d6179;
    ::ll::UntypedStorage<8, 64> mUnk8e40ff;
    ::ll::UntypedStorage<8, 64> mUnk115493;
    ::ll::UntypedStorage<8, 48> mUnkaf34d6;
    ::ll::UntypedStorage<8, 48> mUnk5b8aee;
    // NOLINTEND

public:
    // prevent constructor by default
    PriorityPreset& operator=(PriorityPreset const&);
    PriorityPreset(PriorityPreset const&);
    PriorityPreset();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PriorityPreset(
        ::HashedString const&                                       id,
        ::HashedString const&                                       priorityCategoryListId,
        ::std::unordered_set<::HashedString> const&                 blockExclusionList,
        ::std::unordered_set<::HashedString> const&                 liquidTargetingItemsList,
        ::std::unordered_map<::HashedString, ::HashedString> const& itemCategoryIdTable,
        ::HashedString const&                                       handCategory,
        ::HashedString const&                                       defaultCategory
    );

    MCAPI ~PriorityPreset();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::CameraAimAssist::PriorityPreset const& EMPTY_PRESET();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::HashedString const&                                       id,
        ::HashedString const&                                       priorityCategoryListId,
        ::std::unordered_set<::HashedString> const&                 blockExclusionList,
        ::std::unordered_set<::HashedString> const&                 liquidTargetingItemsList,
        ::std::unordered_map<::HashedString, ::HashedString> const& itemCategoryIdTable,
        ::HashedString const&                                       handCategory,
        ::HashedString const&                                       defaultCategory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace CameraAimAssist
