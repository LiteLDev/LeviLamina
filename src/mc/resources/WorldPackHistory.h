#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class WorldPackHistory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkf52681;
    ::ll::UntypedStorage<8, 32> mUnk765123;
    ::ll::UntypedStorage<8, 64> mUnk592f5c;
    ::ll::UntypedStorage<4, 4>  mUnk7c24db;
    ::ll::UntypedStorage<1, 1>  mUnke649e8;
    ::ll::UntypedStorage<8, 16> mUnk30ef62;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    WorldPackHistory& operator=(WorldPackHistory const&);
    WorldPackHistory();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    WorldPackHistory& operator=(WorldPackHistory const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI WorldPackHistory();

    MCNAPI WorldPackHistory(::WorldPackHistory&&);
#endif

    MCNAPI WorldPackHistory(::WorldPackHistory const&);

    MCNAPI bool initializeFromJson(::Json::Value const& value);

#ifdef LL_PLAT_C
    MCNAPI void setUnlocalizedName(::std::string const& unlocalizedName);
#endif

    MCNAPI ::Json::Value toJsonValue() const;

    MCNAPI ~WorldPackHistory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::WorldPackHistory&&);
#endif

    MCNAPI void* $ctor(::WorldPackHistory const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
