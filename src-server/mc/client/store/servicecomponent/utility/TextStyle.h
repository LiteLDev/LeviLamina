#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/servicecomponent/utility/StyleData.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class Offer;
namespace Json { class Value; }
// clang-format on

struct TextStyle : public ::StyleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf52351;
    ::ll::UntypedStorage<8, 32> mUnk44b2ba;
    ::ll::UntypedStorage<8, 24> mUnk79bac2;
    // NOLINTEND

public:
    // prevent constructor by default
    TextStyle& operator=(TextStyle const&);
    TextStyle(TextStyle const&);
    TextStyle();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextStyle() /*override*/ = default;

    // vIndex: 1
    virtual void parse(::Json::Value const&) /*override*/;

    // vIndex: 3
    virtual void parse(::Json::Value const&, ::Offer&);

    // vIndex: 2
    virtual void parse(::Json::Value const&, ::std::shared_ptr<::MainMenuScreenModel>);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
