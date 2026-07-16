#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"

namespace Editor::Network {

class WidgetAddRenderPrimComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddRenderPrimComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk3479ea;
    ::ll::UntypedStorage<4, 4>   mUnk6ddb52;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddRenderPrimComponentPayload& operator=(WidgetAddRenderPrimComponentPayload const&);
    WidgetAddRenderPrimComponentPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WidgetAddRenderPrimComponentPayload(::Editor::Network::WidgetAddRenderPrimComponentPayload const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::WidgetAddRenderPrimComponentPayload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
