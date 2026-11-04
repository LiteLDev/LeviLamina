#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/deps/shared_types/persona/BodySizeType.h"
#include "mc/deps/shared_types/persona/PieceSide.h"
#include "mc/deps/shared_types/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class PersonaAppearance;
class SkinHandle;
struct PersonaCharacter;
namespace mce { class Color; }
namespace mce { class UUID; }
namespace persona { class PieceHandle; }
namespace persona { struct FreeItemState; }
namespace persona { struct PersonaCharacterHandle; }
namespace persona { struct PieceToChange; }
namespace persona::color { class ColorInfo; }
// clang-format on

class IPersonaCharacterEditor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPersonaCharacterEditor() = default;

    virtual void changePiece(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::SharedTypes::persona::PieceType const  pieceType,
        ::mce::UUID const&                       pieceId,
        ::std::string const&                     productId,
        ::persona::FreeItemState const&          freeItemState,
        ::SharedTypes::persona::PieceSide        side,
        ::std::function<void(bool)>              callback
    ) = 0;

    virtual void changePieces(
        ::persona::PersonaCharacterHandle const&       currentCharacter,
        ::std::vector<::persona::PieceToChange> const& pieces,
        ::std::function<void(bool)>                    callback
    ) = 0;

    virtual void removePieceByType(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::SharedTypes::persona::PieceType const  pieceTypeToRemove,
        ::SharedTypes::persona::PieceSide const  side,
        ::std::function<void(bool)>              callback
    ) = 0;

    virtual void changeEmote(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::std::string const&                     emotePieceId,
        ::persona::FreeItemState const&          freeItemState,
        int                                      emoteWheelSlot,
        ::std::function<void(bool)>              callback
    ) = 0;

    virtual void removeEmote(::persona::PersonaCharacterHandle const& currentCharacter, int emoteWheelSlot) = 0;

    virtual void removeAllEmotes(::persona::PersonaCharacterHandle const& currentCharacterHandle) = 0;

    virtual void
    removeEmotesWithId(::persona::PersonaCharacterHandle const& currentCharacter, ::std::string const& emoteId) = 0;

    virtual void
    changeClassicSkin(::persona::PersonaCharacterHandle const& currentCharacter, ::SkinHandle const& handle) = 0;

    virtual void changeArmSize(
        ::persona::PersonaCharacterHandle const&   currentCharacter,
        ::SharedTypes::persona::ArmSizeType const& armSizeType,
        ::std::function<void(bool)>                callback
    ) = 0;

    virtual void changeHeight(
        ::persona::PersonaCharacterHandle const&    currentCharacter,
        ::SharedTypes::persona::BodySizeType const& bodyType,
        ::std::function<void(bool)>                 callback
    ) = 0;

    virtual void changePersonaTintColor(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::SharedTypes::persona::PieceType const  pieceType,
        ::mce::Color const&                      color,
        ushort                                   channel,
        ::std::function<void(bool)>              callback
    ) = 0;

    virtual void changePersonaTintColors(
        ::persona::PersonaCharacterHandle const&          currentCharacter,
        ::SharedTypes::persona::PieceType const           pieceType,
        ::std::vector<::persona::color::ColorInfo> const& tintColors,
        ::std::function<void(bool)>                       callback
    ) = 0;

    virtual void savePersonaItems(::persona::PersonaCharacterHandle const& characterHandle) = 0;

    virtual void
    revertPersona(::persona::PersonaCharacterHandle const& currentCharacter, ::std::function<void(bool)> callback) = 0;

    virtual void revertPersonaPiece(
        ::persona::PersonaCharacterHandle const& handle,
        ::SharedTypes::persona::PieceType const& pieceTypeToRevert
    ) = 0;

    virtual bool doesCharacterHavePieceOfTypeX(
        ::persona::PersonaCharacterHandle const& currentCharacter,
        ::SharedTypes::persona::PieceType const& pieceType
    ) = 0;

    virtual bool isPieceOwned(::persona::PieceHandle const& item) = 0;

    virtual void updatePersonaWithNewAppearance(
        ::PersonaAppearance const&  newAppearance,
        ::PersonaCharacter&         character,
        ::std::function<void(bool)> callback
    ) = 0;
    // NOLINTEND
};
