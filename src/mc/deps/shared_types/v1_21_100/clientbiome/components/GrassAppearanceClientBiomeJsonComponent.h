#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/ClientBiomeGrassColorMap.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/ClientBiomeComponentVersion.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/IClientBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_40 { struct GrassAppearanceClientBiomeJsonComponent; }
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
        ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_40::ClientBiomeGrassColorMap> mColorMap;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        4,
        24,
        ::std::optional<::std::variant<
            ::SharedTypes::Color255RGB,
            ::SharedTypes::v1_21_100::GrassAppearanceClientBiomeJsonComponent::GrassColorMapContainer>>>
                                   mColor;
    ::ll::TypedStorage<1, 1, bool> mGrassIsShaded;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    GrassAppearanceClientBiomeJsonComponent();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBiomeComponentVersion getType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit GrassAppearanceClientBiomeJsonComponent(
        ::SharedTypes::v1_21_40::GrassAppearanceClientBiomeJsonComponent const& old
    );
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_21_40::GrassAppearanceClientBiomeJsonComponent const& old);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ClientBiomeComponentVersion $getType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
