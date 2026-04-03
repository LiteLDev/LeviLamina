#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/biome/BiomeComponents.h"
#include "mc/deps/shared_types/v1_21_110/biome/BiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

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
        ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_110::BiomeComponents> mComponents;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeJsonObject(BiomeJsonObject const&);
        BiomeJsonObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::SharedTypes::v1_21_120::BiomeJsonDocument::BiomeJsonObject&
        operator=(::SharedTypes::v1_21_120::BiomeJsonDocument::BiomeJsonObject&&);

        MCFOLD ::SharedTypes::v1_21_120::BiomeJsonDocument::BiomeJsonObject&
        operator=(::SharedTypes::v1_21_120::BiomeJsonDocument::BiomeJsonObject const&);

        MCAPI ~BiomeJsonObject();
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
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::SharedTypes::v1_21_120::BiomeJsonDocument::BiomeJsonObject> mBiomeJsonObject;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mFormatVersion;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
