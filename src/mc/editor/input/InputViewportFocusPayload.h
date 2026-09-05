#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class InputViewportFocusPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::InputViewportFocusPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk8753a1;
    // NOLINTEND

public:
    // prevent constructor by default
    InputViewportFocusPayload& operator=(InputViewportFocusPayload const&);
    InputViewportFocusPayload(InputViewportFocusPayload const&);
    InputViewportFocusPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputViewportFocusPayload() /*override*/ = default;
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
