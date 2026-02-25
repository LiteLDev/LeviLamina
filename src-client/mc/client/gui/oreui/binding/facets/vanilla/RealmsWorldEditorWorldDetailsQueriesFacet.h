#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/SubscribedValue.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmsWorldEditor; }
// clang-format on

namespace OreUI {

class RealmsWorldEditorWorldDetailsQueriesFacet
: public ::OreUI::FacetBase<::OreUI::RealmsWorldEditorWorldDetailsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsWorldEditor>>    mRealmsWorldEditor;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmWorldChangeSubscription;
    ::ll::TypedStorage<8, 48, ::SubscribedValue<::std::string>>                  mWorldSeedSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                           mUseFlatWorldSubVal;
    ::ll::TypedStorage<8, 56, ::SubscribedValue<::std::optional<::std::string>>> mFlatWorldPresetSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                            mGeneratorTypeSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                           mStartWithMapSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                           mStartWithBonusChestSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                            mSimulationDistanceSubVal;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldEditorWorldDetailsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldEditorWorldDetailsQueriesFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsWorldEditorWorldDetailsQueriesFacet(
        ::std::shared_ptr<::Realms::RealmsWorldEditor> worldEditor
    );

    MCAPI void _refreshRealmWorldSubscriptions();

    MCFOLD ::std::optional<::std::string> const& getFlatWorldPreset() const;

    MCFOLD int getGeneratorType() const;

    MCAPI int getSimulationDistance() const;

    MCFOLD bool getStartWithBonusChest() const;

    MCFOLD bool getStartWithMap() const;

    MCFOLD bool getUseFlatWorld() const;

    MCFOLD ::std::string const& getWorldSeed() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsWorldEditor> worldEditor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
