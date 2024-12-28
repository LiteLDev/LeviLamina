#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/selection/SelectionContainerCommon.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class SelectionContainerVisiblePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::SelectionContainerVisiblePayload>,
  public ::Editor::Network::SelectionContainerCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk871aa8;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionContainerVisiblePayload& operator=(SelectionContainerVisiblePayload const&);
    SelectionContainerVisiblePayload(SelectionContainerVisiblePayload const&);
    SelectionContainerVisiblePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionContainerVisiblePayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SelectionContainerVisiblePayload(::mce::UUID const& id, bool visible, bool eventOnly);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::UUID const& id, bool visible, bool eventOnly);
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
