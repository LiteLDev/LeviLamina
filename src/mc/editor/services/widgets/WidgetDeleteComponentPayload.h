#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetCommonBasePayload.h"

namespace Editor::Network {

class WidgetDeleteComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetDeleteComponentPayload>,
  public ::Editor::Network::WidgetCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdc988e;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetDeleteComponentPayload& operator=(WidgetDeleteComponentPayload const&);
    WidgetDeleteComponentPayload(WidgetDeleteComponentPayload const&);
    WidgetDeleteComponentPayload();

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
