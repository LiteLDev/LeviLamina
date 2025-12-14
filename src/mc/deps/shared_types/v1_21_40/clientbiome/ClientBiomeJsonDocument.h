#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
            ::ll::UntypedStorage<8, 32> mUnk1510f8;
            // NOLINTEND

        public:
            // prevent constructor by default
            ClientBiomeDescription& operator=(ClientBiomeDescription const&);
            ClientBiomeDescription(ClientBiomeDescription const&);
            ClientBiomeDescription();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription&
            operator=(::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription&&
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

        struct ComponentMap {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 16> mUnkdc4383;
            // NOLINTEND

        public:
            // prevent constructor by default
            ComponentMap& operator=(ComponentMap const&);
            ComponentMap(ComponentMap const&);
            ComponentMap();

        public:
            // static functions
            // NOLINTBEGIN
            MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk28ff8e;
        ::ll::UntypedStorage<8, 16> mUnk87cf34;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientBiomeJsonObject& operator=(ClientBiomeJsonObject const&);
        ClientBiomeJsonObject(ClientBiomeJsonObject const&);
        ClientBiomeJsonObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject&
        operator=(::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject&&);

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
    ::ll::UntypedStorage<8, 48> mUnk81a4c0;
    ::ll::UntypedStorage<8, 32> mUnk7c8a9a;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBiomeJsonDocument& operator=(ClientBiomeJsonDocument const&);
    ClientBiomeJsonDocument(ClientBiomeJsonDocument const&);
    ClientBiomeJsonDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientBiomeJsonDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::SemVersionConstant const& FIRST_VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_40
