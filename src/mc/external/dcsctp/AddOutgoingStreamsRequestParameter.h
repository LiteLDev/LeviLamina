#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct AddOutgoingStreamsRequestParameterConfig; }
// clang-format on

namespace dcsctp {

class AddOutgoingStreamsRequestParameter
: public ::dcsctp::Parameter,
  public ::dcsctp::TLVTrait<::dcsctp::AddOutgoingStreamsRequestParameterConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdc209c;
    ::ll::UntypedStorage<2, 2> mUnk174bf9;
    // NOLINTEND

public:
    // prevent constructor by default
    AddOutgoingStreamsRequestParameter& operator=(AddOutgoingStreamsRequestParameter const&);
    AddOutgoingStreamsRequestParameter(AddOutgoingStreamsRequestParameter const&);
    AddOutgoingStreamsRequestParameter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SerializeTo(::std::vector<uchar>&) const /*override*/;

    virtual ::std::string ToString() const /*override*/;

    virtual ~AddOutgoingStreamsRequestParameter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace dcsctp
