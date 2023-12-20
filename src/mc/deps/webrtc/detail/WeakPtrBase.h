#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc::internal { class WeakReference; }
// clang-format on

namespace rtc::internal {

class WeakPtrBase {
public:
    // prevent constructor by default
    WeakPtrBase& operator=(WeakPtrBase const&);
    WeakPtrBase(WeakPtrBase const&);
    WeakPtrBase();

public:
    // NOLINTBEGIN
    // symbol: ??1WeakPtrBase@internal@rtc@@QEAA@XZ
    MCAPI ~WeakPtrBase();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0WeakPtrBase@internal@rtc@@IEAA@AEBVWeakReference@12@@Z
    MCAPI explicit WeakPtrBase(class rtc::internal::WeakReference const&);

    // NOLINTEND
};

}; // namespace rtc::internal
