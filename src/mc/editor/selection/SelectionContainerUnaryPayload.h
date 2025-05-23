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

class SelectionContainerUnaryPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::SelectionContainerUnaryPayload>,
  public ::Editor::Network::SelectionContainerCommon {
public:
    // SelectionContainerUnaryPayload inner types define
    enum class UnaryAction : int {
        Pop   = 0,
        Clear = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk245883;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionContainerUnaryPayload& operator=(SelectionContainerUnaryPayload const&);
    SelectionContainerUnaryPayload(SelectionContainerUnaryPayload const&);
    SelectionContainerUnaryPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionContainerUnaryPayload() /*override*/ = default;
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
