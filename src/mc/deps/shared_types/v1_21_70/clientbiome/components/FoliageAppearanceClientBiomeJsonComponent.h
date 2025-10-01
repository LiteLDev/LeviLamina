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

struct FoliageAppearanceClientBiomeJsonComponent : public ::SharedTypes::v1_21_40::IClientBiomeJsonComponent {
public:
    // FoliageAppearanceClientBiomeJsonComponent inner types declare
    // clang-format off
    struct FoliageColorMapContainer;
    // clang-format on

    // FoliageAppearanceClientBiomeJsonComponent inner types define
    struct FoliageColorMapContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkf76a38;
        // NOLINTEND

    public:
        // prevent constructor by default
        FoliageColorMapContainer& operator=(FoliageColorMapContainer const&);
        FoliageColorMapContainer(FoliageColorMapContainer const&);
        FoliageColorMapContainer();

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
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnkd2f05f;
    // NOLINTEND

public:
    // prevent constructor by default
    FoliageAppearanceClientBiomeJsonComponent& operator=(FoliageAppearanceClientBiomeJsonComponent const&);
    FoliageAppearanceClientBiomeJsonComponent(FoliageAppearanceClientBiomeJsonComponent const&);
    FoliageAppearanceClientBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::ClientBiomeComponentVersion getType() const /*override*/;

    // vIndex: 0
    virtual ~FoliageAppearanceClientBiomeJsonComponent() /*override*/ = default;
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
