#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct OutgoingSSNResetRequestParameterConfig; }
// clang-format on

namespace dcsctp {

class OutgoingSSNResetRequestParameter : public ::dcsctp::Parameter,
                                         public ::dcsctp::TLVTrait<::dcsctp::OutgoingSSNResetRequestParameterConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9ddbde;
    ::ll::UntypedStorage<4, 4>  mUnkc1ba54;
    ::ll::UntypedStorage<4, 4>  mUnkce31a0;
    ::ll::UntypedStorage<8, 24> mUnk3f24b7;
    // NOLINTEND

public:
    // prevent constructor by default
    OutgoingSSNResetRequestParameter& operator=(OutgoingSSNResetRequestParameter const&);
    OutgoingSSNResetRequestParameter(OutgoingSSNResetRequestParameter const&);
    OutgoingSSNResetRequestParameter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    virtual ::std::string ToString() const /*override*/;

    virtual ~OutgoingSSNResetRequestParameter() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::OutgoingSSNResetRequestParameter> Parse(::rtc::ArrayView<uchar const> data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
