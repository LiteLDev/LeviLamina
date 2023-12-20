#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class DataChunk {
public:
    // prevent constructor by default
    DataChunk& operator=(DataChunk const&);
    DataChunk(DataChunk const&);
    DataChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DataChunk@dcsctp@@UEAA@XZ
    virtual ~DataChunk();

    // vIndex: 1, symbol: ?SerializeTo@DataChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@DataChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol: ?Parse@DataChunk@dcsctp@@SA?AV?$optional@VDataChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::DataChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
