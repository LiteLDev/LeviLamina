#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/dcsctp/AnyForwardTsnChunk.h"
#include "mc/deps/webrtc/dcsctp/UnwrappedSequenceNumber.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class FSNTag; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class MIDTag; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct Data; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
// clang-format on

namespace dcsctp {

class InterleavedReassemblyStreams {
public:
    // InterleavedReassemblyStreams inner types declare
    // clang-format off
    struct FullStreamId;
    class Stream;
    // clang-format on

    // InterleavedReassemblyStreams inner types define
    struct FullStreamId {
    public:
        // prevent constructor by default
        FullStreamId& operator=(FullStreamId const&);
        FullStreamId(FullStreamId const&);
        FullStreamId();
    };

    class Stream {
    public:
        // prevent constructor by default
        Stream& operator=(Stream const&);
        Stream(Stream const&);
        Stream();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?Add@Stream@InterleavedReassemblyStreams@dcsctp@@QEAAHV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@3@UData@3@@Z
        MCAPI int
            Add(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>,
                struct dcsctp::Data);

        // symbol: ?AddHandoverState@Stream@InterleavedReassemblyStreams@dcsctp@@QEBAXAEAUDcSctpSocketHandoverState@3@@Z
        MCAPI void AddHandoverState(struct dcsctp::DcSctpSocketHandoverState&) const;

        // symbol:
        // ?EraseTo@Stream@InterleavedReassemblyStreams@dcsctp@@QEAA_KV?$StrongAlias@VMIDTag@dcsctp@@I@webrtc@@@Z
        MCAPI uint64 EraseTo(class webrtc::StrongAlias<class dcsctp::MIDTag, uint>);

        // symbol:
        // ??0Stream@InterleavedReassemblyStreams@dcsctp@@QEAA@UFullStreamId@12@PEAV12@V?$StrongAlias@VMIDTag@dcsctp@@I@webrtc@@@Z
        MCAPI
        Stream(struct dcsctp::InterleavedReassemblyStreams::FullStreamId, class dcsctp::InterleavedReassemblyStreams*, class webrtc::StrongAlias<class dcsctp::MIDTag, uint>);

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol:
        // ?AssembleMessage@Stream@InterleavedReassemblyStreams@dcsctp@@AEAA_KAEBV?$map@V?$StrongAlias@VFSNTag@dcsctp@@I@webrtc@@U?$pair@V?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@dcsctp@@UData@2@@std@@U?$less@V?$StrongAlias@VFSNTag@dcsctp@@I@webrtc@@@4@V?$allocator@U?$pair@$$CBV?$StrongAlias@VFSNTag@dcsctp@@I@webrtc@@U?$pair@V?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@dcsctp@@UData@2@@std@@@std@@@4@@std@@@Z
        MCAPI uint64 AssembleMessage(std::map<
                                     class webrtc::StrongAlias<class dcsctp::FSNTag, uint>,
                                     std::pair<
                                         class dcsctp::UnwrappedSequenceNumber<
                                             class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>,
                                         struct dcsctp::Data>> const&);

        // symbol:
        // ?TryToAssembleMessage@Stream@InterleavedReassemblyStreams@dcsctp@@AEAA_KV?$UnwrappedSequenceNumber@V?$StrongAlias@VMIDTag@dcsctp@@I@webrtc@@@3@@Z
        MCAPI uint64 TryToAssembleMessage(class dcsctp::UnwrappedSequenceNumber<
                                          class webrtc::StrongAlias<class dcsctp::MIDTag, uint>>);

        // symbol: ?TryToAssembleMessages@Stream@InterleavedReassemblyStreams@dcsctp@@AEAA_KXZ
        MCAPI uint64 TryToAssembleMessages();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    InterleavedReassemblyStreams& operator=(InterleavedReassemblyStreams const&);
    InterleavedReassemblyStreams(InterleavedReassemblyStreams const&);
    InterleavedReassemblyStreams();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InterleavedReassemblyStreams@dcsctp@@UEAA@XZ
    virtual ~InterleavedReassemblyStreams() = default;

    // vIndex: 1, symbol:
    // ?Add@InterleavedReassemblyStreams@dcsctp@@UEAAHV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@UData@2@@Z
    virtual int
        Add(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>,
            struct dcsctp::Data);

    // vIndex: 2, symbol:
    // ?HandleForwardTsn@InterleavedReassemblyStreams@dcsctp@@UEAA_KV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@V?$ArrayView@$$CBUSkippedStream@AnyForwardTsnChunk@dcsctp@@$0?BCGH@@rtc@@@Z
    virtual uint64
        HandleForwardTsn(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>, class rtc::ArrayView<struct dcsctp::AnyForwardTsnChunk::SkippedStream const, -4711>);

    // vIndex: 3, symbol:
    // ?ResetStreams@InterleavedReassemblyStreams@dcsctp@@UEAAXV?$ArrayView@$$CBV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@$0?BCGH@@rtc@@@Z
    virtual void
        ResetStreams(class rtc::ArrayView<class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort> const, -4711>);

    // vIndex: 4, symbol: ?GetHandoverReadiness@InterleavedReassemblyStreams@dcsctp@@UEBA?AVHandoverReadinessStatus@2@XZ
    virtual class dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    // vIndex: 5, symbol: ?AddHandoverState@InterleavedReassemblyStreams@dcsctp@@UEAAXAEAUDcSctpSocketHandoverState@2@@Z
    virtual void AddHandoverState(struct dcsctp::DcSctpSocketHandoverState&);

    // vIndex: 6, symbol: ?RestoreFromState@InterleavedReassemblyStreams@dcsctp@@UEAAXAEBUDcSctpSocketHandoverState@2@@Z
    virtual void RestoreFromState(struct dcsctp::DcSctpSocketHandoverState const&);

    // symbol:
    // ??0InterleavedReassemblyStreams@dcsctp@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$function@$$A6AXV?$ArrayView@$$CBV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@dcsctp@@$0?BCGH@@rtc@@VDcSctpMessage@dcsctp@@@Z@3@@Z
    MCAPI
    InterleavedReassemblyStreams(std::string_view, std::function<void(class rtc::ArrayView<class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>> const, -4711>, class dcsctp::DcSctpMessage)>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?GetOrCreateStream@InterleavedReassemblyStreams@dcsctp@@AEAAAEAVStream@12@AEBUFullStreamId@12@@Z
    MCAPI class dcsctp::InterleavedReassemblyStreams::Stream&
    GetOrCreateStream(struct dcsctp::InterleavedReassemblyStreams::FullStreamId const&);

    // NOLINTEND
};

}; // namespace dcsctp
