#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetCommonBasePayload.h"

namespace Editor::Network {

class WidgetDeleteWidgetPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetDeleteWidgetPayload>,
  public ::Editor::Network::WidgetCommonBasePayload {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WidgetDeleteWidgetPayload() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
