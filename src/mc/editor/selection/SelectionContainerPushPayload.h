#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/selection/SelectionContainerCommon.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolumeItem;
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class SelectionContainerPushPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::SelectionContainerPushPayload>,
  public ::Editor::Network::SelectionContainerCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 40> mUnk9d4152;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionContainerPushPayload& operator=(SelectionContainerPushPayload const&);
    SelectionContainerPushPayload(SelectionContainerPushPayload const&);
    SelectionContainerPushPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionContainerPushPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SelectionContainerPushPayload(::mce::UUID const& id, ::CompoundBlockVolumeItem const& item, bool eventOnly);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::UUID const& id, ::CompoundBlockVolumeItem const& item, bool eventOnly);
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
