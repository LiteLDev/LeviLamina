#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"

namespace Editor::Network {

class WidgetAddClipboardComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddClipboardComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka36b14;
    ::ll::UntypedStorage<1, 1>  mUnk13d350;
    ::ll::UntypedStorage<1, 1>  mUnk130de2;
    ::ll::UntypedStorage<4, 12> mUnk597bd9;
    ::ll::UntypedStorage<4, 12> mUnk975c08;
    ::ll::UntypedStorage<1, 1>  mUnk7d7c68;
    ::ll::UntypedStorage<4, 16> mUnkfb54ec;
    ::ll::UntypedStorage<4, 16> mUnk6d80b4;
    ::ll::UntypedStorage<4, 16> mUnk4f361a;
    ::ll::UntypedStorage<4, 16> mUnk5ecd30;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddClipboardComponentPayload& operator=(WidgetAddClipboardComponentPayload const&);
    WidgetAddClipboardComponentPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WidgetAddClipboardComponentPayload(::Editor::Network::WidgetAddClipboardComponentPayload const&);

    MCNAPI ::Editor::Network::WidgetAddClipboardComponentPayload&
    operator=(::Editor::Network::WidgetAddClipboardComponentPayload&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::WidgetAddClipboardComponentPayload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
