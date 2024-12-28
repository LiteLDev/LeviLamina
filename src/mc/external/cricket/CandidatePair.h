#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/CandidatePairInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
// clang-format on

namespace cricket {

struct CandidatePair : public ::cricket::CandidatePairInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 528> mUnkd4f801;
    ::ll::UntypedStorage<8, 528> mUnk7c54a6;
    // NOLINTEND

public:
    // prevent constructor by default
    CandidatePair& operator=(CandidatePair const&);
    CandidatePair(CandidatePair const&);
    CandidatePair();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CandidatePair() /*override*/;

    // vIndex: 1
    virtual ::cricket::Candidate const& local_candidate() const /*override*/;

    // vIndex: 2
    virtual ::cricket::Candidate const& remote_candidate() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::cricket::Candidate const& $local_candidate() const;

    MCAPI ::cricket::Candidate const& $remote_candidate() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
