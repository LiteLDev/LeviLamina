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

class WidgetAddRenderPrimComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddRenderPrimComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 76> mUnkf772ab;
    ::ll::UntypedStorage<4, 4>  mUnk6ddb52;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddRenderPrimComponentPayload& operator=(WidgetAddRenderPrimComponentPayload const&);
    WidgetAddRenderPrimComponentPayload(WidgetAddRenderPrimComponentPayload const&);
    WidgetAddRenderPrimComponentPayload();

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
