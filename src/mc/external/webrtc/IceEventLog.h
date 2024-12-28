#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceCandidatePairConfigType.h"
#include "mc/external/webrtc/IceCandidatePairEventType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidatePairDescription; }
// clang-format on

namespace webrtc {

class IceEventLog {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf90fb9;
    ::ll::UntypedStorage<8, 64> mUnkc90218;
    // NOLINTEND

public:
    // prevent constructor by default
    IceEventLog& operator=(IceEventLog const&);
    IceEventLog(IceEventLog const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void DumpCandidatePairDescriptionToMemoryAsConfigEvents() const;

    MCAPI IceEventLog();

    MCAPI void
    LogCandidatePairConfig(::webrtc::IceCandidatePairConfigType, uint, ::webrtc::IceCandidatePairDescription const&);

    MCAPI void LogCandidatePairEvent(::webrtc::IceCandidatePairEventType, uint, uint);

    MCAPI ~IceEventLog();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
