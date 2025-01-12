#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Environment; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class TaskQueueFactory; }
// clang-format on

namespace webrtc {

class EnvironmentFactory {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::Environment Create() const;

    MCAPI ::webrtc::Environment CreateWithDefaults();

    MCAPI explicit EnvironmentFactory(::webrtc::Environment const&);

    MCAPI void Set(::std::unique_ptr<::webrtc::RtcEventLog>);

    MCAPI void Set(::std::unique_ptr<::webrtc::TaskQueueFactory>);

    MCAPI void Set(::std::unique_ptr<::webrtc::FieldTrialsView const>);

    MCAPI ~EnvironmentFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::Environment const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
