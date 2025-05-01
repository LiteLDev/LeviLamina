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
    MCNAPI ::webrtc::Environment Create() const;

    MCNAPI ::webrtc::Environment CreateWithDefaults();

    MCNAPI explicit EnvironmentFactory(::webrtc::Environment const&);

    MCNAPI void Set(::std::unique_ptr<::webrtc::RtcEventLog>);

    MCNAPI void Set(::std::unique_ptr<::webrtc::TaskQueueFactory>);

    MCNAPI void Set(::std::unique_ptr<::webrtc::FieldTrialsView const>);

    MCNAPI ~EnvironmentFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Environment const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
