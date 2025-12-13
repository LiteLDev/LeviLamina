#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/IconSize.h"
#include "mc/client/input/RemappingLayout.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class Keymapping;
// clang-format on

class GamePadRemappingLayout : public ::RemappingLayout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkba8bff;
    ::ll::UntypedStorage<1, 1>  mUnk143261;
    ::ll::UntypedStorage<1, 1>  mUnkff62c4;
    // NOLINTEND

public:
    // prevent constructor by default
    GamePadRemappingLayout& operator=(GamePadRemappingLayout const&);
    GamePadRemappingLayout(GamePadRemappingLayout const&);
    GamePadRemappingLayout();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GamePadRemappingLayout() /*override*/ = default;

    virtual void setMappingWithRawInput(::std::string const&, int, ::RawInputType) /*override*/;

    virtual ::std::string getMappedKeyName(int key) const /*override*/;

    virtual ::std::string getMappedKeyName(int key, bool checkUserConfiguredSwap) const /*override*/;

    virtual ::std::string getMappedKeyName(::Keymapping const& keyMapping) const /*override*/;

    virtual ::std::string getSaveString(::std::string const& action) const /*override*/;

    virtual int getAdjustedKey(int key) const /*override*/;

    virtual ::std::string getKeySpriteLocation(int key, ::IconSize iconSize) const /*override*/;

    virtual ::std::string getKeySpriteLocation(::Keymapping const& keyMapping) const /*override*/;

    virtual int _rawKeyToKey(int, ::RawInputType) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::std::string
    _getKeySpriteLocationInternal(int key, bool checkUserConfiguredButtonSwapping, ::IconSize iconSize) const;

    MCNAPI_C ::std::string const _getMappedKeyNameInternal(int key, bool checkUserConfiguredButtonSwapping) const;

    MCNAPI_C void _swapGamepadKeyBindings(int key1, int key2);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::string $getMappedKeyName(int key) const;

    MCNAPI ::std::string $getMappedKeyName(int key, bool checkUserConfiguredSwap) const;

    MCNAPI ::std::string $getMappedKeyName(::Keymapping const& keyMapping) const;

    MCNAPI ::std::string $getSaveString(::std::string const& action) const;

    MCNAPI int $getAdjustedKey(int key) const;

    MCNAPI ::std::string $getKeySpriteLocation(int key, ::IconSize iconSize) const;

    MCNAPI ::std::string $getKeySpriteLocation(::Keymapping const& keyMapping) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
