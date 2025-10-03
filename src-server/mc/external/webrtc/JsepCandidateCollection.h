#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceCandidateCollection.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class JsepIceCandidate; }
// clang-format on

namespace webrtc {

class JsepCandidateCollection : public ::webrtc::IceCandidateCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5c3fe1;
    // NOLINTEND

public:
    // prevent constructor by default
    JsepCandidateCollection& operator=(JsepCandidateCollection const&);
    JsepCandidateCollection(JsepCandidateCollection const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual uint64 count() const /*override*/;

    // vIndex: 2
    virtual bool HasCandidate(::webrtc::IceCandidateInterface const* candidate) const /*override*/;

    // vIndex: 4
    virtual void add(::webrtc::JsepIceCandidate* candidate);

    // vIndex: 3
    virtual ::webrtc::IceCandidateInterface const* at(uint64 index) const /*override*/;

    // vIndex: 0
    virtual ~JsepCandidateCollection() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::JsepCandidateCollection Clone() const;

    MCNAPI JsepCandidateCollection();

    MCNAPI JsepCandidateCollection(::webrtc::JsepCandidateCollection&& o);

    MCNAPI uint64 remove(::cricket::Candidate const& candidate);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::JsepCandidateCollection&& o);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $count() const;

    MCNAPI bool $HasCandidate(::webrtc::IceCandidateInterface const* candidate) const;

    MCNAPI void $add(::webrtc::JsepIceCandidate* candidate);

    MCNAPI ::webrtc::IceCandidateInterface const* $at(uint64 index) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
