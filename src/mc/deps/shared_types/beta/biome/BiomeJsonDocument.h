#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/biome/BiomeComponents.h"
#include "mc/deps/shared_types/beta/eas/EnvironmentAttributesStorage.h"
#include "mc/deps/shared_types/v1_21_110/biome/BiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct BiomeJsonDocument {
public:
    // BiomeJsonDocument inner types declare
    // clang-format off
    struct BiomeJsonObject;
    // clang-format on

    // BiomeJsonDocument inner types define
    struct BiomeJsonObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription>
                                                                        mDescription;
        ::ll::TypedStorage<8, 48, ::SharedTypes::Beta::BiomeComponents> mComponents;
        ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::Beta::EnvironmentAttributesStorage>>
            mEnvironmentAttributes;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeJsonObject& operator=(BiomeJsonObject const&);
        BiomeJsonObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI BiomeJsonObject(::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject const&);

        MCAPI ::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject&
        operator=(::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject&&);

        MCAPI ~BiomeJsonObject();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject> mBiomeJsonObject;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mFormatVersion;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::Beta
