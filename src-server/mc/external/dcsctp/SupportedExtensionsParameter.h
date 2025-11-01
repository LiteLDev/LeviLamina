#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct SupportedExtensionsParameterConfig; }
// clang-format on

namespace dcsctp {

class SupportedExtensionsParameter : public ::dcsctp::Parameter, public ::dcsctp::TLVTrait<::dcsctp::SupportedExtensionsParameterConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk85c064;
    // NOLINTEND

public:
    // prevent constructor by default
    SupportedExtensionsParameter& operator=(SupportedExtensionsParameter const&);
    SupportedExtensionsParameter(SupportedExtensionsParameter const&);
    SupportedExtensionsParameter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    // vIndex: 2
    virtual ::std::string ToString() const /*override*/;

    // vIndex: 0
    virtual ~SupportedExtensionsParameter() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::SupportedExtensionsParameter> Parse(::rtc::ArrayView<uchar const> data);
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

}
