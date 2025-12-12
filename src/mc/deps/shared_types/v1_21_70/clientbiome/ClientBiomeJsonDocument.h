#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_21_40 { struct ClientBiomeJsonDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_70 {

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
            ::ll::UntypedStorage<8, 16> mUnk717f69;
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
        ::ll::UntypedStorage<8, 32> mUnk48a7d3;
        ::ll::UntypedStorage<8, 16> mUnk158976;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientBiomeJsonObject& operator=(ClientBiomeJsonObject const&);
        ClientBiomeJsonObject(ClientBiomeJsonObject const&);
        ClientBiomeJsonObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SharedTypes::v1_21_70::ClientBiomeJsonDocument::ClientBiomeJsonObject&
        operator=(::SharedTypes::v1_21_70::ClientBiomeJsonDocument::ClientBiomeJsonObject&&);

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
    ::ll::UntypedStorage<8, 48> mUnka940ba;
    ::ll::UntypedStorage<8, 32> mUnkec5e3e;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBiomeJsonDocument& operator=(ClientBiomeJsonDocument const&);
    ClientBiomeJsonDocument(ClientBiomeJsonDocument const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ClientBiomeJsonDocument();

    MCNAPI ~ClientBiomeJsonDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI_C static ::SharedTypes::v1_21_70::ClientBiomeJsonDocument
    upgrade(::SharedTypes::v1_21_40::ClientBiomeJsonDocument oldDocument);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::SemVersionConstant const& FIRST_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_70
