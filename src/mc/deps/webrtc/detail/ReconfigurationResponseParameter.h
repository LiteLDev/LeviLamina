#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class ReconfigurationResponseParameter {
public:
    // ReconfigurationResponseParameter inner types define
    enum class Result {};

public:
    // prevent constructor by default
    ReconfigurationResponseParameter& operator=(ReconfigurationResponseParameter const&);
    ReconfigurationResponseParameter(ReconfigurationResponseParameter const&);
    ReconfigurationResponseParameter();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ReconfigurationResponseParameter@dcsctp@@UEAA@XZ
    virtual ~ReconfigurationResponseParameter() = default;

    // vIndex: 1, symbol:
    // ?SerializeTo@ReconfigurationResponseParameter@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@ReconfigurationResponseParameter@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@ReconfigurationResponseParameter@dcsctp@@SA?AV?$optional@VReconfigurationResponseParameter@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::ReconfigurationResponseParameter>
        Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
