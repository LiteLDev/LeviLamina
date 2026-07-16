#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/eas/EnvironmentAttributesStorage.h"
#include "mc/deps/shared_types/v1_21_130/clientbiome/ClientBiomeJsonDocument.h"
#include "mc/deps/shared_types/v1_21_90/clientbiome/ClientBiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct ClientBiomeJsonDocument {
public:
    // ClientBiomeJsonDocument inner types declare
    // clang-format off
    struct ClientBiomeJsonObject;
    // clang-format on

    // ClientBiomeJsonDocument inner types define
    struct ClientBiomeJsonObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            32,
            ::SharedTypes::v1_21_90::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription>
            mDescription;
        ::ll::
            TypedStorage<8, 16, ::SharedTypes::v1_21_130::ClientBiomeJsonDocument::ClientBiomeJsonObject::ComponentMap>
                mComponents;
        ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::Beta::EnvironmentAttributesStorage>>
            mEnvironmentAttributes;
        // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        ClientBiomeJsonObject();

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ClientBiomeJsonObject(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const&);

        MCAPI ::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject&
        operator=(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject&&);

        MCAPI ::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject&
        operator=(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const&);

        MCAPI bool operator==(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const& other) const;

        MCAPI ~ClientBiomeJsonObject();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI void* $ctor(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const&);
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject>
                                             mClientBiomeJsonObject;
    ::ll::TypedStorage<8, 32, ::std::string> mFormatVersion;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
    // NOLINTEND
};

} // namespace SharedTypes::Beta
