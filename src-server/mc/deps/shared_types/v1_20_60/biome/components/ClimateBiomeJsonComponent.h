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

struct ClimateBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk1b4d75;
    ::ll::UntypedStorage<4, 12> mUnkc82d0c;
    ::ll::UntypedStorage<4, 8> mUnke3d151;
    // NOLINTEND

public:
    // prevent constructor by default
    ClimateBiomeJsonComponent& operator=(ClimateBiomeJsonComponent const&);
    ClimateBiomeJsonComponent(ClimateBiomeJsonComponent const&);
    ClimateBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BiomeComponentVersion getType() const /*override*/;

    // vIndex: 0
    virtual ~ClimateBiomeJsonComponent() /*override*/ = default;
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

}
