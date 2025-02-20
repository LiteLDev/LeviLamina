#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class HomeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke4d7e6;
    ::ll::UntypedStorage<4, 4>  mUnkf877d7;
    ::ll::UntypedStorage<4, 4>  mUnk814ab0;
    ::ll::UntypedStorage<4, 4>  mUnkb1e8f1;
    ::ll::UntypedStorage<4, 4>  mUnkd6819b;
    ::ll::UntypedStorage<8, 24> mUnk5482c7;
    ::ll::UntypedStorage<4, 12> mUnk2d8353;
    ::ll::UntypedStorage<4, 4>  mUnkbdd2fa;
    // NOLINTEND

public:
    // prevent constructor by default
    HomeComponent& operator=(HomeComponent const&);
    HomeComponent(HomeComponent const&);
    HomeComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool hasValidBlockAtHomePos(::BlockSource const& region) const;

    MCAPI bool isInHomeDimension(::Actor const& owner) const;

    MCAPI ::HomeComponent& operator=(::HomeComponent&&);

    MCAPI void readAdditionalSaveData(::Actor& tag, ::CompoundTag const& dataLoadHelper, ::DataLoadHelper&);
    // NOLINTEND
};
