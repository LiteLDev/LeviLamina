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
    ::ll::UntypedStorage<1, 11> mUnkfa4646;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    GraphicsSettingsChangedPayload& operator=(GraphicsSettingsChangedPayload const&);
    GraphicsSettingsChangedPayload(GraphicsSettingsChangedPayload const&);
    GraphicsSettingsChangedPayload();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    GraphicsSettingsChangedPayload& operator=(GraphicsSettingsChangedPayload const&);
    GraphicsSettingsChangedPayload(GraphicsSettingsChangedPayload const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI GraphicsSettingsChangedPayload();
#endif

    MCNAPI explicit GraphicsSettingsChangedPayload(::Editor::Settings::GraphicsProps const& props);

    MCNAPI ::Editor::Settings::GraphicsProps const& getGraphicsSettingsProps() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif

    MCNAPI void* $ctor(::Editor::Settings::GraphicsProps const& props);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
