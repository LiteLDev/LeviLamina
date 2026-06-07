#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/models/PreviewedItemEventInformation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/persona/ArmSize.h"
#include "mc/world/actor/player/persona/BodySize.h"
#include "mc/world/actor/player/persona/PersonaCharacterHandle.h"
#include "mc/world/actor/player/persona/PersonaError.h"
#include "mc/world/actor/player/persona/PieceSide.h"
#include "mc/world/actor/player/persona/PieceType.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftEventing;
class IMinecraftGame;
class IStoreCatalogItem;
class PersonaAppearance;
class PersonaClient;
class PersonaPiece;
class SkinHandle;
struct PersonaCharacter;
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
    virtual ~PersonaScreenModelCommon();

    virtual void update(::ui::DirtyFlag& dirtyFlags);

    virtual void updateSkin(::persona::PersonaCharacterHandle const& characterHandle, ::SkinHandle handle);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PersonaScreenModelCommon(
        ::IMinecraftGame&                                       minecraft,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client
    );

    MCAPI ::std::function<void(bool)> _getNormalPersonaChangedCallback(
        ::persona::PersonaCharacterHandle const& handle,
        ::std::function<void(bool)>              finalCallback
    );

    MCAPI void attemptCopyValidActiveAppearanceToCurrentCharacter(::std::function<void(bool)> callback);

    MCAPI void changePersonaArmSize(
        ::persona::PersonaCharacterHandle const& handle,
        ::persona::ArmSize::Type const&          armSize,
        ::std::function<void(bool)>              callback
    );

    MCAPI void changePersonaEmote(
        ::persona::PersonaCharacterHandle const& handle,
        ::std::string const&                     pieceId,
        ::persona::FreeItemState const&          freeItemState,
        int                                      emoteWheelSlot,
        ::std::function<void(bool)>              callback
    );

    MCAPI void changePersonaHeight(
        ::persona::PersonaCharacterHandle const& handle,
        ::persona::BodySize::Type const&         bodyType,
        ::std::function<void(bool)>              callback
    );

    MCAPI void changePersonaPiece(
        ::persona::PersonaCharacterHandle const& handle,
        ::persona::PieceType                     pieceType,
        ::mce::UUID const&                       pieceId,
        ::std::string const&                     productId,
        ::persona::FreeItemState const&          freeItemState,
        ::std::function<void(bool)>              callback,
        ::persona::PieceSide                     side
    );

    MCAPI void changePersonaTintColor(
        ::persona::PersonaCharacterHandle const& handle,
        ::persona::PieceType                     pieceType,
        ::mce::Color const&                      color,
        ushort                                   channel,
        ::std::function<void(bool)>              callback
    );

    MCAPI void changePersonaTintColors(
        ::persona::PersonaCharacterHandle const&          handle,
        ::persona::PieceType                              pieceType,
        ::std::vector<::persona::color::ColorInfo> const& tintColors,
        ::std::function<void(bool)>                       callback
    );

    MCAPI bool createActivePersonaFromCurrentCharacter(::std::function<void(bool)> callback);

    MCAPI void fireEventPersonaAvatarUpdated(::PersonaAppearance const& oldAppearance, bool isBeingDeleted);

    MCAPI void fireEventPersonaGeneralError(::persona::PersonaError errorType) const;

    MCFOLD ::PersonaCharacter const& getActiveCharacter() const;

    MCFOLD ::PersonaCharacter& getActiveCharacter();

    MCFOLD ::persona::PersonaCharacterHandle& getActiveCharacterHandle();

    MCFOLD ::SkinHandle const& getActiveCharacterSkinHandle() const;

    MCFOLD ::PersonaCharacter& getCurrentCharacter();

    MCFOLD ::persona::PersonaCharacterHandle getCurrentCharacterHandle() const;

    MCFOLD ::SkinHandle const& getCurrentCharacterSkinHandle() const;

    MCAPI ::std::string
    getEmoteFileSystemFromAppearance(::persona::PersonaCharacterHandle const& handle, int emoteIndex);

    MCAPI ::persona::PieceOfferWrapper
    getEmotePieceOfferFromAppearance(::persona::PersonaCharacterHandle const& handle, int emoteIndex);

    MCAPI ::std::string
    getEmoteThumbnailPathFromAppearance(::persona::PersonaCharacterHandle const& handle, int emoteIndex);

    MCAPI ::std::string getEmoteTitleFromAppearance(::persona::PersonaCharacterHandle const& handle, int emoteIndex);

    MCAPI ::PersonaCharacter& getPersonaCharacter(::persona::ProfileType profileType);

    MCAPI ::SkinHandle getPersonaClassicSkinHandle(::persona::PersonaCharacterHandle const& handle);

    MCAPI int getPersonaFilledSlotsCount() const;

    MCAPI ::SkinHandle const& getPersonaHandleFromSlot(int slotIndex);

    MCAPI ::PersonaPiece const& getPersonaPiece(::std::string const& pieceId) const;

    MCAPI ::SkinHandle getPersonaSkinHandle(::persona::PersonaCharacterHandle const& handle);

    MCAPI ::persona::ProfileType getPersonaType(::persona::PersonaCharacterHandle const& handle);

    MCAPI ::persona::ProfileType getSelectedPersonaSkinSlot() const;

    MCAPI ::PersonaCharacter& getSelectedSlotCharacter();

    MCAPI ::mce::Color
    getTintColor(::persona::PersonaCharacterHandle const& handle, ::persona::PieceType type, int channel);

    MCAPI void invalidateActiveCharacter();

    MCFOLD bool isActivePersonaInitialized() const;

    MCAPI bool isBuiltInPackId(::mce::UUID const& id) const;

    MCAPI bool isEmoteSlotSetOnCurrentAppearance(int emoteWheelSlot);

    MCAPI bool isPieceOwned(::IStoreCatalogItem const& offer);

    MCAPI bool isValidAndOwnedAppearance(::PersonaAppearance const& appearance) const;

    MCAPI void removeAllPersonaEmotes(::persona::PersonaCharacterHandle const& handle);

    MCAPI void removeCurrentPersonaSlot();

    MCAPI void removePieceByType(
        ::persona::PersonaCharacterHandle const& handle,
        ::persona::PieceType const&              pieceTypeToRemove,
        ::std::function<void(bool)>              callback,
        ::persona::PieceSide                     side
    );

    MCAPI void
    revertPersona(::persona::PersonaCharacterHandle const& characterHandle, ::std::function<void(bool)> callback);

    MCAPI void
    revertPersonaPiece(::persona::PersonaCharacterHandle const& handle, ::persona::PieceType const& typeToRevert);

    MCAPI void saveCurrentCharacterPersona();

    MCAPI void savePersona(::persona::PersonaCharacterHandle const& characterHandle);

    MCAPI bool selectNextPersonaSkinSlot();

    MCAPI bool selectPersonaSlot(int personaSlotToSelectOffset);

    MCAPI bool selectPreviousPersonaSkinSlot();

    MCAPI void updateClassicSkinCape(::persona::PersonaCharacterHandle const& handle);

    MCAPI void updatePersonaWithNewAppearance(
        ::PersonaAppearance const&               newAppearance,
        ::persona::PersonaCharacterHandle const& handle,
        ::std::function<void(bool)>              callback
    ) const;

    MCAPI void updatePreviewedItem(::PreviewedItemEventInformation previewedItemEventInfo);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::mce::UUID> const& mBuiltInSkinPackIds();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IMinecraftGame& minecraft, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(::ui::DirtyFlag& dirtyFlags);

    MCAPI void $updateSkin(::persona::PersonaCharacterHandle const& characterHandle, ::SkinHandle handle);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
