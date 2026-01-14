#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_90/clientbiome/ClientBiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_21_110 { struct ClientBiomeJsonDocument; }
namespace SharedTypes::v1_21_40 { struct IClientBiomeJsonComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

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
        struct ComponentMap;
        // clang-format on

        // ClientBiomeJsonObject inner types define
        struct ComponentMap {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<
                8,
                16,
                ::std::map<::std::string, ::std::shared_ptr<::SharedTypes::v1_21_40::IClientBiomeJsonComponent>>>
                mJsonComponents;
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
            ::SharedTypes::v1_21_90::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription>
            mDescription;
        ::ll::
            TypedStorage<8, 16, ::SharedTypes::v1_21_120::ClientBiomeJsonDocument::ClientBiomeJsonObject::ComponentMap>
                mComponents;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientBiomeJsonObject& operator=(ClientBiomeJsonObject const&);
        ClientBiomeJsonObject(ClientBiomeJsonObject const&);
        ClientBiomeJsonObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::SharedTypes::v1_21_120::ClientBiomeJsonDocument::ClientBiomeJsonObject&
        operator=(::SharedTypes::v1_21_120::ClientBiomeJsonDocument::ClientBiomeJsonObject&&);

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
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_120::ClientBiomeJsonDocument::ClientBiomeJsonObject>
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
    MCAPI_C ClientBiomeJsonDocument(::SharedTypes::v1_21_120::ClientBiomeJsonDocument&&);

    MCAPI ~ClientBiomeJsonDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI_C static ::SharedTypes::v1_21_120::ClientBiomeJsonDocument
    upgrade(::SharedTypes::v1_21_110::ClientBiomeJsonDocument oldDocument);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_C static ::SemVersionConstant const& FIRST_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD_C void* $ctor(::SharedTypes::v1_21_120::ClientBiomeJsonDocument&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
