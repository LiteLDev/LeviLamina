#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/realms/RealmsListError.h"
#include "mc/client/realms/RealmsListState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct RealmsWorldInfo;
namespace Realms { class RealmsList; }
// clang-format on

namespace OreUI {

class RealmsListFacet : public ::OreUI::FacetBase<::OreUI::RealmsListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsList>> mRealmsList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mRealmsListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mRealmsOnlinePlayersSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~RealmsListFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsListFacet(::std::shared_ptr<::Realms::RealmsList> realmsList);

    MCFOLD void forceFetchRealmsList();

    MCAPI ::Realms::RealmsListError getError() const;

    MCAPI ::RealmsAPI::Compatibility getRealmsCompatibility() const;

    MCFOLD ::Realms::RealmsListState getState() const;

    MCFOLD ::std::vector<::RealmsWorldInfo> const& getWorldList() const;
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
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
