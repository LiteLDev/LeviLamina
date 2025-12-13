#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/servicecomponent/utility/StyleData.h"

// auto generated forward declare list
// clang-format off
class Offer;
namespace Json { class Value; }
struct MainMenuScreenModel;
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

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~TextStyle() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~TextStyle() /*override*/;
#endif

    virtual void parse(::Json::Value const& customObject) /*override*/;

    virtual void parse(::Json::Value const& customObject, ::Offer& offer);

    virtual void parse(::Json::Value const& customObject, ::std::shared_ptr<::MainMenuScreenModel> mainMenuScreenModel);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C TextStyle();

    MCNAPI_C ::std::string getLocalizedString() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $parse(::Json::Value const& customObject);

    MCNAPI void $parse(::Json::Value const& customObject, ::Offer& offer);

    MCNAPI void $parse(::Json::Value const& customObject, ::std::shared_ptr<::MainMenuScreenModel> mainMenuScreenModel);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
