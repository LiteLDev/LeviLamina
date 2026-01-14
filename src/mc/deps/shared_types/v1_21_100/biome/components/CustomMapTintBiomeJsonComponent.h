#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#include "mc/v1_20_60/biome/components/BiomeComponentVersion.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CustomMapTintBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // CustomMapTintBiomeJsonComponent inner types declare
    // clang-format off
    struct GrassNoise;
    struct GrassTint;
    // clang-format on

    // CustomMapTintBiomeJsonComponent inner types define
    enum class GrassType : int {
        Tint  = 0,
        Noise = 1,
    };

    struct GrassNoise {};

    struct GrassTint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mTint;
        // NOLINTEND
    };

    using Grass = ::std::variant<
        ::SharedTypes::v1_21_100::CustomMapTintBiomeJsonComponent::GrassTint,
        ::SharedTypes::v1_21_100::CustomMapTintBiomeJsonComponent::GrassNoise>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        4,
        24,
        ::std::optional<::std::variant<
            ::SharedTypes::v1_21_100::CustomMapTintBiomeJsonComponent::GrassTint,
            ::SharedTypes::v1_21_100::CustomMapTintBiomeJsonComponent::GrassNoise>>>
                                                                           mGrass;
    ::ll::TypedStorage<4, 20, ::std::optional<::SharedTypes::Color255RGB>> mFoliage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BiomeComponentVersion getType() const /*override*/;

    virtual ~CustomMapTintBiomeJsonComponent() /*override*/ = default;
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

} // namespace SharedTypes::v1_21_100
