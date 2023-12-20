#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/SackChunk.h"
#include "mc/deps/webrtc/detail/UnwrappedSequenceNumber.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DurationMs; }
namespace dcsctp { class ForwardTsnChunk; }
namespace dcsctp { class IForwardTsnChunk; }
namespace dcsctp { class LifecycleId; }
namespace dcsctp { class MaxRetransmits; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { class TimeMs; }
namespace dcsctp { struct Data; }
// clang-format on

namespace dcsctp {

class OutstandingData {
public:
    // OutstandingData inner types declare
    // clang-format off
    struct AckInfo;
    class Item;
    // clang-format on

    // OutstandingData inner types define
    struct AckInfo {
    public:
        // prevent constructor by default
        AckInfo& operator=(AckInfo const&);
        AckInfo(AckInfo const&);
        AckInfo();

    public:
        // NOLINTBEGIN
        // symbol: ??1AckInfo@OutstandingData@dcsctp@@QEAA@XZ
        MCAPI ~AckInfo();

        // NOLINTEND
    };

    class Item {
    public:
        // Item inner types define
        enum class NackAction {};

    public:
        // prevent constructor by default
        Item& operator=(Item const&);
        Item(Item const&);
        Item();

    public:
        // NOLINTBEGIN
        // symbol: ?Abandon@Item@OutstandingData@dcsctp@@QEAAXXZ
        MCAPI void Abandon();

        // symbol: ?Ack@Item@OutstandingData@dcsctp@@QEAAXXZ
        MCAPI void Ack();

        // symbol: ??0Item@OutstandingData@dcsctp@@QEAA@UData@2@VTimeMs@2@VMaxRetransmits@2@1VLifecycleId@2@@Z
        MCAPI Item(
            struct dcsctp::Data,
            class dcsctp::TimeMs,
            class dcsctp::MaxRetransmits,
            class dcsctp::TimeMs,
            class dcsctp::LifecycleId
        );

        // symbol: ?MarkAsRetransmitted@Item@OutstandingData@dcsctp@@QEAAXXZ
        MCAPI void MarkAsRetransmitted();

        // symbol: ?Nack@Item@OutstandingData@dcsctp@@QEAA?AW4NackAction@123@_N@Z
        MCAPI ::dcsctp::OutstandingData::Item::NackAction Nack(bool);

        // symbol: ?has_expired@Item@OutstandingData@dcsctp@@QEBA_NVTimeMs@3@@Z
        MCAPI bool has_expired(class dcsctp::TimeMs) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    OutstandingData& operator=(OutstandingData const&);
    OutstandingData(OutstandingData const&);
    OutstandingData();

public:
    // NOLINTBEGIN
    // symbol: ?CreateForwardTsn@OutstandingData@dcsctp@@QEBA?AVForwardTsnChunk@2@XZ
    MCAPI class dcsctp::ForwardTsnChunk CreateForwardTsn() const;

    // symbol: ?CreateIForwardTsn@OutstandingData@dcsctp@@QEBA?AVIForwardTsnChunk@2@XZ
    MCAPI class dcsctp::IForwardTsnChunk CreateIForwardTsn() const;

    // symbol: ?ExpireOutstandingChunks@OutstandingData@dcsctp@@QEAAXVTimeMs@2@@Z
    MCAPI void ExpireOutstandingChunks(class dcsctp::TimeMs);

    // symbol:
    // ?GetChunksToBeFastRetransmitted@OutstandingData@dcsctp@@QEAA?AV?$vector@U?$pair@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@UData@dcsctp@@@std@@V?$allocator@U?$pair@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@UData@dcsctp@@@std@@@2@@std@@_K@Z
    MCAPI std::vector<std::pair<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, struct dcsctp::Data>>
          GetChunksToBeFastRetransmitted(uint64);

    // symbol:
    // ?GetChunksToBeRetransmitted@OutstandingData@dcsctp@@QEAA?AV?$vector@U?$pair@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@UData@dcsctp@@@std@@V?$allocator@U?$pair@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@UData@dcsctp@@@std@@@2@@std@@_K@Z
    MCAPI std::vector<std::pair<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, struct dcsctp::Data>>
          GetChunksToBeRetransmitted(uint64);

    // symbol:
    // ?HandleSack@OutstandingData@dcsctp@@QEAA?AUAckInfo@12@V?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@V?$ArrayView@$$CBUGapAckBlock@SackChunk@dcsctp@@$0?BCGH@@rtc@@_N@Z
    MCAPI struct dcsctp::OutstandingData::AckInfo HandleSack(
        class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>,
        class rtc::ArrayView<struct dcsctp::SackChunk::GapAckBlock const, -4711>,
        bool
    );

    // symbol:
    // ?Insert@OutstandingData@dcsctp@@QEAA?AV?$optional@V?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@dcsctp@@@std@@AEBUData@2@VTimeMs@2@VMaxRetransmits@2@1VLifecycleId@2@@Z
    MCAPI std::optional<class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>>
          Insert(
              struct dcsctp::Data const&,
              class dcsctp::TimeMs,
              class dcsctp::MaxRetransmits,
              class dcsctp::TimeMs,
              class dcsctp::LifecycleId
          );

    // symbol:
    // ?MeasureRTT@OutstandingData@dcsctp@@QEBA?AV?$optional@VDurationMs@dcsctp@@@std@@VTimeMs@2@V?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@@Z
    MCAPI std::optional<class dcsctp::DurationMs>
        MeasureRTT(class dcsctp::TimeMs, class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>)
            const;

    // symbol: ?NackAll@OutstandingData@dcsctp@@QEAAXXZ
    MCAPI void NackAll();

    // symbol:
    // ?ResetSequenceNumbers@OutstandingData@dcsctp@@QEAAXV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@0@Z
    MCAPI void
        ResetSequenceNumbers(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>, class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>);

    // symbol: ?ShouldSendForwardTsn@OutstandingData@dcsctp@@QEBA_NXZ
    MCAPI bool ShouldSendForwardTsn() const;

    // symbol:
    // ?highest_outstanding_tsn@OutstandingData@dcsctp@@QEBA?AV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@XZ
    MCAPI class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>
    highest_outstanding_tsn() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AbandonAllFor@OutstandingData@dcsctp@@AEAAXAEBVItem@12@@Z
    MCAPI void AbandonAllFor(class dcsctp::OutstandingData::Item const&);

    // symbol:
    // ?AckChunk@OutstandingData@dcsctp@@AEAAXAEAUAckInfo@12@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@dcsctp@@VItem@OutstandingData@2@@std@@@std@@@std@@@std@@@Z
    MCAPI void
    AckChunk(struct dcsctp::OutstandingData::AckInfo&, std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>> const, class dcsctp::OutstandingData::Item>>>>);

    // symbol:
    // ?AckGapBlocks@OutstandingData@dcsctp@@AEAAXV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@V?$ArrayView@$$CBUGapAckBlock@SackChunk@dcsctp@@$0?BCGH@@rtc@@AEAUAckInfo@12@@Z
    MCAPI void
    AckGapBlocks(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>, class rtc::ArrayView<struct dcsctp::SackChunk::GapAckBlock const, -4711>, struct dcsctp::OutstandingData::AckInfo&);

    // symbol:
    // ?ExtractChunksThatCanFit@OutstandingData@dcsctp@@AEAA?AV?$vector@U?$pair@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@UData@dcsctp@@@std@@V?$allocator@U?$pair@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@UData@dcsctp@@@std@@@2@@std@@AEAV?$set@V?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@dcsctp@@U?$less@V?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@dcsctp@@@std@@V?$allocator@V?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@dcsctp@@@4@@4@_K@Z
    MCAPI std::vector<std::pair<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, struct dcsctp::Data>>
          ExtractChunksThatCanFit(
              std::set<class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>>&,
              uint64
          );

    // symbol: ?GetSerializedChunkSize@OutstandingData@dcsctp@@AEBA_KAEBUData@2@@Z
    MCAPI uint64 GetSerializedChunkSize(struct dcsctp::Data const&) const;

    // symbol:
    // ?NackBetweenAckBlocks@OutstandingData@dcsctp@@AEAAXV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@V?$ArrayView@$$CBUGapAckBlock@SackChunk@dcsctp@@$0?BCGH@@rtc@@_NAEAUAckInfo@12@@Z
    MCAPI void
    NackBetweenAckBlocks(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>, class rtc::ArrayView<struct dcsctp::SackChunk::GapAckBlock const, -4711>, bool, struct dcsctp::OutstandingData::AckInfo&);

    // symbol:
    // ?NackItem@OutstandingData@dcsctp@@AEAA_NV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@AEAVItem@12@_N2@Z
    MCAPI bool NackItem(
        class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>,
        class dcsctp::OutstandingData::Item&,
        bool,
        bool
    );

    // symbol:
    // ?RemoveAcked@OutstandingData@dcsctp@@AEAAXV?$UnwrappedSequenceNumber@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@2@AEAUAckInfo@12@@Z
    MCAPI void
    RemoveAcked(class dcsctp::UnwrappedSequenceNumber<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>, struct dcsctp::OutstandingData::AckInfo&);

    // NOLINTEND
};

}; // namespace dcsctp
