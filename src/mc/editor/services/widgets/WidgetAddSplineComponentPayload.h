#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"

namespace Editor::Network {

class WidgetAddSplineComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddSplineComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbb722d;
    ::ll::UntypedStorage<4, 4>  mUnk69b4a7;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddSplineComponentPayload& operator=(WidgetAddSplineComponentPayload const&);
    WidgetAddSplineComponentPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WidgetAddSplineComponentPayload(::Editor::Network::WidgetAddSplineComponentPayload const&);

    MCNAPI ::Editor::Network::WidgetAddSplineComponentPayload&
    operator=(::Editor::Network::WidgetAddSplineComponentPayload&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::WidgetAddSplineComponentPayload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
