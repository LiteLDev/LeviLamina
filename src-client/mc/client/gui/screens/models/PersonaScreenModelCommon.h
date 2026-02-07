#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/models/PreviewedItemEventInformation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/persona/PersonaCharacterHandle.h"
#include "mc/world/actor/player/persona/PersonaError.h"
#include "mc/world/actor/player/persona/PieceSide.h"
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftEventing;
class IMinecraftGame;
struct PersonaAppearance;
struct SkinHandle;
struct SkinRepositoryClientInterface;
namespace mce { class UUID; }
namespace persona { struct FreeItemState; }
namespace persona { struct PieceOfferWrapper; }
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
    ::ll::TypedStorage<8, 8, ::SkinRepositoryClientInterface&>                  mSkinRepoClientInterface;
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

    virtual void update(::ui::DirtyFlag&);

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

    MCAPI void changePersonaEmote(
        ::persona::PersonaCharacterHandle const& handle,
        ::std::string const&                     pieceId,
        ::persona::FreeItemState const&          freeItemState,
        int                                      emoteWheelSlot,
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

    MCAPI bool createActivePersonaFromCurrentCharacter(::std::function<void(bool)> callback);

    MCAPI void fireEventPersonaAvatarUpdated(::PersonaAppearance const& oldAppearance, bool isBeingDeleted);

    MCAPI void fireEventPersonaGeneralError(::persona::PersonaError errorType) const;

    MCAPI ::persona::PieceOfferWrapper
    getEmotePieceOfferFromAppearance(::persona::PersonaCharacterHandle const& handle, int emoteIndex);

    MCAPI ::SkinHandle getPersonaClassicSkinHandle(::persona::PersonaCharacterHandle const& handle);

    MCAPI ::SkinHandle const& getPersonaHandleFromSlot(int slotIndex);

    MCAPI ::SkinHandle getPersonaSkinHandle(::persona::PersonaCharacterHandle const& handle);

    MCAPI void invalidateActiveCharacter();

    MCAPI bool isValidAndOwnedAppearance(::PersonaAppearance const& appearance) const;

    MCAPI void
    revertPersona(::persona::PersonaCharacterHandle const& characterHandle, ::std::function<void()> callback);

    MCAPI void saveCurrentCharacterPersona();

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
    MCAPI void $update(::ui::DirtyFlag&);

    MCAPI void $updateSkin(::persona::PersonaCharacterHandle const& characterHandle, ::SkinHandle handle);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
