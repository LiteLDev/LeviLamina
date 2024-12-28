#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc::internal { class WeakReference; }
// clang-format on

namespace rtc::internal {

class WeakReferenceOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb3df06;
    // NOLINTEND

public:
    // prevent constructor by default
    WeakReferenceOwner& operator=(WeakReferenceOwner const&);
    WeakReferenceOwner(WeakReferenceOwner const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::rtc::internal::WeakReference GetRef() const;

    MCAPI void Invalidate();

    MCAPI WeakReferenceOwner();

    MCAPI ~WeakReferenceOwner();
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
};

} // namespace rtc::internal
