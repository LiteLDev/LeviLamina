#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetCommonBasePayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class WidgetChangeRenderPrimComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetChangeRenderPrimComponentPayload>,
  public ::Editor::Network::WidgetCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfb0d82;
    ::ll::UntypedStorage<4, 48> mUnk26db44;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetChangeRenderPrimComponentPayload& operator=(WidgetChangeRenderPrimComponentPayload const&);
    WidgetChangeRenderPrimComponentPayload(WidgetChangeRenderPrimComponentPayload const&);
    WidgetChangeRenderPrimComponentPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetChangeRenderPrimComponentPayload() /*override*/ = default;
    // NOLINTEND

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
