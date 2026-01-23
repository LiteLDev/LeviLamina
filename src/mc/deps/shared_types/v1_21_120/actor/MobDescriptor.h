#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct MobDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 328, ::SharedTypes::v1_21_20::FilterGroupData> mTargetFilter;
    ::ll::TypedStorage<4, 4, float>                                      mMaxDistance;
    ::ll::TypedStorage<4, 4, float>                                      mMaxHeight;
    ::ll::TypedStorage<4, 4, float>                                      mMaxFlee;
    ::ll::TypedStorage<4, 4, float>                                      mWalkSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                      mSprintSpeedModifier;
    ::ll::TypedStorage<1, 1, bool>                                       mCheckIfOutnumbered;
    ::ll::TypedStorage<1, 1, bool>                                       mReevaluateDescription;
    ::ll::TypedStorage<4, 4, int>                                        mPriority;
    ::ll::TypedStorage<4, 4, int>                                        mCooldownInSeconds;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                      mMustSee;
    ::ll::TypedStorage<4, 4, int>                                        mMustSeeForgetSeconds;
    // NOLINTEND

public:
    // prevent constructor by default
    MobDescriptor(MobDescriptor const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobDescriptor();

    MCAPI ::SharedTypes::v1_21_120::MobDescriptor& operator=(::SharedTypes::v1_21_120::MobDescriptor&&);

    MCFOLD ::SharedTypes::v1_21_120::MobDescriptor& operator=(::SharedTypes::v1_21_120::MobDescriptor const&);

    MCAPI ~MobDescriptor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
