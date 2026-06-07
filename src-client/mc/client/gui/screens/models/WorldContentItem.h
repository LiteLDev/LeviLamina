#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItem.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/GameType.h"

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
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldContentItem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
