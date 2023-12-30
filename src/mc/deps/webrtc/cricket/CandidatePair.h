#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/CandidatePairInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class CandidatePairInterface; }
// clang-format on

namespace cricket {

struct CandidatePair : public ::cricket::CandidatePairInterface {
public:
    // prevent constructor by default
    CandidatePair& operator=(CandidatePair const&);
    CandidatePair(CandidatePair const&);
    CandidatePair();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CandidatePair@cricket@@UEAA@XZ
    virtual ~CandidatePair();

    // vIndex: 1, symbol: ?local_candidate@CandidatePair@cricket@@UEBAAEBVCandidate@2@XZ
    virtual class cricket::Candidate const& local_candidate() const;

    // vIndex: 2, symbol: ?remote_candidate@CandidatePair@cricket@@UEBAAEBVCandidate@2@XZ
    virtual class cricket::Candidate const& remote_candidate() const;

    // NOLINTEND
};

}; // namespace cricket
