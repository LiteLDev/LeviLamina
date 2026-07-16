#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"

namespace Editor::Network {

class WidgetAddTextComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddTextComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka3dfc4;
    ::ll::UntypedStorage<4, 16> mUnkbe93e4;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddTextComponentPayload& operator=(WidgetAddTextComponentPayload const&);
    WidgetAddTextComponentPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WidgetAddTextComponentPayload(::Editor::Network::WidgetAddTextComponentPayload const&);

    MCNAPI ::Editor::Network::WidgetAddTextComponentPayload&
    operator=(::Editor::Network::WidgetAddTextComponentPayload&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::WidgetAddTextComponentPayload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
