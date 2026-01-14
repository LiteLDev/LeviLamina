#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/BiomeTypes.h"
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#include "mc/v1_20_60/biome/components/BiomeComponentVersion.h"

namespace SharedTypes::v1_21_110 {

struct BiomeTypeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::BiomeTypes> mBiomeType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BiomeComponentVersion getType() const /*override*/;

    virtual ~BiomeTypeJsonComponent() /*override*/ = default;
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

    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
