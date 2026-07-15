#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class AnimationComponent;
class SerializedSkinRef;
class Skin;
struct PaperDollPlayerSkinInfo;
struct SkinImages;
namespace mce { class UUID; }
// clang-format on

class IPaperDollUpdateContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollUpdateContext() = default;

    virtual ::brstd::move_only_function<void(::std::string_view) const> getRemoveSkinFunction() = 0;

    virtual ::Skin const* getSelectedSkin() = 0;

    virtual ::Skin const* getSkinFromPack(uint64 packHash, int packIndex) = 0;

    virtual bool isValidSelectedSkin(::mce::UUID const& packId, int skinIndex) const = 0;

    virtual void createOrUpdateSkin(
        ::AnimationComponent&      animationComponent,
        ::SerializedSkinRef const& skin,
        ::SkinImages const&        images
    ) = 0;

    virtual ::std::optional<::PaperDollPlayerSkinInfo> getSkinFromPlayer(::mce::UUID const& id) = 0;

    virtual ::SkinImages getSkinImages(::Skin const& skin, bool isPlayer) = 0;

    virtual bool isAnySkinOfNameInitialized(::std::string_view skin) const = 0;

    virtual void markLocalPlayerAsDirty() = 0;

    virtual bool shouldAllSkinsRotate() const = 0;

    virtual ::std::shared_ptr<::ActorAnimationGroup> getActorAnimationGroup() = 0;

    virtual void playUI(::std::string const& name, float volume, float pitch) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
