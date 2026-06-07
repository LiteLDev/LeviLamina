#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/deps/shared_types/shared_types/ColorNormRGB.h"
#include "mc/deps/shared_types/util/Identifier.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
class SemVersionConstant;
struct FogDefinition;
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class FogDefinitionCerealParser {
public:
    // FogDefinitionCerealParser inner types declare
    // clang-format off
    struct FogParametersSrcV0;
    // clang-format on

    // FogDefinitionCerealParser inner types define
    struct FogParametersSrcV0 {
    public:
        // FogParametersSrcV0 inner types declare
        // clang-format off
        struct FogSettings;
        // clang-format on

        // FogParametersSrcV0 inner types define
        struct FogSettings {
        public:
            // FogSettings inner types declare
            // clang-format off
            struct FogDescription;
            struct FogDistanceSetting;
            struct FogInitDistanceSetting;
            struct FogTransitionSetting;
            struct FogVolumetricDensitySetting;
            struct FogVolumetricDensityCollectionSetting;
            struct FogVolumetricMediaCoeffsSetting;
            struct FogVolumetricMediaCoeffsCollectionSetting;
            struct FogVolumetricHenyeyGreensteinGSetting;
            struct FogVolumetricHenyeyGreensteinGCollectionSetting;
            struct FogVolumetricCollectionSetting;
            struct FogWaterDistanceSetting;
            struct FogDistanceCollectionSetting;
            // clang-format on

            // FogSettings inner types define
            struct FogDescription {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<9>> mIdentifier;
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct FogDistanceSetting {
            public:
                // FogDistanceSetting inner types define
                enum class DistanceType : int {
                    Fixed  = 0,
                    Render = 1,
                };

            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<4, 8, ::std::optional<float>> mStart;
                ::ll::TypedStorage<4, 8, ::std::optional<float>> mEnd;
                ::ll::TypedStorage<
                    4,
                    8,
                    ::std::optional<
                        ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting::DistanceType>>
                                                                                       mType;
                ::ll::TypedStorage<4, 20, ::std::optional<::SharedTypes::Color255RGB>> mColor;
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct FogInitDistanceSetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<4, 8, ::std::optional<float>> mStart;
                ::ll::TypedStorage<4, 8, ::std::optional<float>> mEnd;
                ::ll::TypedStorage<
                    4,
                    8,
                    ::std::optional<
                        ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting::DistanceType>>
                                                                                       mType;
                ::ll::TypedStorage<4, 20, ::std::optional<::SharedTypes::Color255RGB>> mColor;
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct FogTransitionSetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<
                    4,
                    48,
                    ::std::optional<
                        ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogInitDistanceSetting>>
                                                                 mInitialFog;
                ::ll::TypedStorage<4, 8, ::std::optional<float>> mMinTransitionPercentage;
                ::ll::TypedStorage<4, 8, ::std::optional<float>> mMidTransitionSeconds;
                ::ll::TypedStorage<4, 8, ::std::optional<float>> mMidTransitionPercentage;
                ::ll::TypedStorage<4, 8, ::std::optional<float>> mMaxTransitionSeconds;
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct FogVolumetricDensitySetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<4, 8, ::std::optional<float>> mMaxDensity;
                ::ll::TypedStorage<1, 2, ::std::optional<bool>>  mUniform;
                ::ll::TypedStorage<4, 8, ::std::optional<float>> mZeroDensityHeight;
                ::ll::TypedStorage<4, 8, ::std::optional<float>> mMaxDensityHeight;
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct FogVolumetricDensityCollectionSetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<
                    4,
                    32,
                    ::std::optional<
                        ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricDensitySetting>>
                    mAir;
                ::ll::TypedStorage<
                    4,
                    32,
                    ::std::optional<
                        ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricDensitySetting>>
                    mWeather;
                ::ll::TypedStorage<
                    4,
                    32,
                    ::std::optional<
                        ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricDensitySetting>>
                    mWater;
                ::ll::TypedStorage<
                    4,
                    32,
                    ::std::optional<
                        ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricDensitySetting>>
                    mLava;
                ::ll::TypedStorage<
                    4,
                    32,
                    ::std::optional<
                        ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricDensitySetting>>
                    mLavaResistance;
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct FogVolumetricMediaCoeffsSetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<4, 20, ::std::optional<::SharedTypes::ColorNormRGB>> mScattering;
                ::ll::TypedStorage<4, 20, ::std::optional<::SharedTypes::ColorNormRGB>> mAbsorption;
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct FogVolumetricMediaCoeffsCollectionSetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<
                    4,
                    44,
                    ::std::optional<
                        ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricMediaCoeffsSetting>>
                    mAir;
                ::ll::TypedStorage<
                    4,
                    44,
                    ::std::optional<
                        ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricMediaCoeffsSetting>>
                    mWater;
                ::ll::TypedStorage<
                    4,
                    44,
                    ::std::optional<
                        ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricMediaCoeffsSetting>>
                    mCloud;
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct FogVolumetricHenyeyGreensteinGSetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<4, 8, ::std::optional<float>> mHenyeyGreensteinG;
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct FogVolumetricHenyeyGreensteinGCollectionSetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<
                    4,
                    12,
                    ::std::optional<::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::
                                        FogVolumetricHenyeyGreensteinGSetting>>
                    mAir;
                ::ll::TypedStorage<
                    4,
                    12,
                    ::std::optional<::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::
                                        FogVolumetricHenyeyGreensteinGSetting>>
                    mWater;
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct FogVolumetricCollectionSetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<
                    4,
                    164,
                    ::std::optional<::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::
                                        FogVolumetricDensityCollectionSetting>>
                    mDensitySettings;
                ::ll::TypedStorage<
                    4,
                    136,
                    ::std::optional<::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::
                                        FogVolumetricMediaCoeffsCollectionSetting>>
                    mMediaCoeffSettings;
                ::ll::TypedStorage<
                    4,
                    28,
                    ::std::optional<::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::
                                        FogVolumetricHenyeyGreensteinGCollectionSetting>>
                    mHenyeyGreensteinGSettings;
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct FogWaterDistanceSetting
            : public ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<
                    4,
                    84,
                    ::std::optional<::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogTransitionSetting>>
                    mTransitionFog;
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct FogDistanceCollectionSetting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<
                    4,
                    48,
                    ::std::optional<::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting>>
                    mAir;
                ::ll::TypedStorage<
                    4,
                    48,
                    ::std::optional<::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting>>
                    mWeather;
                ::ll::TypedStorage<
                    4,
                    132,
                    ::std::optional<
                        ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogWaterDistanceSetting>>
                    mWater;
                ::ll::TypedStorage<
                    4,
                    48,
                    ::std::optional<::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting>>
                    mLava;
                ::ll::TypedStorage<
                    4,
                    48,
                    ::std::optional<::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting>>
                    mLavaResistance;
                ::ll::TypedStorage<
                    4,
                    48,
                    ::std::optional<::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceSetting>>
                    mPowderedSnow;
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
            ::ll::TypedStorage<8, 32, ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDescription>
                mDescription;
            ::ll::TypedStorage<
                4,
                376,
                ::std::optional<
                    ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogDistanceCollectionSetting>>
                mFogDistances;
            ::ll::TypedStorage<
                4,
                332,
                ::std::optional<
                    ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings::FogVolumetricCollectionSetting>>
                mFogVolumetrics;
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
        ::ll::TypedStorage<8, 32, ::std::string>                                                 mFormatVersion;
        ::ll::TypedStorage<8, 744, ::FogDefinitionCerealParser::FogParametersSrcV0::FogSettings> mFogSettings;
        // NOLINTEND

    public:
        // prevent constructor by default
        FogParametersSrcV0& operator=(FogParametersSrcV0 const&);
        FogParametersSrcV0();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI FogParametersSrcV0(::FogDefinitionCerealParser::FogParametersSrcV0 const&);

        MCAPI ::FogDefinitionCerealParser::FogParametersSrcV0&
        operator=(::FogDefinitionCerealParser::FogParametersSrcV0&&);

        MCAPI ~FogParametersSrcV0();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::FogDefinitionCerealParser::FogParametersSrcV0 const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindParameters(::cereal::ReflectionCtx& ctx);

    MCAPI static ::FogDefinition
    convertJsonConfigToFogDefinition(::FogDefinitionCerealParser::FogParametersSrcV0 const& loadedSettings);

    MCAPI static ::Puv::LoadResultAny loadFromString(
        ::cereal::ReflectionCtx const&                     ctx,
        ::std::string const&                               dataJson,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& PAYLOAD_KEY();
    // NOLINTEND
};
