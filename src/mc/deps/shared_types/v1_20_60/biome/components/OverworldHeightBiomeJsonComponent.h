#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#include "mc/v1_20_60/biome/components/BiomeComponentVersion.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct OverworldHeightBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // OverworldHeightBiomeJsonComponent inner types define
    enum class NoiseType : int {
        Default        = 0,
        DefaultMutated = 1,
        River          = 2,
        Ocean          = 3,
        DeepOcean      = 4,
        Lowlands       = 5,
        Taiga          = 6,
        Mountains      = 7,
        Highlands      = 8,
        Extreme        = 9,
        LessExtreme    = 10,
        Beach          = 11,
        StoneBeach     = 12,
        Mushroom       = 13,
        Swamp          = 14,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk5dffd9;
    ::ll::UntypedStorage<4, 12> mUnk347fbf;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldHeightBiomeJsonComponent& operator=(OverworldHeightBiomeJsonComponent const&);
    OverworldHeightBiomeJsonComponent(OverworldHeightBiomeJsonComponent const&);
    OverworldHeightBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BiomeComponentVersion getType() const /*override*/;

    virtual ~OverworldHeightBiomeJsonComponent() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BiomeComponentVersion $getType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
