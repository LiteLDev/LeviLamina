#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Settings { struct GraphicsProps; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class GraphicsSettingsChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::GraphicsSettingsChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 3> mUnkfa4646;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphicsSettingsChangedPayload& operator=(GraphicsSettingsChangedPayload const&);
    GraphicsSettingsChangedPayload(GraphicsSettingsChangedPayload const&);
    GraphicsSettingsChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GraphicsSettingsChangedPayload() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GraphicsSettingsChangedPayload(::Editor::Settings::GraphicsProps const& props);

    MCAPI ::Editor::Settings::GraphicsProps const& getGraphicsSettingsProps() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::Settings::GraphicsProps const& props);
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
