#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"

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

    struct GrassTint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 16> mUnk4c0413;
        // NOLINTEND

    public:
        // prevent constructor by default
        GrassTint& operator=(GrassTint const&);
        GrassTint(GrassTint const&);
        GrassTint();
    };

    struct GrassNoise {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk21a98a;
    ::ll::UntypedStorage<4, 20> mUnke491ab;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomMapTintBiomeJsonComponent& operator=(CustomMapTintBiomeJsonComponent const&);
    CustomMapTintBiomeJsonComponent(CustomMapTintBiomeJsonComponent const&);
    CustomMapTintBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CustomMapTintBiomeJsonComponent() /*override*/ = default;
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
