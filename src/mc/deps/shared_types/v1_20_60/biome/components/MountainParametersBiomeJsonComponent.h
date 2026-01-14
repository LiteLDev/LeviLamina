#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"
#include "mc/v1_20_60/biome/components/BiomeComponentVersion.h"

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
        // prevent constructor by default
        SteepMaterial& operator=(SteepMaterial const&);
        SteepMaterial();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI SteepMaterial(::SharedTypes::v1_20_60::MountainParametersBiomeJsonComponent::SteepMaterial const&);

        MCAPI ::SharedTypes::v1_20_60::MountainParametersBiomeJsonComponent::SteepMaterial&
        operator=(::SharedTypes::v1_20_60::MountainParametersBiomeJsonComponent::SteepMaterial&&);

        MCAPI ~SteepMaterial();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::SharedTypes::v1_20_60::MountainParametersBiomeJsonComponent::SteepMaterial const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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
    // virtual functions
    // NOLINTBEGIN
    virtual ::BiomeComponentVersion getType() const /*override*/;

    virtual ~MountainParametersBiomeJsonComponent() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BiomeComponentVersion $getType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
