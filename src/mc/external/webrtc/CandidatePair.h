#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/CandidatePairInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Candidate; }
// clang-format on

namespace webrtc {

struct CandidatePair : public ::webrtc::CandidatePairInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 528> mUnk854129;
    ::ll::UntypedStorage<8, 528> mUnk903c5f;
    // NOLINTEND

public:
    // prevent constructor by default
    CandidatePair& operator=(CandidatePair const&);
    CandidatePair(CandidatePair const&);
    CandidatePair();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CandidatePair() /*override*/;

    virtual ::webrtc::Candidate const& local_candidate() const /*override*/;

    virtual ::webrtc::Candidate const& remote_candidate() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::Candidate const& $local_candidate() const;

    MCNAPI ::webrtc::Candidate const& $remote_candidate() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
