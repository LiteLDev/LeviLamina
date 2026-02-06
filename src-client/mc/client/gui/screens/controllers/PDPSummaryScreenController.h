#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
struct StoreCatalogItem;
namespace Json { class Value; }
// clang-format on

class PDPSummaryScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StoreCatalogItem const&> mItem;
    ::ll::TypedStorage<4, 4, int>                       mCollectionIndexOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    PDPSummaryScreenController& operator=(PDPSummaryScreenController const&);
    PDPSummaryScreenController(PDPSummaryScreenController const&);
    PDPSummaryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ~PDPSummaryScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
