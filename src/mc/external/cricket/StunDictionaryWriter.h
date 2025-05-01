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
    // member functions
    // NOLINTBEGIN
    MCNAPI void ApplyDeltaAck(::cricket::StunUInt64Attribute const&);

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
