#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/IconSize.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class Keymapping;
// clang-format on

class RemappingLayout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkec8525;
    ::ll::UntypedStorage<8, 24> mUnkfb6044;
    // NOLINTEND

public:
    // prevent constructor by default
    RemappingLayout& operator=(RemappingLayout const&);
    RemappingLayout(RemappingLayout const&);
    RemappingLayout();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RemappingLayout() = default;

    // vIndex: 1
    virtual void setMappingWithRawInput(::std::string const&, int, ::RawInputType);

    // vIndex: 2
    virtual int getAdjustedKey(int) const;

    // vIndex: 3
    virtual ::std::string getSaveString(::std::string const&) const;

    // vIndex: 6
    virtual ::std::string getMappedKeyName(int) const;

    // vIndex: 5
    virtual ::std::string getMappedKeyName(int, bool) const;

    // vIndex: 4
    virtual ::std::string getMappedKeyName(::Keymapping const&) const;

    // vIndex: 8
    virtual ::std::string getKeySpriteLocation(int, ::IconSize) const;

    // vIndex: 7
    virtual ::std::string getKeySpriteLocation(::Keymapping const&) const;

    // vIndex: 9
    virtual int _rawKeyToKey(int, ::RawInputType) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
