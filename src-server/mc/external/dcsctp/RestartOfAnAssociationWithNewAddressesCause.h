#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct RestartOfAnAssociationWithNewAddressesCauseConfig; }
// clang-format on

namespace dcsctp {

class RestartOfAnAssociationWithNewAddressesCause
: public ::dcsctp::Parameter,
  public ::dcsctp::TLVTrait<::dcsctp::RestartOfAnAssociationWithNewAddressesCauseConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb24c6b;
    // NOLINTEND

public:
    // prevent constructor by default
    RestartOfAnAssociationWithNewAddressesCause& operator=(RestartOfAnAssociationWithNewAddressesCause const&);
    RestartOfAnAssociationWithNewAddressesCause(RestartOfAnAssociationWithNewAddressesCause const&);
    RestartOfAnAssociationWithNewAddressesCause();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    // vIndex: 2
    virtual ::std::string ToString() const /*override*/;

    // vIndex: 0
    virtual ~RestartOfAnAssociationWithNewAddressesCause() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::RestartOfAnAssociationWithNewAddressesCause>
    Parse(::rtc::ArrayView<uchar const> data);
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
