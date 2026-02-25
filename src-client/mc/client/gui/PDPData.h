#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/PDPSectionType.h"

// auto generated forward declare list
// clang-format off
class PDPSection;
struct StoreCatalogItem;
// clang-format on

struct PDPData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StoreCatalogItem&>                                            item;
    ::ll::TypedStorage<8, 16, ::std::map<::PDPSectionType, ::std::unique_ptr<::PDPSection>>> sections;
    // NOLINTEND

public:
    // prevent constructor by default
    PDPData& operator=(PDPData const&);
    PDPData(PDPData const&);
    PDPData();
};
