#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunByteStringAttribute; }
namespace cricket { class StunUInt64Attribute; }
// clang-format on

namespace cricket {

class StunDictionaryWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkf1118b;
    ::ll::UntypedStorage<8, 8>  mUnk6a167c;
    ::ll::UntypedStorage<8, 8>  mUnkc114f7;
    ::ll::UntypedStorage<8, 24> mUnk3cceec;
    ::ll::UntypedStorage<8, 16> mUnk1af2b6;
    // NOLINTEND

public:
    // prevent constructor by default
    StunDictionaryWriter& operator=(StunDictionaryWriter const&);
    StunDictionaryWriter(StunDictionaryWriter const&);
    StunDictionaryWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ApplyDeltaAck(::cricket::StunUInt64Attribute const& ack);

    MCNAPI ::std::unique_ptr<::cricket::StunByteStringAttribute> CreateDelta();

    MCNAPI void Disable();

    MCNAPI ~StunDictionaryWriter();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
