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
                virtual ~BiomeIdentifierReferenceConstraint() /*override*/ = default;
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<3>> mIdentifier;
            // NOLINTEND

        public:
            // prevent constructor by default
            BiomeDescription(BiomeDescription const&);
            BiomeDescription();

        public:
            // member functions
            // NOLINTBEGIN
            MCFOLD ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription&
            operator=(::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription&&);

            MCFOLD ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription&
            operator=(::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription const&);

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
            // prevent constructor by default
            ComponentMap(ComponentMap const&);
            ComponentMap();

        public:
            // member functions
            // NOLINTBEGIN
            MCFOLD ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::ComponentMap&
            operator=(::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::ComponentMap&&);

            MCFOLD ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::ComponentMap&
            operator=(::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::ComponentMap const&);
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
        BiomeJsonObject(BiomeJsonObject const&);
        BiomeJsonObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject&
        operator=(::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject&&);

        MCFOLD ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject&
        operator=(::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject const&);

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
    BiomeJsonDocument();

public:
    // member functions
    // NOLINTBEGIN
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
    MCFOLD void* $ctor(::SharedTypes::v1_21_110::BiomeJsonDocument&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_110::BiomeJsonDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
