#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class ThemeSettingsNewThemeCreatedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThemeSettingsNewThemeCreatedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9449c4;
    ::ll::UntypedStorage<8, 40> mUnka8bf8d;
    ::ll::UntypedStorage<8, 40> mUnk772634;
    // NOLINTEND

public:
    // prevent constructor by default
    ThemeSettingsNewThemeCreatedPayload& operator=(ThemeSettingsNewThemeCreatedPayload const&);
    ThemeSettingsNewThemeCreatedPayload(ThemeSettingsNewThemeCreatedPayload const&);
    ThemeSettingsNewThemeCreatedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThemeSettingsNewThemeCreatedPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Editor::Network::ThemeSettingsNewThemeCreatedPayload&
    operator=(::Editor::Network::ThemeSettingsNewThemeCreatedPayload&&);
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
