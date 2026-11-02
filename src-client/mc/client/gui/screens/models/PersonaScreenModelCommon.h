#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/models/PreviewedItemEventInformation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/deps/shared_types/persona/BodySizeType.h"
#include "mc/deps/shared_types/persona/PieceSide.h"
#include "mc/deps/shared_types/persona/PieceType.h"
#include "mc/world/actor/player/persona/PersonaCharacterHandle.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftEventing;
class IMinecraftGame;
class PersonaAppearance;
class PersonaClient;
class SkinHandle;
namespace mce { class Color; }
namespace mce { class UUID; }
namespace persona { class PieceOfferWrapper; }
namespace persona { struct FreeItemState; }
namespace persona::color { class ColorInfo; }
// clang-format on

class PersonaScreenModelCommon {
public:
    // PersonaScreenModelCommon inner types define
    using ColorInfo = ::persona::color::ColorInfo;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                 mMinecraft;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 8, ::PersonaClient&>                                  mSkinRepoClientInterface;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                             mEventing;
    ::ll::TypedStorage<8, 152, ::PreviewedItemEventInformation>                 mPreviewedItemInfo;
    ::ll::TypedStorage<8, 8, int64>                                             mNextPossibleEventTime;
    ::ll::TypedStorage<1, 1, bool>                                              mIsCurrentSkinPackOwned;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                          mExistanceTracker;
    ::ll::TypedStorage<8, 40, ::persona::PersonaCharacterHandle>                mActiveCharacterHandle;
    ::ll::TypedStorage<1, 1, bool>                                              mActiveCharacterInitialized;
    ::ll::TypedStorage<1, 1, bool>                                              mWaitingForNewPersona;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaScreenModelCommon& operator=(PersonaScreenModelCommon const&);
    PersonaScreenModelCommon(PersonaScreenModelCommon const&);
    PersonaScreenModelCommon();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaScreenModelCommon() = default;

    virtual void update(::ui::DirtyFlag& dirtyFlags);

    virtual void updateSkin(::persona::PersonaCharacterHandle const& characterHandle, ::SkinHandle handle);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaScreenModelCommon(
        ::IMinecraftGame&                                       minecraft,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client
    );

    MCNAPI ::std::function<void(bool)> _getNormalPersonaChangedCallback(
        ::persona::PersonaCharacterHandle const& handle,
        ::std::function<void(bool)>              finalCallback
    );

    MCNAPI void attemptCopyValidActiveAppearanceToCurrentCharacter(::std::function<void(bool)> callback);

    MCNAPI void changePersonaArmSize(
        ::persona::PersonaCharacterHandle const&   handle,
        ::SharedTypes::persona::ArmSizeType const& armSize,
        ::std::function<void(bool)>                callback
    );

    MCNAPI void changePersonaEmote(
        ::persona::PersonaCharacterHandle const& handle,
        ::std::string const&                     pieceId,
        ::persona::FreeItemState const&          freeItemState,
        int                                      emoteWheelSlot,
        ::std::function<void(bool)>              callback
    );

    MCNAPI void changePersonaHeight(
        ::persona::PersonaCharacterHandle const&    handle,
        ::SharedTypes::persona::BodySizeType const& bodyType,
        ::std::function<void(bool)>                 callback
    );

    MCNAPI void changePersonaPiece(
        ::persona::PersonaCharacterHandle const& handle,
        ::SharedTypes::persona::PieceType        pieceType,
        ::mce::UUID const&                       pieceId,
        ::std::string const&                     productId,
        ::persona::FreeItemState const&          freeItemState,
        ::std::function<void(bool)>              callback,
        ::SharedTypes::persona::PieceSide        side
    );

    MCNAPI void changePersonaTintColor(
        ::persona::PersonaCharacterHandle const& handle,
        ::SharedTypes::persona::PieceType        pieceType,
        ::mce::Color const&                      color,
        ushort                                   channel,
        ::std::function<void(bool)>              callback
    );

    MCNAPI void changePersonaTintColors(
        ::persona::PersonaCharacterHandle const&          handle,
        ::SharedTypes::persona::PieceType                 pieceType,
        ::std::vector<::persona::color::ColorInfo> const& tintColors,
        ::std::function<void(bool)>                       callback
    );

    MCNAPI bool createActivePersonaFromCurrentCharacter(::std::function<void(bool)> callback);

    MCNAPI void fireEventPersonaAvatarUpdated(::PersonaAppearance const& oldAppearance, bool isBeingDeleted);

    MCNAPI ::persona::PieceOfferWrapper
    getEmotePieceOfferFromAppearance(::persona::PersonaCharacterHandle const& handle, int emoteIndex);

    MCNAPI ::SkinHandle getPersonaClassicSkinHandle(::persona::PersonaCharacterHandle const& handle);

    MCNAPI ::SkinHandle getPersonaSkinHandle(::persona::PersonaCharacterHandle const& handle);

    MCNAPI ::mce::Color
    getTintColor(::persona::PersonaCharacterHandle const& handle, ::SharedTypes::persona::PieceType type, int channel);

    MCNAPI bool isEmoteSlotSetOnCurrentAppearance(int emoteWheelSlot);

    MCNAPI void removePieceByType(
        ::persona::PersonaCharacterHandle const& handle,
        ::SharedTypes::persona::PieceType const& pieceTypeToRemove,
        ::std::function<void(bool)>              callback,
        ::SharedTypes::persona::PieceSide        side
    );

    MCNAPI void
    revertPersona(::persona::PersonaCharacterHandle const& characterHandle, ::std::function<void(bool)> callback);

    MCNAPI void saveCurrentCharacterPersona();

    MCNAPI void savePersona(::persona::PersonaCharacterHandle const& characterHandle);

    MCNAPI void updatePreviewedItem(::PreviewedItemEventInformation previewedItemEventInfo);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::mce::UUID> const& mBuiltInSkinPackIds();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame& minecraft, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(::ui::DirtyFlag& dirtyFlags);

    MCNAPI void $updateSkin(::persona::PersonaCharacterHandle const& characterHandle, ::SkinHandle handle);
    // NOLINTEND
};
