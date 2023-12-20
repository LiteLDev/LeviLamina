#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class IDataChunk {
public:
    // prevent constructor by default
    IDataChunk& operator=(IDataChunk const&);
    IDataChunk(IDataChunk const&);
    IDataChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IDataChunk@dcsctp@@UEAA@XZ
    virtual ~IDataChunk();

    // vIndex: 1, symbol: ?SerializeTo@IDataChunk@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@IDataChunk@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol: ?Parse@IDataChunk@dcsctp@@SA?AV?$optional@VIDataChunk@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::IDataChunk> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
