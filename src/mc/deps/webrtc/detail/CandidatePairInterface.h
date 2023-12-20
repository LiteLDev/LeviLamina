#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
// clang-format on

namespace cricket {

class CandidatePairInterface {
public:
    // prevent constructor by default
    CandidatePairInterface& operator=(CandidatePairInterface const&);
    CandidatePairInterface(CandidatePairInterface const&);
    CandidatePairInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CandidatePairInterface@cricket@@UEAA@XZ
    virtual ~CandidatePairInterface();

    // vIndex: 1, symbol: ?local_candidate@CandidatePair@cricket@@UEBAAEBVCandidate@2@XZ
    virtual class cricket::Candidate const& local_candidate() const = 0;

    // vIndex: 2, symbol: ?remote_candidate@CandidatePair@cricket@@UEBAAEBVCandidate@2@XZ
    virtual class cricket::Candidate const& remote_candidate() const = 0;

    // NOLINTEND
};

}; // namespace cricket
