#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

struct ProbeControllerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkff4877;
    ::ll::UntypedStorage<8, 88> mUnkab6984;
    ::ll::UntypedStorage<8, 80> mUnk53a2ec;
    ::ll::UntypedStorage<8, 80> mUnk6e0278;
    ::ll::UntypedStorage<8, 80> mUnkb19782;
    ::ll::UntypedStorage<8, 80> mUnk84caf7;
    ::ll::UntypedStorage<8, 80> mUnk1233e1;
    ::ll::UntypedStorage<8, 80> mUnkb49030;
    ::ll::UntypedStorage<8, 80> mUnk38cd3e;
    ::ll::UntypedStorage<8, 80> mUnkc64635;
    ::ll::UntypedStorage<8, 80> mUnke13f22;
    ::ll::UntypedStorage<8, 80> mUnkf48ce0;
    ::ll::UntypedStorage<8, 80> mUnkd05ad5;
    ::ll::UntypedStorage<8, 88> mUnkd1e689;
    ::ll::UntypedStorage<8, 88> mUnk7d0dab;
    ::ll::UntypedStorage<8, 88> mUnke5ac90;
    ::ll::UntypedStorage<8, 80> mUnk7160a8;
    ::ll::UntypedStorage<8, 80> mUnk9e9563;
    ::ll::UntypedStorage<8, 80> mUnk5174b8;
    ::ll::UntypedStorage<8, 80> mUnk587fb1;
    // NOLINTEND

public:
    // prevent constructor by default
    ProbeControllerConfig& operator=(ProbeControllerConfig const&);
    ProbeControllerConfig(ProbeControllerConfig const&);
    ProbeControllerConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ProbeControllerConfig(::webrtc::FieldTrialsView const* key_value_config);

    MCNAPI ~ProbeControllerConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
