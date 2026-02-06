#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LinksToStyle;
// clang-format on

struct DefaultLayoutRequestEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LinksToStyle const&> mLinksToStyle;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultLayoutRequestEntry& operator=(DefaultLayoutRequestEntry const&);
    DefaultLayoutRequestEntry(DefaultLayoutRequestEntry const&);
    DefaultLayoutRequestEntry();
};
