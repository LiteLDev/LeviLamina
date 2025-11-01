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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnka0a698;
        // NOLINTEND

    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);
        Builder();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::dcsctp::Parameters::Builder& Add(::dcsctp::Parameter const& p);

        MCNAPI ~Builder();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk64c2f2;
    // NOLINTEND

public:
    // prevent constructor by default
    Parameters& operator=(Parameters const&);
    Parameters(Parameters const&);
    Parameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::dcsctp::ParameterDescriptor> descriptors() const;

    MCNAPI ~Parameters();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::Parameters> Parse(::rtc::ArrayView<uchar const> data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
