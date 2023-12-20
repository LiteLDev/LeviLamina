#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class TSNTag; }
// clang-format on

namespace dcsctp {

class SackChunk {
public:
    // SackChunk inner types declare
    // clang-format off
    struct GapAckBlock;
    // clang-format on

    // SackChunk inner types define
    struct GapAckBlock {
    public:
        // prevent constructor by default
        GapAckBlock& operator=(GapAckBlock const&);
        GapAckBlock(GapAckBlock const&);
        GapAckBlock();
    };

public:
    // prevent constructor by default
    SackChunk& operator=(SackChunk const&);
    SackChunk(SackChunk const&);
    SackChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SackChunk@dcsctp@@UEAA@XZ
    virtual ~SackChunk();

    // vIndex: 1, symbol: ?SerializeTo@SackChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@SackChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ??0SackChunk@dcsctp@@QEAA@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@IV?$vector@UGapAckBlock@SackChunk@dcsctp@@V?$allocator@UGapAckBlock@SackChunk@dcsctp@@@std@@@std@@V?$set@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@U?$less@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@std@@V?$allocator@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@@4@@5@@Z
    MCAPI
    SackChunk(class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, uint, std::vector<struct dcsctp::SackChunk::GapAckBlock>, std::set<class webrtc::StrongAlias<class dcsctp::TSNTag, uint>>);

    // symbol: ?Parse@SackChunk@dcsctp@@SA?AV?$optional@VSackChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::SackChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
