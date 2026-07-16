#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"

namespace Editor::Network {

class WidgetAddGizmoComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddGizmoComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnke3ecbc;
    ::ll::UntypedStorage<1, 1>  mUnk7ee091;
    ::ll::UntypedStorage<1, 1>  mUnk55b3c0;
    ::ll::UntypedStorage<1, 1>  mUnkd92587;
    ::ll::UntypedStorage<4, 16> mUnkd2003f;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddGizmoComponentPayload& operator=(WidgetAddGizmoComponentPayload const&);
    WidgetAddGizmoComponentPayload(WidgetAddGizmoComponentPayload const&);
    WidgetAddGizmoComponentPayload();

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
