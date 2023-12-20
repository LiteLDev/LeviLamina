#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StreamCollectionInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class StreamCollectionInterface; }
// clang-format on

namespace webrtc {

class StreamCollection : public ::webrtc::StreamCollectionInterface {
public:
    // prevent constructor by default
    StreamCollection& operator=(StreamCollection const&);
    StreamCollection(StreamCollection const&);
    StreamCollection();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?AddRef@MyCreateSessionDescriptionObserver@NetherNet@@UEBAXXZ
    virtual void AddRef() const;

    // vIndex: 1, symbol: ?Release@MyCreateSessionDescriptionObserver@NetherNet@@UEBA?AW4RefCountReleaseStatus@rtc@@XZ
    virtual ::rtc::RefCountReleaseStatus Release() const;

    // vIndex: 2, symbol: __gen_??1StreamCollection@webrtc@@UEAA@XZ
    virtual ~StreamCollection() = default;

    // vIndex: 3, symbol:
    // ?OnSuccess@ImplicitCreateSessionDescriptionObserver@SdpOfferAnswerHandler@webrtc@@UEAAXPEAVSessionDescriptionInterface@3@@Z
    virtual void OnSuccess(class webrtc::SessionDescriptionInterface*);

    // symbol:
    // ?FindAudioTrack@StreamCollection@webrtc@@UEAAPEAVMediaStreamTrackInterface@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class webrtc::MediaStreamTrackInterface* FindAudioTrack(std::string const&);

    // symbol:
    // ?FindVideoTrack@StreamCollection@webrtc@@UEAAPEAVMediaStreamTrackInterface@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class webrtc::MediaStreamTrackInterface* FindVideoTrack(std::string const&);

    // symbol: ?at@StreamCollection@webrtc@@UEAAPEAVMediaStreamInterface@2@_K@Z
    MCVAPI class webrtc::MediaStreamInterface* at(uint64);

    // symbol: ?count@StreamCollection@webrtc@@UEAA_KXZ
    MCVAPI uint64 count();

    // symbol:
    // ?find@StreamCollection@webrtc@@UEAAPEAVMediaStreamInterface@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class webrtc::MediaStreamInterface* find(std::string const&);

    // symbol: ?AddStream@StreamCollection@webrtc@@QEAAXV?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@Z
    MCAPI void AddStream(class rtc::scoped_refptr<class webrtc::MediaStreamInterface>);

    // symbol: ?RemoveStream@StreamCollection@webrtc@@QEAAXPEAVMediaStreamInterface@2@@Z
    MCAPI void RemoveStream(class webrtc::MediaStreamInterface*);

    // NOLINTEND
};

}; // namespace webrtc
