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
    ::ll::TypedStorage<8, 16, ::std::string_view> mControllerIconPath;
    ::ll::TypedStorage<1, 1, bool>                mGamepadButtonsXYAreSwapped;
    ::ll::TypedStorage<1, 1, bool>                mGamepadButtonsABAreSwapped;
    // NOLINTEND

public:
    // prevent constructor by default
    GamePadRemappingLayout();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GamePadRemappingLayout() /*override*/ = default;

    virtual void setMappingWithRawInput(::std::string const& action, int key, ::RawInputType type) /*override*/;

    virtual ::std::string getMappedKeyName(int key) const /*override*/;

    virtual ::std::string getMappedKeyName(int key, bool checkUserConfiguredSwap) const /*override*/;

    virtual ::std::string getMappedKeyName(::Keymapping const& keyMapping) const /*override*/;

    virtual ::std::string getSaveString(::std::string const& action) const /*override*/;

    virtual int getAdjustedKey(int key) const /*override*/;

    virtual ::std::string getKeySpriteLocation(
        int        key,
        bool       checkUserConfiguredSwap,
        bool       checkPlatformButtonSwapping,
        ::IconSize iconSize
    ) const /*override*/;

    virtual ::std::string getKeySpriteLocation(::Keymapping const& keyMapping) const /*override*/;

    virtual int _rawKeyToKey(int rawInputKey, ::RawInputType rawInputType) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GamePadRemappingLayout(bool swapAB, bool swapXY);

    MCNAPI ::std::string _getKeySpriteLocationInternal(
        int        key,
        bool       checkUserConfiguredButtonSwapping,
        bool       checkPlatformButtonSwapping,
        ::IconSize iconSize
    ) const;

    MCNAPI ::std::string const _getMappedKeyNameInternal(int key, bool const checkUserConfiguredButtonSwapping) const;

    MCNAPI void _swapGamepadKeyBindings(int key1, int key2);

    MCNAPI ::std::string getKeySpriteName(int key, bool checkPlatformButtonSwapping) const;

    MCNAPI ::std::string getKeyTextName(int key, bool checkUserConfiguredButtonSwapping) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool swapAB, bool swapXY);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setMappingWithRawInput(::std::string const& action, int key, ::RawInputType type);

    MCNAPI ::std::string $getMappedKeyName(int key) const;

    MCNAPI ::std::string $getMappedKeyName(int key, bool checkUserConfiguredSwap) const;

    MCNAPI ::std::string $getMappedKeyName(::Keymapping const& keyMapping) const;

    MCNAPI ::std::string $getSaveString(::std::string const& action) const;

    MCNAPI int $getAdjustedKey(int key) const;

    MCNAPI ::std::string $getKeySpriteLocation(
        int        key,
        bool       checkUserConfiguredSwap,
        bool       checkPlatformButtonSwapping,
        ::IconSize iconSize
    ) const;

    MCNAPI ::std::string $getKeySpriteLocation(::Keymapping const& keyMapping) const;

    MCNAPI int $_rawKeyToKey(int rawInputKey, ::RawInputType rawInputType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
