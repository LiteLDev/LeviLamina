#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Parameter.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct ZeroChecksumAcceptableChunkParameterConfig; }
// clang-format on

namespace dcsctp {

class ZeroChecksumAcceptableChunkParameter
: public ::dcsctp::Parameter,
  public ::dcsctp::TLVTrait<::dcsctp::ZeroChecksumAcceptableChunkParameterConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc599ab;
    // NOLINTEND

public:
    // prevent constructor by default
    ZeroChecksumAcceptableChunkParameter& operator=(ZeroChecksumAcceptableChunkParameter const&);
    ZeroChecksumAcceptableChunkParameter(ZeroChecksumAcceptableChunkParameter const&);
    ZeroChecksumAcceptableChunkParameter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    // vIndex: 2
    virtual ::std::string ToString() const /*override*/;

    // vIndex: 0
    virtual ~ZeroChecksumAcceptableChunkParameter() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::ZeroChecksumAcceptableChunkParameter>
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
