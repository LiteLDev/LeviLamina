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

class WidgetAddVolumeOutlineComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddVolumeOutlineComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnka420c8;
    ::ll::UntypedStorage<4, 16> mUnk5cfecf;
    ::ll::UntypedStorage<4, 16> mUnkbe769a;
    ::ll::UntypedStorage<4, 16> mUnk82c17c;
    ::ll::UntypedStorage<4, 16> mUnkb79290;
    ::ll::UntypedStorage<1, 1>  mUnkb4f845;
    ::ll::UntypedStorage<1, 1>  mUnk20e000;
    ::ll::UntypedStorage<1, 1>  mUnkb08d42;
    ::ll::UntypedStorage<1, 1>  mUnkd05602;
    ::ll::UntypedStorage<4, 12> mUnke0cf13;
    ::ll::UntypedStorage<4, 12> mUnk52a6ae;
    ::ll::UntypedStorage<8, 96> mUnk2e30a5;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddVolumeOutlineComponentPayload& operator=(WidgetAddVolumeOutlineComponentPayload const&);
    WidgetAddVolumeOutlineComponentPayload(WidgetAddVolumeOutlineComponentPayload const&);
    WidgetAddVolumeOutlineComponentPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetAddVolumeOutlineComponentPayload() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
