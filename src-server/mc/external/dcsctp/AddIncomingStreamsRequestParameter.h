#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct AddIncomingStreamsRequestParameterConfig; }
// clang-format on

namespace dcsctp {

class AddIncomingStreamsRequestParameter : public ::dcsctp::Parameter, public ::dcsctp::TLVTrait<::dcsctp::AddIncomingStreamsRequestParameterConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk888329;
    ::ll::UntypedStorage<2, 2> mUnkb565bf;
    // NOLINTEND

public:
    // prevent constructor by default
    AddIncomingStreamsRequestParameter& operator=(AddIncomingStreamsRequestParameter const&);
    AddIncomingStreamsRequestParameter(AddIncomingStreamsRequestParameter const&);
    AddIncomingStreamsRequestParameter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void SerializeTo(::std::vector<uchar>&) const /*override*/;

    // vIndex: 2
    virtual ::std::string ToString() const /*override*/;

    // vIndex: 0
    virtual ~AddIncomingStreamsRequestParameter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
