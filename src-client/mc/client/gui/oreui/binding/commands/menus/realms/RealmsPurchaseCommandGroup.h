#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsPurchase; }
// clang-format on

namespace OreUI {

class RealmsPurchaseCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::RealmsPurchaseCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::RealmsPurchase>> mRealmsPurchase;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::
            CallableImpl<void, ::std::string, ::std::string, ::std::string, int64, ::std::string, int, bool>>
        mPurchase;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, int64, ::std::string, int>>
        mPrepareAppStoreForPurchases;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, ::std::string, int64>> mReconcile;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                            mReset;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPurchaseCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPurchaseCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsPurchaseCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
