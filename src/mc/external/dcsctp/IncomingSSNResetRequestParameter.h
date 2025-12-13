#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct IncomingSSNResetRequestParameterConfig; }
// clang-format on

namespace dcsctp {

class IncomingSSNResetRequestParameter : public ::dcsctp::Parameter,
                                         public ::dcsctp::TLVTrait<::dcsctp::IncomingSSNResetRequestParameterConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf5afa6;
    ::ll::UntypedStorage<8, 24> mUnka5dc79;
    // NOLINTEND

public:
    // prevent constructor by default
    IncomingSSNResetRequestParameter& operator=(IncomingSSNResetRequestParameter const&);
    IncomingSSNResetRequestParameter(IncomingSSNResetRequestParameter const&);
    IncomingSSNResetRequestParameter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    virtual ::std::string ToString() const /*override*/;

    virtual ~IncomingSSNResetRequestParameter() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::IncomingSSNResetRequestParameter> Parse(::rtc::ArrayView<uchar const> data);
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
