#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct P2PTransportChannel {
public:
    // P2PTransportChannel inner types declare
    // clang-format off
    struct CandidateAndResolver;
    // clang-format on

    // P2PTransportChannel inner types define
    struct CandidateAndResolver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 528> mUnk75bb08;
        ::ll::UntypedStorage<8, 8>   mUnk85d849;
        // NOLINTEND

    public:
        // prevent constructor by default
        CandidateAndResolver& operator=(CandidateAndResolver const&);
        CandidateAndResolver(CandidateAndResolver const&);
        CandidateAndResolver();
    };
};

} // namespace cricket
