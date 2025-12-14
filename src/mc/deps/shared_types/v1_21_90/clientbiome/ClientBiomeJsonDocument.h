#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_21_70 { struct ClientBiomeJsonDocument; }
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
            ::ll::UntypedStorage<8, 32> mUnk31f895;
            // NOLINTEND

        public:
            // prevent constructor by default
            ClientBiomeDescription& operator=(ClientBiomeDescription const&);
            ClientBiomeDescription(ClientBiomeDescription const&);
            ClientBiomeDescription();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ::SharedTypes::v1_21_90::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription&
            operator=(::SharedTypes::v1_21_90::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription&&
            );

            MCNAPI ~ClientBiomeDescription();
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkf999b8;
        ::ll::UntypedStorage<8, 16> mUnk878596;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientBiomeJsonObject& operator=(ClientBiomeJsonObject const&);
        ClientBiomeJsonObject(ClientBiomeJsonObject const&);
        ClientBiomeJsonObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SharedTypes::v1_21_90::ClientBiomeJsonDocument::ClientBiomeJsonObject&
        operator=(::SharedTypes::v1_21_90::ClientBiomeJsonDocument::ClientBiomeJsonObject&&);

        MCNAPI ~ClientBiomeJsonObject();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkf7859c;
    ::ll::UntypedStorage<8, 32> mUnk62e8c9;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBiomeJsonDocument& operator=(ClientBiomeJsonDocument const&);
    ClientBiomeJsonDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ClientBiomeJsonDocument(::SharedTypes::v1_21_90::ClientBiomeJsonDocument const&);

    MCNAPI ~ClientBiomeJsonDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI_C static ::SharedTypes::v1_21_90::ClientBiomeJsonDocument
    upgrade(::SharedTypes::v1_21_70::ClientBiomeJsonDocument oldDocument);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::SemVersionConstant const& FIRST_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::SharedTypes::v1_21_90::ClientBiomeJsonDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_90
