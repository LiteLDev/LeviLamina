#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::internal { class WeakReference; }
// clang-format on

namespace webrtc::internal {

class WeakReferenceOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkae4ae2;
    // NOLINTEND

public:
    // prevent constructor by default
    WeakReferenceOwner& operator=(WeakReferenceOwner const&);
    WeakReferenceOwner(WeakReferenceOwner const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::internal::WeakReference GetRef() const;

    MCNAPI void Invalidate();

    MCNAPI WeakReferenceOwner();

    MCNAPI ~WeakReferenceOwner();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::internal
