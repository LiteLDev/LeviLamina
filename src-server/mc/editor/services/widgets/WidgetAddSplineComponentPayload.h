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

class WidgetAddSplineComponentPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddSplineComponentPayload>, public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4296eb;
    ::ll::UntypedStorage<4, 4> mUnk69b4a7;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddSplineComponentPayload& operator=(WidgetAddSplineComponentPayload const&);
    WidgetAddSplineComponentPayload(WidgetAddSplineComponentPayload const&);
    WidgetAddSplineComponentPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetAddSplineComponentPayload() /*override*/;
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
