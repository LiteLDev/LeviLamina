#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelDataBindings.h"
#include "mc/client/realms/RealmsWorldEditorStateError.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/SubscribedValue.h"
#include "mc/world/level/storage/LevelDataWrapper.h"

// auto generated forward declare list
// clang-format off
class TrialManager;
namespace Realms { class RealmsWorldEditor; }
namespace Realms { class RealmsWorldPackEditor; }
// clang-format on

namespace OreUI {

class RealmWorldEditorQueriesFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmWorldEditorQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                            mIsDirty;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsWorldEditor>>                 mRealmsWorldEditor;
    ::ll::TypedStorage<8, 8, ::TrialManager const&>                                           mTrialManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackEditor>> mRealmsWorldPackEditor;
    ::ll::TypedStorage<8, 1744, ::LevelDataWrapper>                                           mLevelDataWrapper;
    ::ll::TypedStorage<8, 328, ::OreUI::LevelDataBindings>                                    mLevelDataBindings;
    ::ll::TypedStorage<8, 1744, ::LevelDataWrapper>                                           mLevelDataWrapperSnapshot;
    ::ll::TypedStorage<8, 328, ::OreUI::LevelDataBindings>                           mLevelDataBindingsSnapshot;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mRealmWorldEditorStateSubscriber;
    ::ll::TypedStorage<4, 8, ::std::optional<::Realms::RealmsWorldEditorStateError>> mRealmsWorldEditorStateError;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsWorldEditorStateErrorSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmAreTexturesRequiredSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsWorldPackEditorPackContentChangedSub;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>         mUseRealmsWorldBackendSubVal;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldEditorQueriesFacet& operator=(RealmWorldEditorQueriesFacet const&);
    RealmWorldEditorQueriesFacet(RealmWorldEditorQueriesFacet const&);
    RealmWorldEditorQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmWorldEditorQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmWorldEditorQueriesFacet(
        ::std::shared_ptr<::Realms::RealmsWorldEditor>                 worldEditor,
        ::TrialManager const&                                          trialManager,
        ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackEditor> realmsWorldPackEditor
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::Realms::RealmsWorldEditor>                 worldEditor,
        ::TrialManager const&                                          trialManager,
        ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackEditor> realmsWorldPackEditor
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
