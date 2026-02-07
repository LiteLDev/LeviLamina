#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/world/actor/player/persona/PieceType.h"
#include "mc/world/actor/player/persona/ReactAnimationType.h"

// auto generated forward declare list
// clang-format off
class PersonaPiece;
struct IPersonaRepository;
struct IStoreCatalogItem;
struct UIPropertyBag;
namespace persona { struct PieceOfferWrapper; }
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

    struct ReactAnimationData {};

    using ReactAnimationType = ::persona::ReactAnimationType;

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
    MCAPI void _populateReactAnimations();

    MCAPI void playEmote(::IStoreCatalogItem const& emoteCatalogOffer);

    MCAPI void playEmote(::PersonaPiece const& emoteToPlay);

    MCAPI void playReactAnimations(::persona::PieceType pieceType, bool offer);

    MCAPI void tick(::ui::DirtyFlag& dirtyFlags);

    MCAPI void updateAppearanceData(::persona::PieceOfferWrapper const& offer, bool isOwned);

    MCAPI void updatePaperDollAnimation(::UIPropertyBag& bag);
    // NOLINTEND
};
