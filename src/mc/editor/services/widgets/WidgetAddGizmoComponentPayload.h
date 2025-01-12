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

class WidgetAddGizmoComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddGizmoComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnke3ecbc;
    ::ll::UntypedStorage<1, 1> mUnk7ee091;
    ::ll::UntypedStorage<1, 1> mUnk55b3c0;
    ::ll::UntypedStorage<1, 1> mUnkd92587;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddGizmoComponentPayload& operator=(WidgetAddGizmoComponentPayload const&);
    WidgetAddGizmoComponentPayload(WidgetAddGizmoComponentPayload const&);
    WidgetAddGizmoComponentPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetAddGizmoComponentPayload() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
