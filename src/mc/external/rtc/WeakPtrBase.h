#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc::internal { class WeakReference; }
// clang-format on

namespace rtc::internal {

class WeakPtrBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk99bb00;
    // NOLINTEND

public:
    // prevent constructor by default
    WeakPtrBase& operator=(WeakPtrBase const&);
    WeakPtrBase(WeakPtrBase const&);
    WeakPtrBase();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WeakPtrBase(::rtc::internal::WeakReference const&);

    MCAPI ~WeakPtrBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::internal::WeakReference const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc::internal
