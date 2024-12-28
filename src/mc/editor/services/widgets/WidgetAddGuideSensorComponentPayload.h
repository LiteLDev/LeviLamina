#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class WidgetAddGuideSensorComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddGuideSensorComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // prevent constructor by default
    WidgetAddGuideSensorComponentPayload& operator=(WidgetAddGuideSensorComponentPayload const&);
    WidgetAddGuideSensorComponentPayload(WidgetAddGuideSensorComponentPayload const&);
    WidgetAddGuideSensorComponentPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetAddGuideSensorComponentPayload() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
