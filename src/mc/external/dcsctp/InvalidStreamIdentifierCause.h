#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct InvalidStreamIdentifierCauseConfig; }
// clang-format on

namespace dcsctp {

class InvalidStreamIdentifierCause : public ::dcsctp::Parameter,
                                     public ::dcsctp::TLVTrait<::dcsctp::InvalidStreamIdentifierCauseConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkad7786;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidStreamIdentifierCause& operator=(InvalidStreamIdentifierCause const&);
    InvalidStreamIdentifierCause(InvalidStreamIdentifierCause const&);
    InvalidStreamIdentifierCause();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    virtual ::std::string ToString() const /*override*/;

    virtual ~InvalidStreamIdentifierCause() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::InvalidStreamIdentifierCause> Parse(::rtc::ArrayView<uchar const> data);
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
