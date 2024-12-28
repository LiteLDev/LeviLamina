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

class WidgetDeleteGroupPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetDeleteGroupPayload>,
                                 public ::Editor::Network::WidgetCommonBasePayload {
public:
    // prevent constructor by default
    WidgetDeleteGroupPayload& operator=(WidgetDeleteGroupPayload const&);
    WidgetDeleteGroupPayload(WidgetDeleteGroupPayload const&);
    WidgetDeleteGroupPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetDeleteGroupPayload() /*override*/;
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
