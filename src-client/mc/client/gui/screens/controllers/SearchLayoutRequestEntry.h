#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LinksToStyle;
namespace catalog { struct SearchInfo; }
// clang-format on

struct SearchLayoutRequestEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LinksToStyle const&>        mLinksToStyle;
    ::ll::TypedStorage<8, 8, ::catalog::SearchInfo const&> mSearchInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    SearchLayoutRequestEntry& operator=(SearchLayoutRequestEntry const&);
    SearchLayoutRequestEntry(SearchLayoutRequestEntry const&);
    SearchLayoutRequestEntry();
};
