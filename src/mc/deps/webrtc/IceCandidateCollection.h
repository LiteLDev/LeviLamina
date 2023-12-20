#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class JsepIceCandidate; }
// clang-format on

namespace webrtc {

class IceCandidateCollection {
public:
    // prevent constructor by default
    IceCandidateCollection& operator=(IceCandidateCollection const&);
    IceCandidateCollection(IceCandidateCollection const&);
    IceCandidateCollection();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IceCandidateCollection@webrtc@@UEAA@XZ
    virtual ~IceCandidateCollection() = default;

    // vIndex: 1, symbol: ?count@JsepCandidateCollection@webrtc@@UEBA_KXZ
    virtual uint64 count() const = 0;

    // vIndex: 2, symbol: ?HasCandidate@JsepCandidateCollection@webrtc@@UEBA_NPEBVIceCandidateInterface@2@@Z
    virtual bool HasCandidate(class webrtc::IceCandidateInterface const*) const = 0;

    // vIndex: 3, symbol: ?at@JsepCandidateCollection@webrtc@@UEBAPEBVIceCandidateInterface@2@_K@Z
    virtual class webrtc::IceCandidateInterface const* at(uint64) const = 0;

    // vIndex: 4, symbol: ?add@JsepCandidateCollection@webrtc@@UEAAXPEAVJsepIceCandidate@2@@Z
    virtual void add(class webrtc::JsepIceCandidate*);

    // NOLINTEND
};

}; // namespace webrtc
