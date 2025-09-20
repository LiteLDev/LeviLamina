#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { struct ConstraintDescription; }
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
            // BiomeDescription inner types declare
            // clang-format off
            struct BiomeIdentifierReferenceConstraint;
            // clang-format on

            // BiomeDescription inner types define
            struct BiomeIdentifierReferenceConstraint : public ::cereal::Constraint {
            public:
                // virtual functions
                // NOLINTBEGIN
                // vIndex: 0
                virtual void doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const
                    /*override*/;

                // vIndex: 2
                virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

                // vIndex: 1
                virtual ~BiomeIdentifierReferenceConstraint() /*override*/ = default;
                // NOLINTEND

            public:
                // virtual function thunks
                // NOLINTBEGIN
                MCNAPI void $doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const;

                MCNAPI ::cereal::internal::ConstraintDescription $description() const;
                // NOLINTEND

            public:
                // vftables
                // NOLINTBEGIN
                MCNAPI static void** $vftable();
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk1e1bcf;
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
