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

class WidgetAddGridComponentPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddGridComponentPayload>, public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke53a23;
    ::ll::UntypedStorage<4, 16> mUnk848996;
    ::ll::UntypedStorage<4, 8> mUnk80f7a0;
    ::ll::UntypedStorage<4, 8> mUnkc81778;
    ::ll::UntypedStorage<4, 8> mUnk9d704e;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddGridComponentPayload& operator=(WidgetAddGridComponentPayload const&);
    WidgetAddGridComponentPayload(WidgetAddGridComponentPayload const&);
    WidgetAddGridComponentPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetAddGridComponentPayload() /*override*/;
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

}
