#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/IceCandidateCollection.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace webrtc { class IceCandidateCollection; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class JsepIceCandidate; }
// clang-format on

namespace webrtc {

class JsepCandidateCollection : public ::webrtc::IceCandidateCollection {
public:
    // prevent constructor by default
    JsepCandidateCollection& operator=(JsepCandidateCollection const&);
    JsepCandidateCollection(JsepCandidateCollection const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1JsepCandidateCollection@webrtc@@UEAA@XZ
    virtual ~JsepCandidateCollection();

    // vIndex: 1, symbol: ?count@JsepCandidateCollection@webrtc@@UEBA_KXZ
    virtual uint64 count() const;

    // vIndex: 2, symbol: ?HasCandidate@JsepCandidateCollection@webrtc@@UEBA_NPEBVIceCandidateInterface@2@@Z
    virtual bool HasCandidate(class webrtc::IceCandidateInterface const*) const;

    // vIndex: 3, symbol: ?at@JsepCandidateCollection@webrtc@@UEBAPEBVIceCandidateInterface@2@_K@Z
    virtual class webrtc::IceCandidateInterface const* at(uint64) const;

    // vIndex: 4, symbol: ?add@JsepCandidateCollection@webrtc@@UEAAXPEAVJsepIceCandidate@2@@Z
    virtual void add(class webrtc::JsepIceCandidate*);

    // symbol: ?Clone@JsepCandidateCollection@webrtc@@QEBA?AV12@XZ
    MCAPI class webrtc::JsepCandidateCollection Clone() const;

    // symbol: ??0JsepCandidateCollection@webrtc@@QEAA@XZ
    MCAPI JsepCandidateCollection();

    // symbol: ??0JsepCandidateCollection@webrtc@@QEAA@$$QEAV01@@Z
    MCAPI JsepCandidateCollection(class webrtc::JsepCandidateCollection&&);

    // symbol: ?remove@JsepCandidateCollection@webrtc@@QEAA_KAEBVCandidate@cricket@@@Z
    MCAPI uint64 remove(class cricket::Candidate const&);

    // NOLINTEND
};

}; // namespace webrtc
