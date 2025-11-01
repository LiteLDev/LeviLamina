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

class WidgetAddBoundingBoxComponentPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddBoundingBoxComponentPayload>, public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk9e9eb8;
    ::ll::UntypedStorage<4, 16> mUnkf01d1e;
    ::ll::UntypedStorage<4, 16> mUnk399561;
    ::ll::UntypedStorage<1, 1> mUnkbc6a11;
    ::ll::UntypedStorage<1, 1> mUnk28a0e3;
    ::ll::UntypedStorage<4, 12> mUnk35f7ed;
    ::ll::UntypedStorage<4, 12> mUnk1f0413;
    ::ll::UntypedStorage<1, 1> mUnk4fe6d5;
    ::ll::UntypedStorage<4, 4> mUnk9025fb;
    ::ll::UntypedStorage<1, 1> mUnk619aa1;
    ::ll::UntypedStorage<4, 12> mUnk887b20;
    ::ll::UntypedStorage<4, 12> mUnk35eaf6;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddBoundingBoxComponentPayload& operator=(WidgetAddBoundingBoxComponentPayload const&);
    WidgetAddBoundingBoxComponentPayload(WidgetAddBoundingBoxComponentPayload const&);
    WidgetAddBoundingBoxComponentPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetAddBoundingBoxComponentPayload() /*override*/;
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
