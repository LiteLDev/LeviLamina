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

class SelectionContainerTranslatePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::SelectionContainerTranslatePayload>,
  public ::Editor::Network::SelectionContainerCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke84eb6;
    ::ll::UntypedStorage<4, 4> mUnk3e98df;
    ::ll::UntypedStorage<4, 4> mUnkadf4af;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionContainerTranslatePayload& operator=(SelectionContainerTranslatePayload const&);
    SelectionContainerTranslatePayload(SelectionContainerTranslatePayload const&);
    SelectionContainerTranslatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionContainerTranslatePayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SelectionContainerTranslatePayload(::mce::UUID const& id, int dx, int dy, int dz, bool eventOnly);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::UUID const& id, int dx, int dy, int dz, bool eventOnly);
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
