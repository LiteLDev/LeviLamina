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

namespace SharedTypes::v1_21_110 {

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
                // vIndex: 1
                virtual void doValidate(::entt::meta_any const&, ::cereal::SerializerContext&) const /*override*/;

                // vIndex: 3
                virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

                // vIndex: 2
                virtual ~BiomeIdentifierReferenceConstraint() /*override*/ = default;
                // NOLINTEND

            public:
                // virtual function thunks
                // NOLINTBEGIN

                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk16b23f;
            // NOLINTEND

        public:
            // prevent constructor by default
            BiomeDescription& operator=(BiomeDescription const&);
            BiomeDescription(BiomeDescription const&);
            BiomeDescription();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription&
            operator=(::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription&&);

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
            ::ll::UntypedStorage<8, 16> mUnk55192b;
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
        ::ll::UntypedStorage<8, 32> mUnk5ff55f;
        ::ll::UntypedStorage<8, 16> mUnk9b1b1d;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeJsonObject& operator=(BiomeJsonObject const&);
        BiomeJsonObject(BiomeJsonObject const&);
        BiomeJsonObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject&
        operator=(::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject&&);

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
    ::ll::UntypedStorage<8, 48> mUnk35788e;
    ::ll::UntypedStorage<8, 32> mUnkf6b677;
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

} // namespace SharedTypes::v1_21_110
