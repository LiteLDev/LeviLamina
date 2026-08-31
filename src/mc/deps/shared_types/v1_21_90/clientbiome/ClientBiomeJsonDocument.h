#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_70/clientbiome/ClientBiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_90 {

struct ClientBiomeJsonDocument {
public:
    // ClientBiomeJsonDocument inner types declare
    // clang-format off
    struct ClientBiomeJsonObject;
    // clang-format on

    // ClientBiomeJsonDocument inner types define
    struct ClientBiomeJsonObject {
    public:
        // ClientBiomeJsonObject inner types declare
        // clang-format off
        struct ClientBiomeDescription;
        // clang-format on

        // ClientBiomeJsonObject inner types define
        struct ClientBiomeDescription {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
            // NOLINTEND

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI ~ClientBiomeDescription();
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCFOLD void $dtor();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            32,
            ::SharedTypes::v1_21_90::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription>
            mDescription;
        ::ll::TypedStorage<8, 16, ::SharedTypes::v1_21_70::ClientBiomeJsonDocument::ClientBiomeJsonObject::ComponentMap>
            mComponents;
        // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        ClientBiomeJsonObject(ClientBiomeJsonObject const&);
        ClientBiomeJsonObject();

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD ::SharedTypes::v1_21_90::ClientBiomeJsonDocument::ClientBiomeJsonObject&
        operator=(::SharedTypes::v1_21_90::ClientBiomeJsonDocument::ClientBiomeJsonObject const&);

        MCAPI ~ClientBiomeJsonObject();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_90::ClientBiomeJsonDocument::ClientBiomeJsonObject>
                                             mClientBiomeJsonObject;
    ::ll::TypedStorage<8, 32, ::std::string> mFormatVersion;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ClientBiomeJsonDocument& operator=(ClientBiomeJsonDocument const&);
    ClientBiomeJsonDocument();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ClientBiomeJsonDocument(::SharedTypes::v1_21_90::ClientBiomeJsonDocument const&);

    MCFOLD ::SharedTypes::v1_21_90::ClientBiomeJsonDocument&
    operator=(::SharedTypes::v1_21_90::ClientBiomeJsonDocument&&);

    MCAPI ~ClientBiomeJsonDocument();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void* $ctor(::SharedTypes::v1_21_90::ClientBiomeJsonDocument const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_90
