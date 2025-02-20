#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"

namespace SharedTypes::v1_20_60 {

struct ClimateBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk1b4d75;
    ::ll::UntypedStorage<4, 12> mUnkc82d0c;
    ::ll::UntypedStorage<4, 8>  mUnke3d151;
    ::ll::UntypedStorage<4, 8>  mUnkb612f9;
    ::ll::UntypedStorage<4, 8>  mUnkc6d73b;
    ::ll::UntypedStorage<4, 8>  mUnke85a25;
    ::ll::UntypedStorage<4, 8>  mUnkb541cd;
    // NOLINTEND

public:
    // prevent constructor by default
    ClimateBiomeJsonComponent& operator=(ClimateBiomeJsonComponent const&);
    ClimateBiomeJsonComponent(ClimateBiomeJsonComponent const&);
    ClimateBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClimateBiomeJsonComponent() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
