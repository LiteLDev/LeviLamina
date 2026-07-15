#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct MountainParametersBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // MountainParametersBiomeJsonComponent inner types declare
    // clang-format off
    struct SteepMaterial;
    struct TopSlideSettings;
    // clang-format on

    // MountainParametersBiomeJsonComponent inner types define
    struct SteepMaterial {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::v1_20_60::BlockSpecifier>> mMaterial;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                      mNorthSlopes;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                      mSouthSlopes;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                      mWestSlopes;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                      mEastSlopes;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool
        operator==(::SharedTypes::v1_20_60::MountainParametersBiomeJsonComponent::SteepMaterial const&) const;
        // NOLINTEND
    };

    struct TopSlideSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mEnabled;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        120,
        ::std::optional<::SharedTypes::v1_20_60::MountainParametersBiomeJsonComponent::SteepMaterial>>
        mSteepMaterialAdjustment;
    ::ll::TypedStorage<
        1,
        2,
        ::std::optional<::SharedTypes::v1_20_60::MountainParametersBiomeJsonComponent::TopSlideSettings>>
        mTopSlide;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
