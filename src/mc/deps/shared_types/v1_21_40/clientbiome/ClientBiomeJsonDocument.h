#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/clientbiome/client_biome_json_document_helper/ComponentMap.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_40 {

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
        struct ComponentMap;
        // clang-format on

        // ClientBiomeJsonObject inner types define
        struct ClientBiomeDescription {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
            // NOLINTEND

        public:
            // prevent constructor by default
            ClientBiomeDescription(ClientBiomeDescription const&);
            ClientBiomeDescription();

        public:
            // member functions
            // NOLINTBEGIN
            MCFOLD ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription&
            operator=(
                ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription&&
            );

            MCFOLD ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription&
            operator=(
                ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription const&
            );

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

        struct ComponentMap : public ::ClientBiomeJsonDocumentHelper::ComponentMap {
        public:
            // prevent constructor by default
            ComponentMap(ComponentMap const&);
            ComponentMap();

        public:
            // member functions
            // NOLINTBEGIN
            MCFOLD ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ComponentMap&
            operator=(::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ComponentMap&&);

            MCFOLD ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ComponentMap&
            operator=(::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ComponentMap const&);
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            32,
            ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription>
            mDescription;
        ::ll::TypedStorage<8, 16, ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ComponentMap>
            mComponents;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientBiomeJsonObject(ClientBiomeJsonObject const&);
        ClientBiomeJsonObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject&
        operator=(::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject&&);

        MCFOLD ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject&
        operator=(::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject const&);

        MCAPI ~ClientBiomeJsonObject();
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
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject>
                                             mClientBiomeJsonObject;
    ::ll::TypedStorage<8, 32, ::std::string> mFormatVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBiomeJsonDocument& operator=(ClientBiomeJsonDocument const&);
    ClientBiomeJsonDocument(ClientBiomeJsonDocument const&);
    ClientBiomeJsonDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ClientBiomeJsonDocument(::SharedTypes::v1_21_40::ClientBiomeJsonDocument&&);

    MCAPI_C ~ClientBiomeJsonDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_C static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD_C void* $ctor(::SharedTypes::v1_21_40::ClientBiomeJsonDocument&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_40
