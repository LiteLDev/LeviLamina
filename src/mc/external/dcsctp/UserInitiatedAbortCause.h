#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct UserInitiatedAbortCauseConfig; }
// clang-format on

namespace dcsctp {

class UserInitiatedAbortCause : public ::dcsctp::Parameter,
                                public ::dcsctp::TLVTrait<::dcsctp::UserInitiatedAbortCauseConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4bcc41;
    // NOLINTEND

public:
    // prevent constructor by default
    UserInitiatedAbortCause& operator=(UserInitiatedAbortCause const&);
    UserInitiatedAbortCause(UserInitiatedAbortCause const&);
    UserInitiatedAbortCause();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    virtual ::std::string ToString() const /*override*/;

    virtual ~UserInitiatedAbortCause() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::UserInitiatedAbortCause> Parse(::rtc::ArrayView<uchar const> data);
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
