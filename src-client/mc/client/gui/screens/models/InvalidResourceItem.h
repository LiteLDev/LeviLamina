#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItem.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/resources/InvalidPacksFilterGroup.h"

// auto generated forward declare list
// clang-format off
struct ContentSource;
// clang-format on

struct InvalidResourceItem : public ::ContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::ResourceLocation>        mLocation;
    ::ll::TypedStorage<8, 24, ::InvalidPacksFilterGroup> mFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidResourceItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvalidResourceItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit InvalidResourceItem(::ContentSource* src);
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
