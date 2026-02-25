#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelDataBindings.h"
#include "mc/client/realms/RealmsWorldEditorState.h"
#include "mc/client/realms/RealmsWorldEditorStateStatus.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/SubscribedValue.h"
#include "mc/world/level/storage/LevelDataWrapper.h"

// auto generated forward declare list
// clang-format off
struct TrialManager;
namespace Realms { struct RealmsWorldEditor; }
// clang-format on

namespace OreUI {

class RealmWorldEditorQueriesFacet : public ::OreUI::FacetBase<::OreUI::RealmWorldEditorQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                            mIsDirty;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    ::ll::TypedStorage<8, 8, ::TrialManager const&>                           mTrialManager;
    ::ll::TypedStorage<8, 1640, ::LevelDataWrapper>                           mLevelDataWrapper;
    ::ll::TypedStorage<8, 328, ::OreUI::LevelDataBindings>                    mLevelDataBindings;
    ::ll::TypedStorage<8, 1640, ::LevelDataWrapper>                           mLevelDataWrapperSnapshot;
    ::ll::TypedStorage<8, 328, ::OreUI::LevelDataBindings>                    mLevelDataBindingsSnapshot;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mRealmWorldEditorStateSubscriber;
    ::ll::TypedStorage<8, 24, ::SubscribedValue<bool>>                        mUseRealmsWorldBackendSubVal;
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
        ::std::shared_ptr<::Realms::RealmsWorldEditor> worldEditor,
        ::TrialManager const&                          trialManager
    );

    MCAPI ::OreUI::LevelDataBindings& getCurrentWorldData();

    MCAPI ::Realms::RealmsWorldEditorState getRealmWorldEditorState();

    MCAPI ::Realms::RealmsWorldEditorStateStatus getRealmWorldEditorStateStatus();

    MCAPI bool getUseRealmsWorldBackend() const;

    MCAPI bool realmWorldHasBeenModified();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsWorldEditor> worldEditor, ::TrialManager const& trialManager);
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
