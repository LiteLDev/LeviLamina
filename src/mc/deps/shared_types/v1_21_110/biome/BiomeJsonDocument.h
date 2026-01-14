#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/shared_types/util/Identifier.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_20_60 { struct IBiomeJsonComponent; }
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
            struct BiomeIdentifierReferenceConstraint
            : public ::cereal::ConstraintHandle<::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::
                                                    BiomeDescription::BiomeIdentifierReferenceConstraint> {
            public:
                // virtual functions
                // NOLINTBEGIN
                virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

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
            ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<3>> mIdentifier;
            // NOLINTEND

        public:
            // prevent constructor by default
            BiomeDescription& operator=(BiomeDescription const&);
            BiomeDescription(BiomeDescription const&);
            BiomeDescription();

        public:
            // member functions
            // NOLINTBEGIN
            MCFOLD ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription&
            operator=(::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription&&);

            MCAPI ~BiomeDescription();
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

        struct ComponentMap {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<
                8,
                16,
                ::std::map<::std::string, ::std::shared_ptr<::SharedTypes::v1_20_60::IBiomeJsonComponent>>>
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
        ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription>
            mDescription;
        ::ll::TypedStorage<8, 16, ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::ComponentMap>
            mComponents;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeJsonObject& operator=(BiomeJsonObject const&);
        BiomeJsonObject(BiomeJsonObject const&);
        BiomeJsonObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject&
        operator=(::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject&&);

        MCAPI ~BiomeJsonObject();
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
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject> mBiomeJsonObject;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mFormatVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeJsonDocument& operator=(BiomeJsonDocument const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeJsonDocument();

    MCAPI BiomeJsonDocument(::SharedTypes::v1_21_110::BiomeJsonDocument&&);

    MCAPI BiomeJsonDocument(::SharedTypes::v1_21_110::BiomeJsonDocument const&);

    MCAPI ~BiomeJsonDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::SharedTypes::v1_21_110::BiomeJsonDocument&&);

    MCFOLD void* $ctor(::SharedTypes::v1_21_110::BiomeJsonDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
