#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
        ::ll::UntypedStorage<8, 32> mUnkf6afd7;
        ::ll::UntypedStorage<8, 24> mUnkb5d95a;
        ::ll::UntypedStorage<4, 4>  mUnk6d510f;
        ::ll::UntypedStorage<4, 4>  mUnkbc3bd5;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeReplacement& operator=(BiomeReplacement const&);
        BiomeReplacement(BiomeReplacement const&);
        BiomeReplacement();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement&
        operator=(::SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement&&);

        MCNAPI ~BiomeReplacement();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc4ee2a;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplaceBiomesBiomeJsonComponent& operator=(ReplaceBiomesBiomeJsonComponent const&);
    ReplaceBiomesBiomeJsonComponent(ReplaceBiomesBiomeJsonComponent const&);
    ReplaceBiomesBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BiomeComponentVersion getType() const /*override*/;

    virtual ~ReplaceBiomesBiomeJsonComponent() /*override*/ = default;
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

} // namespace SharedTypes::v1_21_80
