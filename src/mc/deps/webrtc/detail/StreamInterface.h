#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/StreamResult.h"
#include "mc/deps/webrtc/detail/StreamState.h"

namespace rtc {

class StreamInterface {
public:
    // prevent constructor by default
    StreamInterface& operator=(StreamInterface const&);
    StreamInterface(StreamInterface const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StreamInterface@rtc@@UEAA@XZ
    virtual ~StreamInterface();

    // vIndex: 1, symbol: ?GetState@StreamInterfaceChannel@cricket@@UEBA?AW4StreamState@rtc@@XZ
    virtual ::rtc::StreamState GetState() const = 0;

    // vIndex: 2, symbol:
    // ?Read@StreamInterfaceChannel@cricket@@UEAA?AW4StreamResult@rtc@@V?$ArrayView@E$0?BCGH@@4@AEA_KAEAH@Z
    virtual ::rtc::StreamResult Read(class rtc::ArrayView<uchar, -4711>, uint64&, int&) = 0;

    // vIndex: 3, symbol:
    // ?Write@StreamInterfaceChannel@cricket@@UEAA?AW4StreamResult@rtc@@V?$ArrayView@$$CBE$0?BCGH@@4@AEA_KAEAH@Z
    virtual ::rtc::StreamResult Write(class rtc::ArrayView<uchar const, -4711>, uint64&, int&) = 0;

    // vIndex: 4, symbol: ?Close@StreamInterfaceChannel@cricket@@UEAAXXZ
    virtual void Close() = 0;

    // vIndex: 5, symbol: ?Flush@StreamInterface@rtc@@UEAA_NXZ
    virtual bool Flush();

    // symbol: ?WriteAll@StreamInterface@rtc@@QEAA?AW4StreamResult@2@PEBX_KPEA_KPEAH@Z
    MCAPI ::rtc::StreamResult WriteAll(void const*, uint64, uint64*, int*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0StreamInterface@rtc@@IEAA@XZ
    MCAPI StreamInterface();

    // NOLINTEND
};

}; // namespace rtc
