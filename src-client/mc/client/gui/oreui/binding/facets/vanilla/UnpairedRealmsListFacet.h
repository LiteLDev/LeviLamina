#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsList; }
// clang-format on

namespace OreUI {

class UnpairedRealmsListFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::UnpairedRealmsListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsList>> mRealmsList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mRealmsListSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    UnpairedRealmsListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UnpairedRealmsListFacet(::std::shared_ptr<::Realms::RealmsList> realmsList);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsList> realmsList);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
