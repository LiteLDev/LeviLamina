#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/detail/AnyForwardTsnChunk.h"
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/UnwrappedSequenceNumber.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class SSNTag; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct Data; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
// clang-format on

namespace dcsctp {

class TraditionalReassemblyStreams {
public:
    // TraditionalReassemblyStreams inner types declare
    // clang-format off
    class OrderedStream;
    class StreamBase;
    class UnorderedStream;
    // clang-format on

    // TraditionalReassemblyStreams inner types define
    class OrderedStream {
    public:
        // prevent constructor by default
        OrderedStream& operator=(OrderedStream const&);
        OrderedStream(OrderedStream const&);
        OrderedStream();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?Add@OrderedStream@TraditionalReassemblyStreams@dcsctp@@QEAAHV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@3@UData@3@@Z
        MCAPI int
            Add(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>,
                struct dcsctp::Data);

        // symbol:
        // ?EraseTo@OrderedStream@TraditionalReassemblyStreams@dcsctp@@QEAA_KV?$StrongAlias@VSSNTag@dcsctp@@G@webrtc@@@Z
        MCAPI uint64 EraseTo(class webrtc::StrongAlias<class dcsctp::SSNTag, ushort>);

        // symbol:
        // ??0OrderedStream@TraditionalReassemblyStreams@dcsctp@@QEAA@PEAV12@V?$StrongAlias@VSSNTag@dcsctp@@G@webrtc@@@Z
        MCAPI
        OrderedStream(class dcsctp::TraditionalReassemblyStreams*, class webrtc::StrongAlias<class dcsctp::SSNTag, ushort>);

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol: ?TryToAssembleMessage@OrderedStream@TraditionalReassemblyStreams@dcsctp@@AEAA_KXZ
        MCAPI uint64 TryToAssembleMessage();

        // symbol: ?TryToAssembleMessages@OrderedStream@TraditionalReassemblyStreams@dcsctp@@AEAA_KXZ
        MCAPI uint64 TryToAssembleMessages();

        // NOLINTEND
    };

    class StreamBase {
    public:
        // prevent constructor by default
        StreamBase& operator=(StreamBase const&);
        StreamBase(StreamBase const&);
        StreamBase();

        // protected:
        // NOLINTBEGIN
        // symbol:
        // ?AssembleMessage@StreamBase@TraditionalReassemblyStreams@dcsctp@@IEAA_KV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@dcsctp@@UData@2@@std@@@std@@@std@@@std@@0@Z
        MCAPI
        uint64 AssembleMessage(std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>> const, struct dcsctp::Data>>>>, std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>> const, struct dcsctp::Data>>>>);

        // NOLINTEND
    };

    class UnorderedStream {
    public:
        // prevent constructor by default
        UnorderedStream& operator=(UnorderedStream const&);
        UnorderedStream(UnorderedStream const&);
        UnorderedStream();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?Add@UnorderedStream@TraditionalReassemblyStreams@dcsctp@@QEAAHV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@3@UData@3@@Z
        MCAPI int
            Add(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>,
                struct dcsctp::Data);

        // symbol:
        // ?EraseTo@UnorderedStream@TraditionalReassemblyStreams@dcsctp@@QEAA_KV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@3@@Z
        MCAPI uint64
            EraseTo(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>);

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol:
        // ?TryToAssembleMessage@UnorderedStream@TraditionalReassemblyStreams@dcsctp@@AEAA_KV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@dcsctp@@UData@2@@std@@@std@@@std@@@std@@@Z
        MCAPI uint64 TryToAssembleMessage(std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<
                                              class dcsctp::UnwrappedSequenceNumber<
                                                  class webrtc::StrongAlias<class dcsctp::TSNTag, uint>> const,
                                              struct dcsctp::Data>>>>);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    TraditionalReassemblyStreams& operator=(TraditionalReassemblyStreams const&);
    TraditionalReassemblyStreams(TraditionalReassemblyStreams const&);
    TraditionalReassemblyStreams();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TraditionalReassemblyStreams@dcsctp@@UEAA@XZ
    virtual ~TraditionalReassemblyStreams() = default;

    // vIndex: 1, symbol:
    // ?Add@TraditionalReassemblyStreams@dcsctp@@UEAAHV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@UData@2@@Z
    virtual int
        Add(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>,
            struct dcsctp::Data);

    // vIndex: 2, symbol:
    // ?HandleForwardTsn@TraditionalReassemblyStreams@dcsctp@@UEAA_KV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@V?$ArrayView@$$CBUSkippedStream@AnyForwardTsnChunk@dcsctp@@$0?BCGH@@rtc@@@Z
    virtual uint64
        HandleForwardTsn(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>, class rtc::ArrayView<struct dcsctp::AnyForwardTsnChunk::SkippedStream const, -4711>);

    // vIndex: 3, symbol:
    // ?ResetStreams@TraditionalReassemblyStreams@dcsctp@@UEAAXV?$ArrayView@$$CBV?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@$0?BCGH@@rtc@@@Z
    virtual void
        ResetStreams(class rtc::ArrayView<class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort> const, -4711>);

    // vIndex: 4, symbol: ?GetHandoverReadiness@TraditionalReassemblyStreams@dcsctp@@UEBA?AVHandoverReadinessStatus@2@XZ
    virtual class dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    // vIndex: 5, symbol: ?AddHandoverState@TraditionalReassemblyStreams@dcsctp@@UEAAXAEAUDcSctpSocketHandoverState@2@@Z
    virtual void AddHandoverState(struct dcsctp::DcSctpSocketHandoverState&);

    // vIndex: 6, symbol: ?RestoreFromState@TraditionalReassemblyStreams@dcsctp@@UEAAXAEBUDcSctpSocketHandoverState@2@@Z
    virtual void RestoreFromState(struct dcsctp::DcSctpSocketHandoverState const&);

    // symbol:
    // ??0TraditionalReassemblyStreams@dcsctp@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$function@$$A6AXV?$ArrayView@$$CBV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@dcsctp@@$0?BCGH@@rtc@@VDcSctpMessage@dcsctp@@@Z@3@@Z
    MCAPI
    TraditionalReassemblyStreams(std::string_view, std::function<void(class rtc::ArrayView<class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>> const, -4711>, class dcsctp::DcSctpMessage)>);

    // NOLINTEND
};

}; // namespace dcsctp
