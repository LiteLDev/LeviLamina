#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItem.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/resources/InvalidPacksFilterGroup.h"

struct InvalidResourceItem : public ::ContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::ResourceLocation>        mLocation;
    ::ll::TypedStorage<8, 24, ::InvalidPacksFilterGroup> mFilter;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvalidResourceItem() /*override*/ = default;
    // NOLINTEND
};
