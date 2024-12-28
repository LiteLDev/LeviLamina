#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

struct DimensionTransitionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk36982a;
    ::ll::UntypedStorage<4, 4>  mUnk4e8a80;
    ::ll::UntypedStorage<4, 4>  mUnkdf9be8;
    ::ll::UntypedStorage<4, 16> mUnk60be73;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionTransitionComponent& operator=(DimensionTransitionComponent const&);
    DimensionTransitionComponent(DimensionTransitionComponent const&);
    DimensionTransitionComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& AXIS_TAG();

    MCAPI static ::std::string const& COMPONENT_TAG();

    MCAPI static ::std::string const& DIMENSION_TAG();

    MCAPI static ::std::string const& POSITION_X_TAG();

    MCAPI static ::std::string const& POSITION_Y_TAG();

    MCAPI static ::std::string const& POSITION_Z_TAG();
    // NOLINTEND
};
