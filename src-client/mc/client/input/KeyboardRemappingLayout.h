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
    // virtual functions
    // NOLINTBEGIN
    virtual ~KeyboardRemappingLayout() /*override*/ = default;

    virtual void setMappingWithRawInput(::std::string const&, int, ::RawInputType) /*override*/;

    virtual ::std::string getMappedKeyName(int key) const /*override*/;

    virtual ::std::string getMappedKeyName(int key, bool checkUserConfiguredSwap) const /*override*/;

    virtual int getAdjustedKey(int key) const /*override*/;

    virtual ::std::string getSaveString(::std::string const& action) const /*override*/;

    virtual int _rawKeyToKey(int, ::RawInputType) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getMappedKeyName(int key) const;

    MCAPI ::std::string $getMappedKeyName(int key, bool checkUserConfiguredSwap) const;

    MCAPI int $getAdjustedKey(int key) const;

    MCAPI ::std::string $getSaveString(::std::string const& action) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
