#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace webrtc { class AsyncDnsResolverInterface; }
// clang-format on

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
        ::ll::UntypedStorage<8, 8> mUnk85d849;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        CandidateAndResolver& operator=(CandidateAndResolver const&);
        CandidateAndResolver(CandidateAndResolver const&);
        CandidateAndResolver();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI CandidateAndResolver(::cricket::Candidate const& candidate, ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>&& resolver);
    
        MCNAPI ~CandidateAndResolver();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::cricket::Candidate const& candidate, ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>&& resolver);
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
};

}
