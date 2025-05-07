#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/selection/SelectionContainerCommon.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
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
    virtual ~SelectionContainerTranslatePayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
