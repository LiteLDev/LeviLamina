#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc::internal { class WeakReference; }
// clang-format on

namespace rtc::internal {

class WeakReferenceOwner {
public:
    // prevent constructor by default
    WeakReferenceOwner& operator=(WeakReferenceOwner const&);
    WeakReferenceOwner(WeakReferenceOwner const&);

public:
    // NOLINTBEGIN
    // symbol: ?GetRef@WeakReferenceOwner@internal@rtc@@QEBA?AVWeakReference@23@XZ
    MCAPI class rtc::internal::WeakReference GetRef() const;

    // symbol: ?Invalidate@WeakReferenceOwner@internal@rtc@@QEAAXXZ
    MCAPI void Invalidate();

    // symbol: ??0WeakReferenceOwner@internal@rtc@@QEAA@XZ
    MCAPI WeakReferenceOwner();

    // symbol: ??1WeakReferenceOwner@internal@rtc@@QEAA@XZ
    MCAPI ~WeakReferenceOwner();

    // NOLINTEND
};

}; // namespace rtc::internal
