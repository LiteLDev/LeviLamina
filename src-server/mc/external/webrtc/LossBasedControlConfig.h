#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

struct LossBasedControlConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkf699da;
    ::ll::UntypedStorage<8, 80> mUnkb1b434;
    ::ll::UntypedStorage<8, 80> mUnk52eedc;
    ::ll::UntypedStorage<8, 80> mUnke91eb4;
    ::ll::UntypedStorage<8, 80> mUnk4e6e80;
    ::ll::UntypedStorage<8, 80> mUnke667f4;
    ::ll::UntypedStorage<8, 80> mUnkf904e8;
    ::ll::UntypedStorage<8, 80> mUnkdb7dff;
    ::ll::UntypedStorage<8, 80> mUnk48662f;
    ::ll::UntypedStorage<8, 80> mUnk99ba8c;
    ::ll::UntypedStorage<8, 80> mUnk84c634;
    ::ll::UntypedStorage<8, 80> mUnk2f8f48;
    ::ll::UntypedStorage<8, 80> mUnk71f42e;
    ::ll::UntypedStorage<8, 80> mUnkbb49b3;
    ::ll::UntypedStorage<8, 80> mUnkcdbbd3;
    ::ll::UntypedStorage<8, 80> mUnk608bc5;
    ::ll::UntypedStorage<8, 80> mUnk48032d;
    // NOLINTEND

public:
    // prevent constructor by default
    LossBasedControlConfig& operator=(LossBasedControlConfig const&);
    LossBasedControlConfig(LossBasedControlConfig const&);
    LossBasedControlConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LossBasedControlConfig(::webrtc::FieldTrialsView const* key_value_config);

    MCNAPI ~LossBasedControlConfig();
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

} // namespace webrtc
