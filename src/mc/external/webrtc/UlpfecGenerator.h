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
        // prevent constructor by default
        Params& operator=(Params const&);
        Params(Params const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Params();

        MCAPI Params(::webrtc::FecProtectionParams, ::webrtc::FecProtectionParams);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();

        MCAPI void* $ctor(::webrtc::FecProtectionParams, ::webrtc::FecProtectionParams);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    UlpfecGenerator& operator=(UlpfecGenerator const&);
    UlpfecGenerator(UlpfecGenerator const&);
    UlpfecGenerator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::FecProtectionParams const& CurrentParams() const;

    MCAPI bool ExcessOverheadBelowMax() const;

    MCAPI bool MinimumMediaPacketsReached() const;

    MCAPI int Overhead() const;

    MCAPI void ResetState();

    MCAPI UlpfecGenerator(::std::unique_ptr<::webrtc::ForwardErrorCorrection>, ::webrtc::Clock*);

    MCAPI UlpfecGenerator(int, int, ::webrtc::Clock*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::webrtc::ForwardErrorCorrection>, ::webrtc::Clock*);

    MCAPI void* $ctor(int, int, ::webrtc::Clock*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
