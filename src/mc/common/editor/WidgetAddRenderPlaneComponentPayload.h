#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"

namespace Editor::Network {

class WidgetAddRenderPlaneComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddRenderPlaneComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkbe18a4;
    ::ll::UntypedStorage<4, 16> mUnk5c9331;
    ::ll::UntypedStorage<4, 16> mUnkd99805;
    ::ll::UntypedStorage<4, 4>  mUnk1f725a;
    ::ll::UntypedStorage<4, 4>  mUnk1435de;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddRenderPlaneComponentPayload& operator=(WidgetAddRenderPlaneComponentPayload const&);
    WidgetAddRenderPlaneComponentPayload(WidgetAddRenderPlaneComponentPayload const&);
    WidgetAddRenderPlaneComponentPayload();

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
