#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class ThemeSettingsThemeDeletedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ThemeSettingsThemeDeletedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfbe353;
    // NOLINTEND

public:
    // prevent constructor by default
    ThemeSettingsThemeDeletedPayload& operator=(ThemeSettingsThemeDeletedPayload const&);
    ThemeSettingsThemeDeletedPayload(ThemeSettingsThemeDeletedPayload const&);
    ThemeSettingsThemeDeletedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThemeSettingsThemeDeletedPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ThemeSettingsThemeDeletedPayload(::std::string const& themeId);

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
