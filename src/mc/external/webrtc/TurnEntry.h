#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct AsyncSocketPacketOptions; }
// clang-format on

namespace webrtc {

class TurnEntry : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // TurnEntry inner types define
    enum class BindState : int {
        Unbound = 0,
        Binding = 1,
        Bound   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkef027f;
    ::ll::UntypedStorage<8, 8>  mUnke0dad3;
    ::ll::UntypedStorage<2, 2>  mUnk6fd071;
    ::ll::UntypedStorage<8, 80> mUnk55fcff;
    ::ll::UntypedStorage<4, 4>  mUnk6f0724;
    ::ll::UntypedStorage<8, 24> mUnk98c17f;
    ::ll::UntypedStorage<8, 8>  mUnkf49246;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnEntry& operator=(TurnEntry const&);
    TurnEntry(TurnEntry const&);
    TurnEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TurnEntry() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void OnChannelBindSuccess();

    MCNAPI void OnCreatePermissionSuccess();

    MCNAPI int Send(void const* data, uint64 size, bool payload, ::webrtc::AsyncSocketPacketOptions const& options);

    MCNAPI void SendChannelBindRequest(int delay);

    MCNAPI void SendCreatePermissionRequest(int delay);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
