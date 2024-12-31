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

class WidgetCreateWidgetPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetCreateWidgetPayload>,
  public ::Editor::Network::WidgetCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk8ccb65;
    ::ll::UntypedStorage<1, 1>  mUnk43e0ad;
    ::ll::UntypedStorage<1, 1>  mUnka2b4fa;
    ::ll::UntypedStorage<4, 4>  mUnk784f14;
    ::ll::UntypedStorage<1, 1>  mUnk8212a5;
    ::ll::UntypedStorage<4, 12> mUnkb78a5f;
    ::ll::UntypedStorage<1, 1>  mUnkf8f242;
    ::ll::UntypedStorage<1, 1>  mUnkb7af58;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetCreateWidgetPayload& operator=(WidgetCreateWidgetPayload const&);
    WidgetCreateWidgetPayload(WidgetCreateWidgetPayload const&);
    WidgetCreateWidgetPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetCreateWidgetPayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
