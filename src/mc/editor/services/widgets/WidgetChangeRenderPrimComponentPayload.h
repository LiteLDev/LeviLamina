#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetCommonBasePayload.h"

namespace Editor::Network {

class WidgetChangeRenderPrimComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetChangeRenderPrimComponentPayload>,
  public ::Editor::Network::WidgetCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkfb0d82;
    ::ll::UntypedStorage<8, 112> mUnkd56165;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetChangeRenderPrimComponentPayload& operator=(WidgetChangeRenderPrimComponentPayload const&);
    WidgetChangeRenderPrimComponentPayload(WidgetChangeRenderPrimComponentPayload const&);
    WidgetChangeRenderPrimComponentPayload();

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
