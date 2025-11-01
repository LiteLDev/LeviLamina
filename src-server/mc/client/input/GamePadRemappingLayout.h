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
    ::ll::UntypedStorage<1, 1> mUnk143261;
    ::ll::UntypedStorage<1, 1> mUnkff62c4;
    // NOLINTEND

public:
    // prevent constructor by default
    GamePadRemappingLayout& operator=(GamePadRemappingLayout const&);
    GamePadRemappingLayout(GamePadRemappingLayout const&);
    GamePadRemappingLayout();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GamePadRemappingLayout() /*override*/ = default;

    // vIndex: 1
    virtual void setMappingWithRawInput(::std::string const&, int, ::RawInputType) /*override*/;

    // vIndex: 6
    virtual ::std::string getMappedKeyName(int) const /*override*/;

    // vIndex: 5
    virtual ::std::string getMappedKeyName(int, bool) const /*override*/;

    // vIndex: 4
    virtual ::std::string getMappedKeyName(::Keymapping const&) const /*override*/;

    // vIndex: 3
    virtual ::std::string getSaveString(::std::string const&) const /*override*/;

    // vIndex: 2
    virtual int getAdjustedKey(int) const /*override*/;

    // vIndex: 8
    virtual ::std::string getKeySpriteLocation(int, ::IconSize) const /*override*/;

    // vIndex: 7
    virtual ::std::string getKeySpriteLocation(::Keymapping const&) const /*override*/;

    // vIndex: 9
    virtual int _rawKeyToKey(int, ::RawInputType) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
