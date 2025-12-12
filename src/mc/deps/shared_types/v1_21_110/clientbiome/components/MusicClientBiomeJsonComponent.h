#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/IClientBiomeJsonComponent.h"
#include "mc/v1_21_40/clientbiome/components/ClientBiomeComponentVersion.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct MusicClientBiomeJsonComponent : public ::SharedTypes::v1_21_40::IClientBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkdeca33;
    ::ll::UntypedStorage<8, 40> mUnk788317;
    ::ll::UntypedStorage<1, 1>  mUnkf649a4;
    // NOLINTEND

public:
    // prevent constructor by default
    MusicClientBiomeJsonComponent& operator=(MusicClientBiomeJsonComponent const&);
    MusicClientBiomeJsonComponent(MusicClientBiomeJsonComponent const&);
    MusicClientBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBiomeComponentVersion getType() const /*override*/;

#ifdef LL_PLAT_S
    virtual ~MusicClientBiomeJsonComponent() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~MusicClientBiomeJsonComponent() /*override*/;
#endif

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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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

} // namespace SharedTypes::v1_21_110
