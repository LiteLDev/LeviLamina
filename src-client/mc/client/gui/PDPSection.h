#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/PDPSectionType.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class ScreenController;
// clang-format on

class PDPSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PDPSectionType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>   mSectionTitle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PDPSection() = default;

    virtual ::std::unique_ptr<::ScreenController> makeScreenController(::std::shared_ptr<::MainMenuScreenModel>);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
