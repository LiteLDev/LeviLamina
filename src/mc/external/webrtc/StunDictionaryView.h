#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StunAttribute; }
namespace webrtc { class StunByteStringAttribute; }
namespace webrtc { class StunUInt64Attribute; }
// clang-format on

namespace webrtc {

class StunDictionaryView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4fef4c;
    ::ll::UntypedStorage<8, 16> mUnka049d2;
    ::ll::UntypedStorage<4, 4>  mUnkd86c4f;
    ::ll::UntypedStorage<4, 4>  mUnk8d4193;
    // NOLINTEND

public:
    // prevent constructor by default
    StunDictionaryView& operator=(StunDictionaryView const&);
    StunDictionaryView(StunDictionaryView const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCErrorOr<::std::pair<::std::unique_ptr<::webrtc::StunUInt64Attribute>, ::std::vector<ushort>>>
    ApplyDelta(::webrtc::StunByteStringAttribute const& delta);

    MCNAPI ::webrtc::StunAttribute const*
    GetOrNull(int key, ::std::optional<::webrtc::StunAttributeValueType> type) const;

    MCNAPI StunDictionaryView();

    MCNAPI ~StunDictionaryView();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::RTCErrorOr<::std::pair<uint64, ::std::deque<::std::unique_ptr<::webrtc::StunAttribute>>>>
    ParseDelta(::webrtc::StunByteStringAttribute const& delta);
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

} // namespace webrtc
