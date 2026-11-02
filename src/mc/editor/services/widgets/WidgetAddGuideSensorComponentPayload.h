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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk95e0ed;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddGuideSensorComponentPayload& operator=(WidgetAddGuideSensorComponentPayload const&);
    WidgetAddGuideSensorComponentPayload(WidgetAddGuideSensorComponentPayload const&);
    WidgetAddGuideSensorComponentPayload();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
