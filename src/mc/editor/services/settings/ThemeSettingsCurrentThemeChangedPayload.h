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
    // vIndex: 0
    virtual ~ThemeSettingsCurrentThemeChangedPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ThemeSettingsCurrentThemeChangedPayload(::std::string const& themeId);

    MCAPI ::std::string const& getThemeId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& themeId);
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
