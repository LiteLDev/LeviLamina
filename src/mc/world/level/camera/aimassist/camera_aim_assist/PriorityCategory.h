#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace CameraAimAssist {

class PriorityCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkd667eb;
    ::ll::UntypedStorage<4, 4>  mUnka75f28;
    ::ll::UntypedStorage<4, 4>  mUnkdc7df4;
    ::ll::UntypedStorage<8, 64> mUnk744b9a;
    ::ll::UntypedStorage<8, 64> mUnkc8f11d;
    // NOLINTEND

public:
    // prevent constructor by default
    PriorityCategory& operator=(PriorityCategory const&);
    PriorityCategory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C PriorityCategory(::CameraAimAssist::PriorityCategory const&);

    MCNAPI PriorityCategory(
        ::HashedString const&                            id,
        int                                              defaultBlockPriority,
        ::std::unordered_map<::HashedString, int> const& blockPriority,
        int                                              defaultEntityPriority,
        ::std::unordered_map<::HashedString, int> const& entityPriority
    );

    MCNAPI_C ::CameraAimAssist::PriorityCategory& operator=(::CameraAimAssist::PriorityCategory&&);

    MCNAPI_C ~PriorityCategory();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::CameraAimAssist::PriorityCategory const& NO_PRIORITY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::CameraAimAssist::PriorityCategory const&);

    MCNAPI void* $ctor(
        ::HashedString const&                            id,
        int                                              defaultBlockPriority,
        ::std::unordered_map<::HashedString, int> const& blockPriority,
        int                                              defaultEntityPriority,
        ::std::unordered_map<::HashedString, int> const& entityPriority
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace CameraAimAssist
