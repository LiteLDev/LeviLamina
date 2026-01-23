#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#include "mc/v1_20_60/biome/components/BiomeComponentVersion.h"
#include "mc/world/level/biome/BiomeTemperatureCategory.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct OverworldGenerationRulesBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // OverworldGenerationRulesBiomeJsonComponent inner types declare
    // clang-format off
    struct WeightedBiomeName;
    struct WeightedTemperatureCategory;
    struct WeightedBiomeNameVector;
    // clang-format on

    // OverworldGenerationRulesBiomeJsonComponent inner types define
    struct WeightedBiomeName {
    public:
        // WeightedBiomeName inner types define
        using ValueArray = ::std::array<::std::variant<::SharedTypes::Reference<3>, uint>, 2>;

        using ValueArrayEntry = ::std::variant<::SharedTypes::Reference<3>, uint>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 80, ::std::array<::std::variant<::SharedTypes::Reference<3>, uint>, 2>> mValues;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~WeightedBiomeName();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct WeightedTemperatureCategory {
    public:
        // WeightedTemperatureCategory inner types define
        using ValueArray = ::std::array<::std::variant<::BiomeTemperatureCategory, uint>, 2>;

        using ValueArrayEntry = ::std::variant<::BiomeTemperatureCategory, uint>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::std::array<::std::variant<::BiomeTemperatureCategory, uint>, 2>> mValues;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND
    };

    struct WeightedBiomeNameVector {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            24,
            ::std::vector<::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeName>>
            mWeightedBiomeNames;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

        MCAPI static void fromVector(
            ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector& instance,
            ::std::vector<::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeName>&
                entries
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>>
        mHillsTransformation;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>>
        mMutateTransformation;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<
            ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedTemperatureCategory>>>
        mGenerateForClimates;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>>
        mRiverTransformation;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>>
        mShoreTransformation;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldGenerationRulesBiomeJsonComponent(OverworldGenerationRulesBiomeJsonComponent const&);
    OverworldGenerationRulesBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BiomeComponentVersion getType() const /*override*/;

    virtual ~OverworldGenerationRulesBiomeJsonComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent&&);

    MCAPI ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent const&);
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
