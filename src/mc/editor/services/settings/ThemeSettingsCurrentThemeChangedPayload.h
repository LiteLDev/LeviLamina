#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class ThemeSettingsCurrentThemeChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThemeSettingsCurrentThemeChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6f01b2;
    // NOLINTEND

public:
    // prevent constructor by default
    ThemeSettingsCurrentThemeChangedPayload& operator=(ThemeSettingsCurrentThemeChangedPayload const&);
    ThemeSettingsCurrentThemeChangedPayload(ThemeSettingsCurrentThemeChangedPayload const&);
    ThemeSettingsCurrentThemeChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThemeSettingsCurrentThemeChangedPayload() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
