#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"

namespace Editor::Network {

class WidgetAddGuideSensorComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddGuideSensorComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetAddGuideSensorComponentPayload() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
