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

    virtual ::std::string getMappedKeyName(int key, bool) const /*override*/;

    virtual int getAdjustedKey(int key) const /*override*/;

    virtual ::std::string getSaveString(::std::string const& action) const /*override*/;

    virtual int _rawKeyToKey(int rawKeyIndex, ::RawInputType rawInputType) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit KeyboardRemappingLayout(::KeyboardType keyboardType);

    MCFOLD ::KeyboardType getKeyboardType() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::KeyboardType keyboardType);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setMappingWithRawInput(::std::string const& action, int rawKeyIndex, ::RawInputType rawKeyType);

    MCAPI ::std::string $getMappedKeyName(int key) const;

    MCAPI ::std::string $getMappedKeyName(int key, bool) const;

    MCAPI int $getAdjustedKey(int key) const;

    MCAPI ::std::string $getSaveString(::std::string const& action) const;

    MCAPI int $_rawKeyToKey(int rawKeyIndex, ::RawInputType rawInputType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
