#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/Color255RGBA.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_40 {

struct SummonActorGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // SummonActorGoalDefinition inner types declare
    // clang-format off
    struct SpellStage;
    struct SpellData;
    // clang-format on

    // SummonActorGoalDefinition inner types define
    enum class SummonShape : int {
        Circle = 0,
        Line   = 1,
        Count  = 2,
    };

    enum class SummonTarget : int {
        Self   = 0,
        Target = 1,
        Count  = 2,
    };

    struct SpellStage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_40::SummonActorGoalDefinition::SummonShape>  mShape;
        ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_40::SummonActorGoalDefinition::SummonTarget> mTarget;
        ::ll::TypedStorage<4, 4, float>                                                            mSize;
        ::ll::TypedStorage<4, 4, float>                                                            mBaseDelay;
        ::ll::TypedStorage<4, 4, float>                                                            mDelayPerSummon;
        ::ll::TypedStorage<4, 4, int>                                                              mSummonCap;
        ::ll::TypedStorage<4, 4, float>                                                            mSummonCapRadius;
        ::ll::TypedStorage<8, 32, ::std::string>                                                   mEntityType;
        ::ll::TypedStorage<4, 4, float>                                                            mEntityLifespan;
        ::ll::TypedStorage<4, 4, int>                                                              mNumEntitiesSpawned;
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                           mSoundEvent;
        ::ll::TypedStorage<8, 32, ::std::string>                                                   mSummonEvent;
        // NOLINTEND

    public:
        // prevent constructor by default
        SpellStage& operator=(SpellStage const&);
        SpellStage();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI SpellStage(::SharedTypes::v1_26_40::SummonActorGoalDefinition::SpellStage const&);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::SharedTypes::v1_26_40::SummonActorGoalDefinition::SpellStage const&);
        // NOLINTEND
    };

    struct SpellData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                                      mMinActivationRange;
        ::ll::TypedStorage<4, 4, float>                                      mMaxActivationRange;
        ::ll::TypedStorage<4, 4, float>                                      mCooldownTime;
        ::ll::TypedStorage<4, 4, float>                                      mWeight;
        ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
        ::ll::TypedStorage<4, 4, float>                                      mCastDuration;
        ::ll::TypedStorage<1, 1, bool>                                       mDoCasting;
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGBA>               mParticleColor;
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>     mStartSoundEvent;
        ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_40::SummonActorGoalDefinition::SpellStage>>
            mSequence;
        // NOLINTEND

    public:
        // prevent constructor by default
        SpellData& operator=(SpellData const&);
        SpellData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI SpellData(::SharedTypes::v1_26_40::SummonActorGoalDefinition::SpellData const&);

        MCAPI bool operator==(::SharedTypes::v1_26_40::SummonActorGoalDefinition::SpellData const&) const;

        MCAPI ~SpellData();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::SharedTypes::v1_26_40::SummonActorGoalDefinition::SpellData const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_40::SummonActorGoalDefinition::SpellData>>
        mSummonChoices;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
