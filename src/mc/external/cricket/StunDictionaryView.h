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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk773fb7;
    ::ll::UntypedStorage<8, 16> mUnk749bd6;
    ::ll::UntypedStorage<4, 4>  mUnka98cf2;
    ::ll::UntypedStorage<4, 4>  mUnk7cafa1;
    // NOLINTEND

public:
    // prevent constructor by default
    StunDictionaryView& operator=(StunDictionaryView const&);
    StunDictionaryView(StunDictionaryView const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCErrorOr<::std::pair<::std::unique_ptr<::cricket::StunUInt64Attribute>, ::std::vector<ushort>>>
    ApplyDelta(::cricket::StunByteStringAttribute const& delta);

    MCNAPI uint64 GetLength(int key) const;

    MCNAPI ::cricket::StunAttribute const*
    GetOrNull(int key, ::std::optional<::cricket::StunAttributeValueType> type) const;

    MCNAPI StunDictionaryView();

    MCNAPI ~StunDictionaryView();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::RTCErrorOr<::std::pair<uint64, ::std::deque<::std::unique_ptr<::cricket::StunAttribute>>>>
    ParseDelta(::cricket::StunByteStringAttribute const& delta);
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
