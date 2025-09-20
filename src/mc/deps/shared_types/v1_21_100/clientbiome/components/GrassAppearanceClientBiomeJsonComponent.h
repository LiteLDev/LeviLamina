#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/IClientBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct GrassAppearanceClientBiomeJsonComponent : public ::SharedTypes::v1_21_40::IClientBiomeJsonComponent {
public:
    // GrassAppearanceClientBiomeJsonComponent inner types declare
    // clang-format off
    struct GrassColorMapContainer;
    // clang-format on

    // GrassAppearanceClientBiomeJsonComponent inner types define
    struct GrassColorMapContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk935649;
        // NOLINTEND

    public:
        // prevent constructor by default
        GrassColorMapContainer& operator=(GrassColorMapContainer const&);
        GrassColorMapContainer(GrassColorMapContainer const&);
        GrassColorMapContainer();

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
    ::ll::UntypedStorage<4, 24> mUnkbb1b7c;
    ::ll::UntypedStorage<1, 1>  mUnk7f7add;
    // NOLINTEND

public:
    // prevent constructor by default
    GrassAppearanceClientBiomeJsonComponent& operator=(GrassAppearanceClientBiomeJsonComponent const&);
    GrassAppearanceClientBiomeJsonComponent(GrassAppearanceClientBiomeJsonComponent const&);
    GrassAppearanceClientBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GrassAppearanceClientBiomeJsonComponent() /*override*/ = default;
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
