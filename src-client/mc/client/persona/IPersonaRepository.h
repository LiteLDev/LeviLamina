#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/deps/shared_types/persona/PieceType.h"
#include "mc/world/actor/player/persona/PersonaError.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class DateManager;
class Pack;
class PersonaAppearance;
class PersonaPiece;
class SemVersion;
class SkinHandle;
class TintMapColor;
struct PersonaCharacter;
namespace Json { class Value; }
namespace mce { class Color; }
namespace mce { class UUID; }
namespace persona { class DefaultAppearanceManager; }
namespace persona { class PersonaCharacterHandleArray; }
namespace persona { class PieceHandle; }
namespace persona { class PieceOfferWrapper; }
namespace persona { struct DefaultAppearance; }
namespace persona { struct PersonaCharacterHandle; }
namespace persona::debug { class PersonaDebugApi; }
// clang-format on

class IPersonaRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isInitialized() const = 0;

    virtual bool isOfferLoading(::persona::PieceOfferWrapper const& personaOffer) const = 0;

    virtual bool isPieceLoaded(::mce::UUID const& pieceId) const = 0;

    virtual bool isKnownPersonaPiece(::mce::UUID const& pieceId) const = 0;

    virtual bool isKnownPersonaPieceUnloaded(::mce::UUID const& pieceId) const = 0;

    virtual bool isLoadingAppearances(::persona::PersonaCharacterHandleArray const& handles) const = 0;

    virtual bool isLoadingAppearance(::persona::PersonaCharacterHandle const& handle) const = 0;

    virtual bool isPersonaPieceLoading(::mce::UUID const& peiceId) const = 0;

    virtual bool isPersonaPieceInRepo(::mce::UUID const& pieceId) const = 0;

    virtual bool isPersonaPieceInRepo(::std::string const& pieceId) const = 0;

    virtual ::PersonaPiece const& getPersonaPieceFromRepo(::std::string const& pieceId) const = 0;

    virtual void forEachPersonaPack(::std::function<void(::Pack const&)> const& callback) const = 0;

    virtual ::std::vector<::persona::PieceOfferWrapper>
    getDefaultPieceWrappersOfTypes(::std::vector<::SharedTypes::persona::PieceType> const& sections) const = 0;

    virtual ::SemVersion const& getVersionOfKnownPersonaPiecePack(::mce::UUID const& packId) const = 0;

    virtual ::persona::PersonaCharacterHandle createPersonaOnUser(
        ::persona::ProfileType                      profileType,
        ::PersonaAppearance const&                  appearance,
        ::std::string const&                        playFabId,
        ::std::function<void(::std::string const&)> callback
    ) = 0;

    virtual ::persona::PersonaCharacterHandle createAStartingPersonaOnUser(
        ::persona::ProfileType                      profileType,
        ::std::string const&                        playFabId,
        int                                         defaultIndexOverride,
        ::std::function<void(::std::string const&)> callback
    ) = 0;

    virtual ::PersonaAppearance createAppearancefromData(
        ::std::vector<::persona::PieceHandle> const&                                   personaPieces,
        ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> const& tintMap,
        ::mce::Color const&                                                            skinColor,
        ::SharedTypes::persona::ArmSizeType const&                                     armSize
    ) = 0;

    virtual ::SkinHandle createPersona(
        ::persona::ProfileType                      profileType,
        ::PersonaAppearance const&                  newAppearance,
        ::std::string const&                        playFabId,
        ::std::function<void(::std::string const&)> callback
    ) = 0;

    virtual ::SkinHandle createAStartingPersona(
        ::persona::ProfileType                      profileType,
        ::std::string const&                        playFabId,
        uint const                                  defaultAppearanceIndex,
        ::std::function<void(::std::string const&)> callback
    ) = 0;

    virtual ::SkinHandle createAStartingPersona(
        ::persona::ProfileType                      profileType,
        ::mce::UUID const&                          defaultCharacterId,
        ::std::string const&                        playFabId,
        ::std::function<void(::std::string const&)> callback
    ) = 0;

    virtual void tryToReloadPersona(
        ::persona::PersonaCharacterHandle const&    handle,
        ::PersonaAppearance const&                  newAppearance,
        ::std::function<void(::std::string const&)> callback
    ) = 0;

    virtual bool isAppearanceDefault(::PersonaAppearance const& appearance) const = 0;

    virtual ::PersonaPiece const&
    getPieceFromClassicSkin(::std::string const& skinSerializedName, bool const reportFailure) const = 0;

    virtual void saveOfflinePersonaCatalogCache() = 0;

    virtual void loadOfflinePersonaCatalogCache() = 0;

    virtual void loadPiecePack(::mce::UUID packId) = 0;

    virtual void queueImportOfPersonaPiecePack(::gsl::not_null<::std::shared_ptr<::Pack>> pack) = 0;

    virtual ::PersonaCharacter& getCharacter(::std::string const& characterName) = 0;

    virtual ::PersonaCharacter& getCharacter(::persona::PersonaCharacterHandle const& handle) = 0;

    virtual void removeCharacter(::std::string const& characterName) = 0;

    virtual void removeCharacter(::persona::PersonaCharacterHandle const& handle) = 0;

    virtual void registerPersonaSkinsForCharacter(::PersonaCharacter& character) = 0;

    virtual ::persona::PieceHandle getPieceHandle(::std::string const& pieceId) const = 0;

    virtual ::persona::DefaultAppearance const& getDefaultAppearance(uint const& defaultIndexOverride) = 0;

    virtual ::persona::DefaultAppearanceManager const& getDefaultAppearanceManager() const = 0;

    virtual void createSplitscreenUser(::std::string xuid, int splitscreenID, ::Json::Value&& appearanceData) = 0;

    virtual ::PersonaAppearance const getSplitscreenAppearance(::std::string const& xuid, int const controllerID) = 0;

    virtual void
    saveSplitscreenAppearanceData(::std::string const& xuid, int splitscreenID, ::Json::Value&& appearanceData) = 0;

    virtual void loadDefaultCharactersIfNeeded() = 0;

    virtual void
    addToOfflinePersonaCatalogMap(::persona::PieceOfferWrapper const& personaOffer, ::std::string const playfabId) = 0;

    virtual ::std::vector<::std::string> const
    getAllPiecesFromOfflineMapForPlayfabId(::std::string const& playfabId) const = 0;

    virtual void loadOfflinePieceMapIntoStoreCatalog(::DateManager const& dateManager) = 0;

    virtual void queuePersonaGeneralError(::persona::PersonaError errorType) = 0;

    virtual void downloadAndLoadPieces(
        ::std::vector<::std::string> const& productIds,
        ::std::vector<::std::string> const& pieceIds
    ) = 0;

    virtual void update(bool inOrStartingGameplay, ::std::shared_ptr<::ActorAnimationGroup> actorAnimationGroup) = 0;

    virtual void queueContentReload(::std::shared_ptr<::ActorAnimationGroup> actorAnimationGroup) = 0;

    virtual ::std::shared_ptr<::persona::debug::PersonaDebugApi> getPersonaDebugApi() = 0;

    virtual ::PersonaCharacter& _addCharacter(::persona::ProfileType profileType, ::std::string const& playFabId) = 0;
    // NOLINTEND
};
