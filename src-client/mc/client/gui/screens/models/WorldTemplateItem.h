#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ManifestContentItem.h"
#include "mc/world/level/GameType.h"

struct WorldTemplateItem : public ::ManifestContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mWorldId;
    ::ll::TypedStorage<8, 32, ::std::string> mDate;
    ::ll::TypedStorage<4, 4, ::GameType>     mGameType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplateItem() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
