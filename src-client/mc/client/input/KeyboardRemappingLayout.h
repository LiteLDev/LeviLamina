#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/input/RemappingLayout.h"
#include "mc/deps/input/enums/RawInputType.h"

class KeyboardRemappingLayout : public ::RemappingLayout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::KeyboardType const> mKeyboardType;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyboardRemappingLayout();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~KeyboardRemappingLayout() /*override*/ = default;

    virtual void
    setMappingWithRawInput(::std::string const& action, int rawKeyIndex, ::RawInputType rawKeyType) /*override*/;

    virtual ::std::string getMappedKeyName(int key) const /*override*/;

    virtual ::std::string getMappedKeyName(int key, bool checkUserConfiguredSwap) const /*override*/;

    virtual int getAdjustedKey(int key) const /*override*/;

    virtual ::std::string getSaveString(::std::string const& action) const /*override*/;

    virtual int _rawKeyToKey(int rawKeyIndex, ::RawInputType rawInputType) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit KeyboardRemappingLayout(::KeyboardType keyboardType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::KeyboardType keyboardType);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setMappingWithRawInput(::std::string const& action, int rawKeyIndex, ::RawInputType rawKeyType);

    MCNAPI ::std::string $getMappedKeyName(int key) const;

    MCNAPI ::std::string $getMappedKeyName(int key, bool checkUserConfiguredSwap) const;

    MCNAPI int $getAdjustedKey(int key) const;

    MCNAPI ::std::string $getSaveString(::std::string const& action) const;

    MCNAPI int $_rawKeyToKey(int rawKeyIndex, ::RawInputType rawInputType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
