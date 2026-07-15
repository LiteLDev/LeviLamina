#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"

namespace Editor::Network {

class WidgetAddEntityComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddEntityComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1989d9;
    ::ll::UntypedStorage<1, 1>  mUnka6ce39;
    ::ll::UntypedStorage<8, 40> mUnk3d2806;
    ::ll::UntypedStorage<8, 40> mUnk7fbe4d;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddEntityComponentPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WidgetAddEntityComponentPayload(::Editor::Network::WidgetAddEntityComponentPayload const&);

    MCNAPI ::Editor::Network::WidgetAddEntityComponentPayload&
    operator=(::Editor::Network::WidgetAddEntityComponentPayload&&);

    MCNAPI ::Editor::Network::WidgetAddEntityComponentPayload&
    operator=(::Editor::Network::WidgetAddEntityComponentPayload const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::WidgetAddEntityComponentPayload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
