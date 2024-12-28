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
    // prevent constructor by default
    StunDictionaryWriter& operator=(StunDictionaryWriter const&);
    StunDictionaryWriter(StunDictionaryWriter const&);
    StunDictionaryWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ApplyDeltaAck(::cricket::StunUInt64Attribute const&);

    MCAPI ::std::unique_ptr<::cricket::StunByteStringAttribute> CreateDelta();

    MCAPI void Disable();

    MCAPI ~StunDictionaryWriter();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
