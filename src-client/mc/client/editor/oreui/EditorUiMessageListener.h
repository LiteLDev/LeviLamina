#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ClientNetworkEventListener.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ClientMessageEvent;
// clang-format on

namespace OreUI {

class EditorUiMessageListener : public ::ClientNetworkEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk273ee6;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorUiMessageListener& operator=(EditorUiMessageListener const&);
    EditorUiMessageListener(EditorUiMessageListener const&);
    EditorUiMessageListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorUiMessageListener() /*override*/ = default;

    virtual ::EventResult onMessage(::ClientMessageEvent const& messageEvent) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onMessage(::ClientMessageEvent const& messageEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
