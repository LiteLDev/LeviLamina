#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ServicePacksConfig;
namespace Json { class Value; }
// clang-format on

struct EDUConfigData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>  mUnkeb0597;
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

public:
    // prevent constructor by default
    EDUConfigData& operator=(EDUConfigData const&);
    EDUConfigData(EDUConfigData const&);
    EDUConfigData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit EDUConfigData(::Json::Value const& config);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::optional<::ServicePacksConfig> parseServicePacks(::Json::Value const& config);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Json::Value const& config);
#endif
    // NOLINTEND
};
