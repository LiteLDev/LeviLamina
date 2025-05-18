#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class ForwardErrorCorrection; }
namespace webrtc { struct FecProtectionParams; }
// clang-format on

namespace webrtc {

class UlpfecGenerator {
public:
    // UlpfecGenerator inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // UlpfecGenerator inner types define
    struct Params {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Params();

        MCNAPI Params(::webrtc::FecProtectionParams, ::webrtc::FecProtectionParams);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();

        MCNAPI void* $ctor(::webrtc::FecProtectionParams, ::webrtc::FecProtectionParams);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    UlpfecGenerator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::FecProtectionParams const& CurrentParams() const;

    MCNAPI bool ExcessOverheadBelowMax() const;

    MCNAPI bool MinimumMediaPacketsReached() const;

    MCNAPI int Overhead() const;

    MCNAPI void ResetState();

    MCNAPI UlpfecGenerator(::std::unique_ptr<::webrtc::ForwardErrorCorrection>, ::webrtc::Clock*);

    MCNAPI UlpfecGenerator(int, int, ::webrtc::Clock*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::webrtc::ForwardErrorCorrection>, ::webrtc::Clock*);

    MCNAPI void* $ctor(int, int, ::webrtc::Clock*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
