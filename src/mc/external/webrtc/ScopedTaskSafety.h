#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PendingTaskSafetyFlag; }
// clang-format on

namespace webrtc {

class ScopedTaskSafety {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk88e63c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedTaskSafety& operator=(ScopedTaskSafety const&);
    ScopedTaskSafety(ScopedTaskSafety const&);
    ScopedTaskSafety();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> flag() const;

    MCAPI void reset(::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag>);

    MCAPI ~ScopedTaskSafety();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
