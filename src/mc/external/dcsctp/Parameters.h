#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        // member functions
        // NOLINTBEGIN
        MCAPI ::dcsctp::Parameters::Builder& Add(::dcsctp::Parameter const&);

        MCAPI ~Builder();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::dcsctp::ParameterDescriptor> descriptors() const;

    MCAPI ~Parameters();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::Parameters> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
