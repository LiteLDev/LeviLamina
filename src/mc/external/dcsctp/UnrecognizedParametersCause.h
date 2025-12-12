#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct UnrecognizedParametersCauseConfig; }
// clang-format on

namespace dcsctp {

class UnrecognizedParametersCause : public ::dcsctp::Parameter,
                                    public ::dcsctp::TLVTrait<::dcsctp::UnrecognizedParametersCauseConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbde053;
    // NOLINTEND

public:
    // prevent constructor by default
    UnrecognizedParametersCause& operator=(UnrecognizedParametersCause const&);
    UnrecognizedParametersCause(UnrecognizedParametersCause const&);
    UnrecognizedParametersCause();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    virtual ::std::string ToString() const /*override*/;

    virtual ~UnrecognizedParametersCause() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::UnrecognizedParametersCause> Parse(::rtc::ArrayView<uchar const> data);
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
