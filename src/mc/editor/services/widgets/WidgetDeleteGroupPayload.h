#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetCommonBasePayload.h"

namespace Editor::Network {

class WidgetDeleteGroupPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetDeleteGroupPayload>,
                                 public ::Editor::Network::WidgetCommonBasePayload {
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
