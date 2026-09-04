#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetCommonBasePayload.h"

namespace Editor::Network {

class WidgetGroupStateChangePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetGroupStateChangePayload>,
  public ::Editor::Network::WidgetCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnka247df;
    ::ll::UntypedStorage<1, 2> mUnkd350f0;
    ::ll::UntypedStorage<1, 2> mUnk627a00;
    ::ll::UntypedStorage<1, 2> mUnkdb12eb;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetGroupStateChangePayload& operator=(WidgetGroupStateChangePayload const&);
    WidgetGroupStateChangePayload(WidgetGroupStateChangePayload const&);
    WidgetGroupStateChangePayload();

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
