#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct SSNTSNResetRequestParameterConfig; }
// clang-format on

namespace dcsctp {

class SSNTSNResetRequestParameter : public ::dcsctp::Parameter,
                                    public ::dcsctp::TLVTrait<::dcsctp::SSNTSNResetRequestParameterConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb3238e;
    // NOLINTEND

public:
    // prevent constructor by default
    SSNTSNResetRequestParameter& operator=(SSNTSNResetRequestParameter const&);
    SSNTSNResetRequestParameter(SSNTSNResetRequestParameter const&);
    SSNTSNResetRequestParameter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SerializeTo(::std::vector<uchar>&) const /*override*/;

    virtual ::std::string ToString() const /*override*/;

    virtual ~SSNTSNResetRequestParameter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace dcsctp
