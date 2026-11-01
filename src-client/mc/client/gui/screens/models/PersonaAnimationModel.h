#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/deps/shared_types/persona/PieceType.h"
#include "mc/world/actor/player/persona/ReactAnimationType.h"

// auto generated forward declare list
// clang-format off
class IPersonaRepository;
class IStoreCatalogItem;
class UIPropertyBag;
namespace persona { class PieceOfferWrapper; }
// clang-format on

class PersonaAnimationModel {
public:
    // PersonaAnimationModel inner types declare
    // clang-format off
    struct ReactAnimationTypeHash;
    struct ReactAnimationData;
    // clang-format on

    // PersonaAnimationModel inner types define
    struct ReactAnimationTypeHash {};

    struct ReactAnimationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> animationName;
        ::ll::TypedStorage<8, 32, ::std::string> soundEventName;
        // NOLINTEND
    };

    using ReactAnimationType = ::persona::ReactAnimationType;

    using ReactAnimationData = ::PersonaAnimationModel::ReactAnimationData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::persona::ReactAnimationType,
            ::std::vector<::PersonaAnimationModel::ReactAnimationData>,
            ::PersonaAnimationModel::ReactAnimationTypeHash,
            ::std::equal_to<::persona::ReactAnimationType>>>
                                                            mReactAnimations;
    ::ll::TypedStorage<8, 8, ::IPersonaRepository const&>   mPersonaRepo;
    ::ll::TypedStorage<8, 32, ::std::string>                mEmoteAnimationToPlay;
    ::ll::TypedStorage<4, 4, ::persona::ReactAnimationType> mBoredAnimationType;
    ::ll::TypedStorage<4, 4, ::persona::ReactAnimationType> mIdleAnimationType;
    ::ll::TypedStorage<4, 4, ::persona::ReactAnimationType> mAnimationReactState;
    ::ll::TypedStorage<4, 4, float>                         mStartingRotation;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>               mDirtyFlag;
    ::ll::TypedStorage<4, 4, float>                         mNextBoredAnimationTime;
    ::ll::TypedStorage<1, 1, bool>                          mAnimationUpdated;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaAnimationModel& operator=(PersonaAnimationModel const&);
    PersonaAnimationModel(PersonaAnimationModel const&);
    PersonaAnimationModel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PersonaAnimationModel(::IPersonaRepository const& personaRepo);

    MCNAPI void _populateReactAnimations();

    MCNAPI void playEmote(::IStoreCatalogItem const& emoteCatalogOffer);

    MCNAPI void playEmote(::persona::PieceOfferWrapper const& emoteCatalogOffer);

    MCNAPI void playReactAnimations(::SharedTypes::persona::PieceType pieceType, bool offer);

    MCNAPI void updateAppearanceData(::persona::PieceOfferWrapper const& offer, bool isOwned);

    MCNAPI void updatePaperDollAnimation(::UIPropertyBag& bag);

    MCNAPI ~PersonaAnimationModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IPersonaRepository const& personaRepo);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
