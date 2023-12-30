#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/I420BufferInterface.h"
#include "mc/deps/webrtc/VideoFrameBuffer.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class I420BufferInterface; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class VideoFrameBuffer; }
// clang-format on

namespace webrtc {

class I420Buffer : public ::webrtc::I420BufferInterface {
public:
    // prevent constructor by default
    I420Buffer& operator=(I420Buffer const&);
    I420Buffer(I420Buffer const&);
    I420Buffer();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1I420Buffer@webrtc@@MEAA@XZ
    virtual ~I420Buffer();

    // vIndex: 4, symbol: ?width@I420Buffer@webrtc@@UEBAHXZ
    virtual int width() const;

    // vIndex: 5, symbol: ?height@I420Buffer@webrtc@@UEBAHXZ
    virtual int height() const;

    // vIndex: 6, symbol:
    // ?ToI420@I420BufferInterface@webrtc@@UEAA?AV?$scoped_refptr@VI420BufferInterface@webrtc@@@rtc@@XZ
    virtual class rtc::scoped_refptr<class webrtc::I420BufferInterface> ToI420();

    // vIndex: 7, symbol: ?GetI420@I420BufferInterface@webrtc@@UEBAPEBV12@XZ
    virtual class webrtc::I420BufferInterface const* GetI420() const;

    // vIndex: 8, symbol:
    // ?CropAndScale@VideoFrameBuffer@webrtc@@UEAA?AV?$scoped_refptr@VVideoFrameBuffer@webrtc@@@rtc@@HHHHHH@Z
    virtual class rtc::scoped_refptr<class webrtc::VideoFrameBuffer> CropAndScale(int, int, int, int, int, int);

    // vIndex: 9, symbol:
    // ?GetMappedFrameBuffer@VideoFrameBuffer@webrtc@@UEAA?AV?$scoped_refptr@VVideoFrameBuffer@webrtc@@@rtc@@V?$ArrayView@W4Type@VideoFrameBuffer@webrtc@@$0?BCGH@@4@@Z
    virtual class rtc::scoped_refptr<class webrtc::VideoFrameBuffer>
        GetMappedFrameBuffer(class rtc::ArrayView<::webrtc::VideoFrameBuffer::Type, -4711>);

    // vIndex: 10, symbol: ?ChromaWidth@I420BufferInterface@webrtc@@UEBAHXZ
    virtual int ChromaWidth() const;

    // vIndex: 11, symbol: ?ChromaHeight@I420BufferInterface@webrtc@@UEBAHXZ
    virtual int ChromaHeight() const;

    // vIndex: 12, symbol: ?StrideY@I420Buffer@webrtc@@UEBAHXZ
    virtual int StrideY() const;

    // vIndex: 13, symbol: ?StrideU@I420Buffer@webrtc@@UEBAHXZ
    virtual int StrideU() const;

    // vIndex: 14, symbol: ?StrideV@I420Buffer@webrtc@@UEBAHXZ
    virtual int StrideV() const;

    // vIndex: 15, symbol: ?DataY@I420Buffer@webrtc@@UEBAPEBEXZ
    virtual uchar const* DataY() const;

    // vIndex: 16, symbol: ?DataU@I420Buffer@webrtc@@UEBAPEBEXZ
    virtual uchar const* DataU() const;

    // vIndex: 17, symbol: ?DataV@I420Buffer@webrtc@@UEBAPEBEXZ
    virtual uchar const* DataV() const;

    // symbol: ?CropAndScaleFrom@I420Buffer@webrtc@@QEAAXAEBVI420BufferInterface@2@HHHH@Z
    MCAPI void CropAndScaleFrom(class webrtc::I420BufferInterface const&, int, int, int, int);

    // symbol: ?MutableDataU@I420Buffer@webrtc@@QEAAPEAEXZ
    MCAPI uchar* MutableDataU();

    // symbol: ?MutableDataV@I420Buffer@webrtc@@QEAAPEAEXZ
    MCAPI uchar* MutableDataV();

    // symbol: ?MutableDataY@I420Buffer@webrtc@@QEAAPEAEXZ
    MCAPI uchar* MutableDataY();

    // symbol: ?Create@I420Buffer@webrtc@@SA?AV?$scoped_refptr@VI420Buffer@webrtc@@@rtc@@HH@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::I420Buffer> Create(int, int);

    // symbol: ?SetBlack@I420Buffer@webrtc@@SAXPEAV12@@Z
    MCAPI static void SetBlack(class webrtc::I420Buffer*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0I420Buffer@webrtc@@IEAA@HH@Z
    MCAPI I420Buffer(int, int);

    // symbol: ??0I420Buffer@webrtc@@IEAA@HHHHH@Z
    MCAPI I420Buffer(int, int, int, int, int);

    // NOLINTEND
};

}; // namespace webrtc
