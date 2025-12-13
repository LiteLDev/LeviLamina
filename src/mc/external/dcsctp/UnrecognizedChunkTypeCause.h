#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct UnrecognizedChunkTypeCauseConfig; }
// clang-format on

namespace dcsctp {

class UnrecognizedChunkTypeCause : public ::dcsctp::Parameter,
                                   public ::dcsctp::TLVTrait<::dcsctp::UnrecognizedChunkTypeCauseConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2f8b91;
    // NOLINTEND

public:
    // prevent constructor by default
    UnrecognizedChunkTypeCause& operator=(UnrecognizedChunkTypeCause const&);
    UnrecognizedChunkTypeCause(UnrecognizedChunkTypeCause const&);
    UnrecognizedChunkTypeCause();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    // vIndex: 2
    virtual ::std::string ToString() const /*override*/;

    // vIndex: 0
    virtual ~UnrecognizedChunkTypeCause() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::UnrecognizedChunkTypeCause> Parse(::rtc::ArrayView<uchar const> data);
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
