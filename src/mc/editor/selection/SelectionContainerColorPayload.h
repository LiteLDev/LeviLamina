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

class SelectionContainerColorPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::SelectionContainerColorPayload>,
  public ::Editor::Network::SelectionContainerCommon {
public:
    // SelectionContainerColorPayload inner types define
    enum class Element : int {
        Outline = 0,
        Fill    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb384dc;
    ::ll::UntypedStorage<4, 16> mUnkd02fed;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionContainerColorPayload& operator=(SelectionContainerColorPayload const&);
    SelectionContainerColorPayload(SelectionContainerColorPayload const&);
    SelectionContainerColorPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionContainerColorPayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
