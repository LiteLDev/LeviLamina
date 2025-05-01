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
        MCNAPI ::dcsctp::Parameters::Builder& Add(::dcsctp::Parameter const&);

        MCNAPI ~Builder();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::dcsctp::ParameterDescriptor> descriptors() const;

    MCNAPI ~Parameters();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::Parameters> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
