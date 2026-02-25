#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

namespace OreUI {

class LocaleFacet : public ::OreUI::FacetBase<::OreUI::LocaleFacet>, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<8, 8, ::Option*>                        mLanguageOption;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLanguageOptionSubscription;
    ::ll::TypedStorage<8, 32, ::std::string>                   mLocale;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocaleFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _registerObservers();

    MCAPI ::std::string formatDate(int64 time) const;

    MCAPI ::std::string getHowLongAgoAsString(int64 time);

    MCFOLD ::std::string const& getLocale() const;

    MCFOLD ::std::string translate(::std::string const& id) const;

    MCAPI ::std::string
    translateWithParameters(::std::string const& id, ::std::vector<::std::string> const& parameters) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForAppPlatformListener();

    MCNAPI static void** $vftableForFacetBase();
    // NOLINTEND
};

} // namespace OreUI
