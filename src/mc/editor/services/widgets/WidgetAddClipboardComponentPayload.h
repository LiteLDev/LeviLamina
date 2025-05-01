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

class WidgetAddClipboardComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddClipboardComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk27ccf6;
    ::ll::UntypedStorage<1, 1>  mUnk13d350;
    ::ll::UntypedStorage<1, 1>  mUnk130de2;
    ::ll::UntypedStorage<4, 12> mUnk597bd9;
    ::ll::UntypedStorage<4, 12> mUnk975c08;
    ::ll::UntypedStorage<1, 1>  mUnka491e3;
    ::ll::UntypedStorage<4, 16> mUnkf2fade;
    ::ll::UntypedStorage<4, 16> mUnk6b03a9;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddClipboardComponentPayload& operator=(WidgetAddClipboardComponentPayload const&);
    WidgetAddClipboardComponentPayload(WidgetAddClipboardComponentPayload const&);
    WidgetAddClipboardComponentPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetAddClipboardComponentPayload() /*override*/;
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
