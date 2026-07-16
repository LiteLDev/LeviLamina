#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::internal { class WeakReference; }
// clang-format on

namespace webrtc::internal {

class WeakPtrBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6d98ed;
    // NOLINTEND

public:
    // prevent constructor by default
    WeakPtrBase& operator=(WeakPtrBase const&);
    WeakPtrBase(WeakPtrBase const&);
    WeakPtrBase();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WeakPtrBase(::webrtc::internal::WeakReference const& ref);

    MCNAPI ~WeakPtrBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::internal::WeakReference const& ref);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::internal
