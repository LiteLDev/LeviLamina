#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#include "mc/v1_20_60/biome/components/BiomeComponentVersion.h"

namespace SharedTypes::v1_21_110 {

struct BiomeTypeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk88917c;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeTypeJsonComponent& operator=(BiomeTypeJsonComponent const&);
    BiomeTypeJsonComponent(BiomeTypeJsonComponent const&);
    BiomeTypeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BiomeComponentVersion getType() const /*override*/;

    // vIndex: 0
    virtual ~BiomeTypeJsonComponent() /*override*/ = default;
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

    // NOLINTEND

};

}
