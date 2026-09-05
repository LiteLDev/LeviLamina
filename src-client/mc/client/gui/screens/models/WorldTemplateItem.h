#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ManifestContentItem.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
struct ContentSource;
// clang-format on

struct WorldTemplateItem : public ::ManifestContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mWorldId;
    ::ll::TypedStorage<8, 32, ::std::string> mDate;
    ::ll::TypedStorage<4, 4, ::GameType>     mGameType;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplateItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldTemplateItem(::ContentSource* src);
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
