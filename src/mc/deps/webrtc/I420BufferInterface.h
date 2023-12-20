#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/VideoFrameBuffer.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class I420BufferInterface {
public:
    // prevent constructor by default
    I420BufferInterface& operator=(I420BufferInterface const&);
    I420BufferInterface(I420BufferInterface const&);
    I420BufferInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?AddRef@MyCreateSessionDescriptionObserver@NetherNet@@UEBAXXZ
    virtual void AddRef() const;

    // vIndex: 1, symbol: ?Release@MyCreateSessionDescriptionObserver@NetherNet@@UEBA?AW4RefCountReleaseStatus@rtc@@XZ
    virtual ::rtc::RefCountReleaseStatus Release() const;

    // vIndex: 2, symbol: ??1I420BufferInterface@webrtc@@MEAA@XZ
    virtual ~I420BufferInterface();

    // vIndex: 3, symbol:
    // ?OnSuccess@ImplicitCreateSessionDescriptionObserver@SdpOfferAnswerHandler@webrtc@@UEAAXPEAVSessionDescriptionInterface@3@@Z
    virtual void OnSuccess(class webrtc::SessionDescriptionInterface*);

    // symbol: ?ChromaHeight@I420BufferInterface@webrtc@@UEBAHXZ
    MCVAPI int ChromaHeight() const;

    // symbol: ?ChromaWidth@I420BufferInterface@webrtc@@UEBAHXZ
    MCVAPI int ChromaWidth() const;

    // symbol: ?GetI420@I420BufferInterface@webrtc@@UEBAPEBV12@XZ
    MCVAPI class webrtc::I420BufferInterface const* GetI420() const;

    // symbol: ?ToI420@I420BufferInterface@webrtc@@UEAA?AV?$scoped_refptr@VI420BufferInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::I420BufferInterface> ToI420();

    // symbol: ?type@I420BufferInterface@webrtc@@UEBA?AW4Type@VideoFrameBuffer@2@XZ
    MCVAPI ::webrtc::VideoFrameBuffer::Type type() const;

    // NOLINTEND
};

}; // namespace webrtc
