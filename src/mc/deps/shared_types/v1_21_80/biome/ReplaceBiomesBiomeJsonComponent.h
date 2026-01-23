#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#include "mc/v1_20_60/biome/components/BiomeComponentVersion.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {

struct ReplaceBiomesBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // ReplaceBiomesBiomeJsonComponent inner types declare
    // clang-format off
    struct BiomeReplacement;
    // clang-format on

    // ReplaceBiomesBiomeJsonComponent inner types define
    struct BiomeReplacement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                              mDimension;
        ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Reference<3>>> mTargetBiomes;
        ::ll::TypedStorage<4, 4, float>                                       mAmount;
        ::ll::TypedStorage<4, 4, float>                                       mNoiseFrequencyScale;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeReplacement(BiomeReplacement const&);
        BiomeReplacement();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement&
        operator=(::SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement&&);

        MCAPI ::SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement&
        operator=(::SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement const&);

        MCAPI ~BiomeReplacement();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement>>
        mBiomeReplacements;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BiomeComponentVersion getType() const /*override*/;

    virtual ~ReplaceBiomesBiomeJsonComponent() /*override*/ = default;
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

} // namespace SharedTypes::v1_21_80
