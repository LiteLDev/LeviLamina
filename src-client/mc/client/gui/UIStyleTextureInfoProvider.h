#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IStyleTextureInfoProvider.h"

// auto generated forward declare list
// clang-format off
class IUIRepository;
// clang-format on

class UIStyleTextureInfoProvider : public ::IStyleTextureInfoProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IUIRepository&> mUIRepository;
    // NOLINTEND

public:
    // prevent constructor by default
    UIStyleTextureInfoProvider& operator=(UIStyleTextureInfoProvider const&);
    UIStyleTextureInfoProvider(UIStyleTextureInfoProvider const&);
    UIStyleTextureInfoProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIStyleTextureInfoProvider() /*override*/ = default;

    virtual ::std::optional<::IStyleTextureInfoProvider::Info> getStyleTextureInfo(::std::string_view texturePath) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::IStyleTextureInfoProvider::Info> $getStyleTextureInfo(::std::string_view texturePath) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
