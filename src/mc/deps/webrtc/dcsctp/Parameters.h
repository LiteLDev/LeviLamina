#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Parameter; }
namespace dcsctp { struct ParameterDescriptor; }
// clang-format on

namespace dcsctp {

class Parameters {
public:
    // Parameters inner types declare
    // clang-format off
    class Builder;
    // clang-format on

    // Parameters inner types define
    class Builder {
    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);
        Builder();

    public:
        // NOLINTBEGIN
        // symbol: ?Add@Builder@Parameters@dcsctp@@QEAAAEAV123@AEBVParameter@3@@Z
        MCAPI class dcsctp::Parameters::Builder& Add(class dcsctp::Parameter const&);

        // symbol: ??1Builder@Parameters@dcsctp@@QEAA@XZ
        MCAPI ~Builder();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Parameters& operator=(Parameters const&);
    Parameters(Parameters const&);
    Parameters();

public:
    // NOLINTBEGIN
    // symbol:
    // ?descriptors@Parameters@dcsctp@@QEBA?AV?$vector@UParameterDescriptor@dcsctp@@V?$allocator@UParameterDescriptor@dcsctp@@@std@@@std@@XZ
    MCAPI std::vector<struct dcsctp::ParameterDescriptor> descriptors() const;

    // symbol: ??1Parameters@dcsctp@@QEAA@XZ
    MCAPI ~Parameters();

    // symbol: ?Parse@Parameters@dcsctp@@SA?AV?$optional@VParameters@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::Parameters> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
