#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
class SemVersionConstant;
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PBRFallbackConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // PBRFallbackConfig inner types declare
    // clang-format off
    struct PBRFallbackConfigSettings;
    // clang-format on

    // PBRFallbackConfig inner types define
    struct PBRFallbackConfigSettings {
    public:
        // PBRFallbackConfigSettings inner types declare
        // clang-format off
        struct PBRFallbackSettings;
        // clang-format on

        // PBRFallbackConfigSettings inner types define
        struct PBRFallbackSettings {
        public:
            // PBRFallbackSettings inner types declare
            // clang-format off
            struct PBRDataMER;
            struct PBRData;
            // clang-format on

            // PBRFallbackSettings inner types define
            struct PBRDataMER {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 16> mUnkfafe13;
                // NOLINTEND

            public:
                // prevent constructor by default
                PBRDataMER& operator=(PBRDataMER const&);
                PBRDataMER(PBRDataMER const&);
                PBRDataMER();
            };

            struct PBRData {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 16> mUnk4db81d;
                // NOLINTEND

            public:
                // prevent constructor by default
                PBRData& operator=(PBRData const&);
                PBRData(PBRData const&);
                PBRData();

            public:
                // static functions
                // NOLINTBEGIN
                MCNAPI static void fromPBRDataMER(
                    ::PBRFallbackConfig::PBRFallbackConfigSettings::PBRFallbackSettings::PBRData&          instance,
                    ::PBRFallbackConfig::PBRFallbackConfigSettings::PBRFallbackSettings::PBRDataMER const& value
                );
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 16> mUnk8317b2;
            ::ll::UntypedStorage<4, 16> mUnk46184a;
            ::ll::UntypedStorage<4, 16> mUnk6f801b;
            ::ll::UntypedStorage<4, 16> mUnk245ab3;
            // NOLINTEND

        public:
            // prevent constructor by default
            PBRFallbackSettings& operator=(PBRFallbackSettings const&);
            PBRFallbackSettings(PBRFallbackSettings const&);
            PBRFallbackSettings();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk2066b2;
        ::ll::UntypedStorage<4, 64> mUnk1f910a;
        // NOLINTEND

    public:
        // prevent constructor by default
        PBRFallbackConfigSettings& operator=(PBRFallbackConfigSettings const&);
        PBRFallbackConfigSettings(PBRFallbackConfigSettings const&);
        PBRFallbackConfigSettings();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PBRFallbackConfigSettings();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
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
    ::ll::UntypedStorage<8, 96> mUnkab4791;
    ::ll::UntypedStorage<8, 24> mUnk332196;
    ::ll::UntypedStorage<8, 8>  mUnk3b226f;
    // NOLINTEND

public:
    // prevent constructor by default
    PBRFallbackConfig& operator=(PBRFallbackConfig const&);
    PBRFallbackConfig(PBRFallbackConfig const&);
    PBRFallbackConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PBRFallbackConfig() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void loadDataSync(::cereal::ReflectionCtx const& ctx, ::ResourcePackManager& resourcePackManager);

    MCNAPI ::Puv::LoadResultAny
    loadFromString(::cereal::ReflectionCtx const& ctx, ::std::string const& pbrFallbackJson);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindPBRFallbackParameters(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& PAYLOAD_KEY();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
