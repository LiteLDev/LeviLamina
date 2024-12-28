#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    MCAPI ThemeSettingsNewThemeCreatedPayload(
        ::std::string const&                  themeId,
        ::std::optional<::std::string> const& name,
        ::std::optional<::std::string> const& sourceId
    );

    MCAPI ::std::optional<::std::string> const& getSourceId() const;

    MCAPI ::std::string const& getThemeId() const;

    MCAPI ::std::optional<::std::string> const& getThemeName() const;

    MCAPI ::Editor::Network::ThemeSettingsNewThemeCreatedPayload&
    operator=(::Editor::Network::ThemeSettingsNewThemeCreatedPayload&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                  themeId,
        ::std::optional<::std::string> const& name,
        ::std::optional<::std::string> const& sourceId
    );
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
