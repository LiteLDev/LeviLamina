#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItem.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
struct ContentSource;
// clang-format on

struct WorldContentItem : public ::ContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                     mWorldId;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mIconPath;
    ::ll::TypedStorage<8, 32, ::std::string>                     mDate;
    ::ll::TypedStorage<8, 8, int64>                              mLastUsed;
    ::ll::TypedStorage<4, 4, ::GameType>                         mGameType;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldContentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldContentItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldContentItem(::ContentSource* src);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContentSource* src);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
