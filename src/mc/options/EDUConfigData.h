#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ServicePacksConfig;
namespace Json { class Value; }
// clang-format on

struct EduConfigData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>  mUnk386714;
    ::ll::UntypedStorage<4, 20>  mUnk39753f;
    ::ll::UntypedStorage<1, 1>   mUnk4e9af0;
    ::ll::UntypedStorage<8, 56>  mUnk27c6e1;
    ::ll::UntypedStorage<1, 2>   mUnkaac0be;
    ::ll::UntypedStorage<8, 32>  mUnke38896;
    ::ll::UntypedStorage<1, 2>   mUnk32355c;
    ::ll::UntypedStorage<8, 104> mUnk3c4b6b;
    ::ll::UntypedStorage<1, 2>   mUnk313b6b;
    ::ll::UntypedStorage<1, 2>   mUnk4cc786;
    ::ll::UntypedStorage<1, 2>   mUnkc7233e;
    ::ll::UntypedStorage<8, 24>  mUnk4c76d1;
    ::ll::UntypedStorage<8, 32>  mUnk290e04;
    // NOLINTEND

public:
    // prevent constructor by default
    EduConfigData& operator=(EduConfigData const&);
    EduConfigData(EduConfigData const&);
    EduConfigData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit EduConfigData(::Json::Value const& config);
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
