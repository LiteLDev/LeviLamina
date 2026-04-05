#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/EduConfigPreset.h"

// auto generated forward declare list
// clang-format off
struct DemoConfig;
struct ServicePacksConfig;
namespace Json { class Value; }
// clang-format on

struct EDUConfigData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>  mUnkeb0597;
    ::ll::UntypedStorage<8, 48>  mUnk711d53;
    ::ll::UntypedStorage<4, 20>  mUnk7fb0be;
    ::ll::UntypedStorage<1, 1>   mUnk830bbe;
    ::ll::UntypedStorage<8, 56>  mUnk4a7d55;
    ::ll::UntypedStorage<1, 2>   mUnkf928be;
    ::ll::UntypedStorage<8, 32>  mUnkea7c32;
    ::ll::UntypedStorage<1, 2>   mUnk623f9f;
    ::ll::UntypedStorage<8, 104> mUnk4c22dd;
    ::ll::UntypedStorage<1, 2>   mUnk90e375;
    ::ll::UntypedStorage<1, 2>   mUnkb00840;
    ::ll::UntypedStorage<1, 2>   mUnk847086;
    ::ll::UntypedStorage<8, 24>  mUnk2504bf;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    EDUConfigData& operator=(EDUConfigData const&);
    EDUConfigData(EDUConfigData const&);
    EDUConfigData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    EDUConfigData& operator=(EDUConfigData const&);
    EDUConfigData();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI EDUConfigData(::EDUConfigData&&);

    MCNAPI EDUConfigData(::EDUConfigData const&);

    MCNAPI explicit EDUConfigData(::Json::Value const& config);

    MCNAPI ~EDUConfigData();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::optional<::DemoConfig>
    _parseDemoConfig(::Json::Value const& config, ::EduConfigPreset eduPreset);

    MCNAPI static ::EduConfigPreset _parseEduPreset(::Json::Value const& config);

    MCNAPI static ::std::optional<::ServicePacksConfig> parseServicePacks(::Json::Value const& config);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::EDUConfigData&&);

    MCNAPI void* $ctor(::EDUConfigData const&);

    MCNAPI void* $ctor(::Json::Value const& config);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
