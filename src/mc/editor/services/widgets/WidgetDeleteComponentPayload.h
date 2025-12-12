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
    // virtual functions
    // NOLINTBEGIN
    virtual ~WidgetDeleteComponentPayload() /*override*/ = default;
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
