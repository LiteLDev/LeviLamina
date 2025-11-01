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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk32ee7f;
    ::ll::UntypedStorage<8, 8> mUnkb99ec4;
    ::ll::UntypedStorage<8, 8> mUnkfed2cb;
    ::ll::UntypedStorage<8, 8> mUnk948798;
    ::ll::UntypedStorage<8, 8> mUnk9375c1;
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentFactory& operator=(EnvironmentFactory const&);
    EnvironmentFactory(EnvironmentFactory const&);
    EnvironmentFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::Environment Create() const;

    MCNAPI ::webrtc::Environment CreateWithDefaults();

    MCNAPI explicit EnvironmentFactory(::webrtc::Environment const& env);

    MCNAPI void Set(::std::unique_ptr<::webrtc::RtcEventLog> utility);

    MCNAPI void Set(::std::unique_ptr<::webrtc::TaskQueueFactory> utility);

    MCNAPI void Set(::std::unique_ptr<::webrtc::FieldTrialsView const> utility);

    MCNAPI ~EnvironmentFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Environment const& env);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
