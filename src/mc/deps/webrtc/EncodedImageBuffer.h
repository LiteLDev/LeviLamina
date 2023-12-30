#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class EncodedImageBuffer {
public:
    // prevent constructor by default
    EncodedImageBuffer& operator=(EncodedImageBuffer const&);
    EncodedImageBuffer(EncodedImageBuffer const&);
    EncodedImageBuffer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?AddRef@MyCreateSessionDescriptionObserver@NetherNet@@UEBAXXZ
    virtual void AddRef() const = 0;

    // vIndex: 1, symbol: ?Release@MyCreateSessionDescriptionObserver@NetherNet@@UEBA?AW4RefCountReleaseStatus@rtc@@XZ
    virtual ::rtc::RefCountReleaseStatus Release() const = 0;

    // vIndex: 2, symbol: ??1EncodedImageBuffer@webrtc@@MEAA@XZ
    virtual ~EncodedImageBuffer();

    // vIndex: 3, symbol:
    // ?OnSuccess@MyCreateSessionDescriptionObserver@NetherNet@@UEAAXPEAVSessionDescriptionInterface@webrtc@@@Z
    virtual void OnSuccess(class webrtc::SessionDescriptionInterface*);

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?size@EncodedImageBuffer@webrtc@@UEBA_KXZ
    virtual uint64 size() const;

    // symbol: ?data@EncodedImageBuffer@webrtc@@UEAAPEAEXZ
    MCVAPI uchar* data();

    // symbol: ?data@EncodedImageBuffer@webrtc@@UEBAPEBEXZ
    MCVAPI uchar const* data() const;

    // symbol: ?Create@EncodedImageBuffer@webrtc@@SA?AV?$scoped_refptr@VEncodedImageBuffer@webrtc@@@rtc@@PEBE_K@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::EncodedImageBuffer> Create(uchar const*, uint64);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0EncodedImageBuffer@webrtc@@IEAA@_K@Z
    MCAPI explicit EncodedImageBuffer(uint64);

    // symbol: ??0EncodedImageBuffer@webrtc@@IEAA@PEBE_K@Z
    MCAPI EncodedImageBuffer(uchar const*, uint64);

    // NOLINTEND
};

}; // namespace webrtc
