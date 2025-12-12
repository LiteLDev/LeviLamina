#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct ForwardTsnSupportedParameterConfig; }
// clang-format on

namespace dcsctp {

class ForwardTsnSupportedParameter : public ::dcsctp::Parameter,
                                     public ::dcsctp::TLVTrait<::dcsctp::ForwardTsnSupportedParameterConfig> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    virtual ::std::string ToString() const /*override*/;

    virtual ~ForwardTsnSupportedParameter() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::ForwardTsnSupportedParameter> Parse(::rtc::ArrayView<uchar const> data);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SerializeTo(::std::vector<uchar>& out) const;

    MCNAPI ::std::string $ToString() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
