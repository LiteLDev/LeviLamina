#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/IPaperDollUpdateContext.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class AnimationComponent;
class IClientInstance;
class SerializedSkinRef;
class Skin;
class SkinPackPin;
struct SkinImages;
namespace mce { class UUID; }
// clang-format on

class PaperDollClientInstanceUpdateContext : public ::IPaperDollUpdateContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollClientInstanceUpdateContext& operator=(PaperDollClientInstanceUpdateContext const&);
    PaperDollClientInstanceUpdateContext(PaperDollClientInstanceUpdateContext const&);
    PaperDollClientInstanceUpdateContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::brstd::move_only_function<void(::std::string_view) const> getRemoveSkinFunction() /*override*/;

    virtual ::Skin const* getSelectedSkin() /*override*/;

    virtual ::Skin const* getSkinFromPack(uint64 packHash, int packIndex) /*override*/;

    virtual ::SkinPackPin pinSkinPack(::mce::UUID const& packId) /*override*/;

    virtual bool isValidSelectedSkin(::mce::UUID const& packId, int skinIndex) const /*override*/;

    virtual void createOrUpdateSkin(
        ::AnimationComponent&      animationComponent,
        ::SerializedSkinRef const& skin,
        ::SkinImages const&        images
    ) /*override*/;

    virtual ::SkinImages getSkinImages(::Skin const& skin, bool isPlayer) /*override*/;

    virtual bool isSkinReadyToRender(::std::string_view skin) const /*override*/;

    virtual void markLocalPlayerAsDirty() /*override*/;

    virtual bool shouldAllSkinsRotate() const /*override*/;

    virtual ::std::shared_ptr<::ActorAnimationGroup> getActorAnimationGroup() /*override*/;

    virtual void playUI(::std::string const& name, float volume, float pitch) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::brstd::move_only_function<void(::std::string_view) const> $getRemoveSkinFunction();

    MCNAPI ::Skin const* $getSelectedSkin();

    MCNAPI ::Skin const* $getSkinFromPack(uint64 packHash, int packIndex);

    MCNAPI ::SkinPackPin $pinSkinPack(::mce::UUID const& packId);

    MCNAPI bool $isValidSelectedSkin(::mce::UUID const& packId, int skinIndex) const;

    MCNAPI void $createOrUpdateSkin(
        ::AnimationComponent&      animationComponent,
        ::SerializedSkinRef const& skin,
        ::SkinImages const&        images
    );

    MCNAPI ::SkinImages $getSkinImages(::Skin const& skin, bool isPlayer);

    MCNAPI bool $isSkinReadyToRender(::std::string_view skin) const;

    MCNAPI void $markLocalPlayerAsDirty();

    MCNAPI bool $shouldAllSkinsRotate() const;

    MCNAPI ::std::shared_ptr<::ActorAnimationGroup> $getActorAnimationGroup();

    MCNAPI void $playUI(::std::string const& name, float volume, float pitch);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
