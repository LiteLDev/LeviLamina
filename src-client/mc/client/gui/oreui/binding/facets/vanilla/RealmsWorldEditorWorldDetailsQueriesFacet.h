#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/RealmsWorldEditorState.h"
#include "mc/client/realms/RealmsWorldEditorStateStatus.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/SubscribedValue.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

namespace OreUI {

class RealmsWorldEditorWorldDetailsQueriesFacet
: public ::OreUI::FacetBase<::OreUI::RealmsWorldEditorWorldDetailsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsWorldEditor>>    mRealmsWorldEditor;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmsWorldEditorStateSubscriber;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldEditorState>                   mState;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldEditorStateStatus>             mStatus;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmWorldChangeSubscription;
    ::ll::TypedStorage<8, 48, ::SubscribedValue<::std::string>>                  mWorldSeedSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                           mUseFlatWorldSubVal;
    ::ll::TypedStorage<8, 56, ::SubscribedValue<::std::optional<::std::string>>> mFlatWorldPresetSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                            mGeneratorTypeSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                           mStartWithMapSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                           mStartWithBonusChestSubVal;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<int>>                            mSimulationDistanceSubVal;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mRealmName;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mRealmDescription;
    ::ll::TypedStorage<1, 1, bool>                                               mRealmAreTexturesRequired;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmsNameSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmsDescriptionSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmsAreTexturesRequiredSubscriber;
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

    MCFOLD bool areRealmTexturesRequired() const;

    MCFOLD ::std::optional<::std::string> const& getFlatWorldPreset() const;

    MCFOLD int getGeneratorType() const;

    MCAPI ::std::string const& getRealmsDescription() const;

    MCFOLD ::std::string const& getRealmsName() const;

    MCAPI int getSimulationDistance() const;

    MCFOLD bool getStartWithBonusChest() const;

    MCFOLD bool getStartWithMap() const;

    MCFOLD ::Realms::RealmsWorldEditorState getState() const;

    MCFOLD ::Realms::RealmsWorldEditorStateStatus getStatus() const;

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
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
