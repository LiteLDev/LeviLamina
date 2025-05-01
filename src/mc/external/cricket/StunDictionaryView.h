#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunAttributeValueType.h"
#include "mc/external/webrtc/RTCErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunAttribute; }
namespace cricket { class StunByteStringAttribute; }
namespace cricket { class StunUInt64Attribute; }
// clang-format on

namespace cricket {

class StunDictionaryView {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCErrorOr<::std::pair<::std::unique_ptr<::cricket::StunUInt64Attribute>, ::std::vector<ushort>>>
    ApplyDelta(::cricket::StunByteStringAttribute const&);

    MCNAPI uint64 GetLength(int) const;

    MCNAPI ::cricket::StunAttribute const* GetOrNull(int, ::std::optional<::cricket::StunAttributeValueType>) const;

    MCNAPI StunDictionaryView();

    MCNAPI ~StunDictionaryView();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::RTCErrorOr<::std::pair<uint64, ::std::deque<::std::unique_ptr<::cricket::StunAttribute>>>>
    ParseDelta(::cricket::StunByteStringAttribute const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
