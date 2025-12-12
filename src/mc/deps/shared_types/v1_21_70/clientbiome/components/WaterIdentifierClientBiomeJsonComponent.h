#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/IClientBiomeJsonComponent.h"
#include "mc/v1_21_40/clientbiome/components/ClientBiomeComponentVersion.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_70 {

struct WaterIdentifierClientBiomeJsonComponent : public ::SharedTypes::v1_21_40::IClientBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb4eb9f;
    // NOLINTEND

public:
    // prevent constructor by default
    WaterIdentifierClientBiomeJsonComponent& operator=(WaterIdentifierClientBiomeJsonComponent const&);
    WaterIdentifierClientBiomeJsonComponent(WaterIdentifierClientBiomeJsonComponent const&);
    WaterIdentifierClientBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBiomeComponentVersion getType() const /*override*/;

    virtual ~WaterIdentifierClientBiomeJsonComponent() /*override*/ = default;
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
    MCNAPI ::ClientBiomeComponentVersion $getType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_70
