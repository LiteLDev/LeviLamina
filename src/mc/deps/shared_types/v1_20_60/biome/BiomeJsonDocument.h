#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct BiomeJsonDocument {
public:
    // BiomeJsonDocument inner types declare
    // clang-format off
    struct BiomeJsonObject;
    // clang-format on

    // BiomeJsonDocument inner types define
    struct BiomeJsonObject {
    public:
        // BiomeJsonObject inner types declare
        // clang-format off
        struct BiomeDescription;
        struct ComponentMap;
        // clang-format on

        // BiomeJsonObject inner types define
        struct BiomeDescription {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk61328d;
            // NOLINTEND

        public:
            // prevent constructor by default
            BiomeDescription(BiomeDescription const&);
            BiomeDescription();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ::SharedTypes::v1_20_60::BiomeJsonDocument::BiomeJsonObject::BiomeDescription&
            operator=(::SharedTypes::v1_20_60::BiomeJsonDocument::BiomeJsonObject::BiomeDescription const&);

            MCNAPI ::SharedTypes::v1_20_60::BiomeJsonDocument::BiomeJsonObject::BiomeDescription&
            operator=(::SharedTypes::v1_20_60::BiomeJsonDocument::BiomeJsonObject::BiomeDescription&&);

            MCNAPI ~BiomeDescription();
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
            ::ll::UntypedStorage<8, 16> mUnkb7f1b5;
            // NOLINTEND

        public:
            // prevent constructor by default
            ComponentMap();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ComponentMap(::SharedTypes::v1_20_60::BiomeJsonDocument::BiomeJsonObject::ComponentMap const&);

            MCNAPI ::SharedTypes::v1_20_60::BiomeJsonDocument::BiomeJsonObject::ComponentMap&
            operator=(::SharedTypes::v1_20_60::BiomeJsonDocument::BiomeJsonObject::ComponentMap const&);
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor(::SharedTypes::v1_20_60::BiomeJsonDocument::BiomeJsonObject::ComponentMap const&);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkb7915e;
        ::ll::UntypedStorage<8, 16> mUnkae0fcb;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeJsonObject(BiomeJsonObject const&);
        BiomeJsonObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SharedTypes::v1_20_60::BiomeJsonDocument::BiomeJsonObject&
        operator=(::SharedTypes::v1_20_60::BiomeJsonDocument::BiomeJsonObject&&);

        MCNAPI ::SharedTypes::v1_20_60::BiomeJsonDocument::BiomeJsonObject&
        operator=(::SharedTypes::v1_20_60::BiomeJsonDocument::BiomeJsonObject const&);

        MCNAPI ~BiomeJsonObject();
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
    ::ll::UntypedStorage<8, 48> mUnkcc348b;
    ::ll::UntypedStorage<8, 32> mUnkcd6b0f;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeJsonDocument& operator=(BiomeJsonDocument const&);
    BiomeJsonDocument(BiomeJsonDocument const&);
    BiomeJsonDocument();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
