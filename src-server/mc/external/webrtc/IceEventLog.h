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
    MCNAPI void DumpCandidatePairDescriptionToMemoryAsConfigEvents() const;

    MCNAPI IceEventLog();

    MCNAPI void LogCandidatePairConfig(
        ::webrtc::IceCandidatePairConfigType         type,
        uint                                         candidate_pair_id,
        ::webrtc::IceCandidatePairDescription const& candidate_pair_desc
    );

    MCNAPI void
    LogCandidatePairEvent(::webrtc::IceCandidatePairEventType type, uint candidate_pair_id, uint transaction_id);

    MCNAPI ~IceEventLog();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
