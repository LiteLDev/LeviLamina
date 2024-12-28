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

class WidgetComponentStateChangePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetComponentStateChangePayload>,
  public ::Editor::Network::WidgetCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2b0e3b;
    ::ll::UntypedStorage<1, 2>  mUnk24d45e;
    ::ll::UntypedStorage<4, 16> mUnk17e28b;
    ::ll::UntypedStorage<1, 2>  mUnk1aaa42;
    ::ll::UntypedStorage<8, 40> mUnk29f9b7;
    ::ll::UntypedStorage<4, 20> mUnk4438d1;
    ::ll::UntypedStorage<1, 2>  mUnkb026b4;
    ::ll::UntypedStorage<1, 2>  mUnkd9f959;
    ::ll::UntypedStorage<8, 40> mUnk109fbc;
    ::ll::UntypedStorage<4, 8>  mUnk57bddd;
    ::ll::UntypedStorage<8, 32> mUnkedef13;
    ::ll::UntypedStorage<1, 2>  mUnka42bc2;
    ::ll::UntypedStorage<1, 2>  mUnk3b541e;
    ::ll::UntypedStorage<4, 16> mUnka02892;
    ::ll::UntypedStorage<4, 16> mUnkb5e5e1;
    ::ll::UntypedStorage<1, 2>  mUnk2e1da4;
    ::ll::UntypedStorage<4, 20> mUnkd3f9e1;
    ::ll::UntypedStorage<4, 20> mUnka94613;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetComponentStateChangePayload& operator=(WidgetComponentStateChangePayload const&);
    WidgetComponentStateChangePayload(WidgetComponentStateChangePayload const&);
    WidgetComponentStateChangePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetComponentStateChangePayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Editor::Network::WidgetComponentStateChangePayload&
    operator=(::Editor::Network::WidgetComponentStateChangePayload&&);
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
