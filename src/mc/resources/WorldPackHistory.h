#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
namespace Json { class Value; }
namespace mce { class UUID; }
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
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI WorldPackHistory();
#endif

    MCNAPI WorldPackHistory(::WorldPackHistory const&);

    MCNAPI bool initializeFromJson(::Json::Value const& value);

    MCNAPI ::WorldPackHistory& operator=(::WorldPackHistory&&);

#ifdef LL_PLAT_C
    MCNAPI ::WorldPackHistory& operator=(::WorldPackHistory const&);

    MCNAPI void setCanBeRedownloaded(bool canBeRedownloaded);

    MCNAPI void setLocalizedNames(::std::unordered_map<::std::string, ::std::string> localizedMap);

    MCNAPI void setPackIdVersion(::PackIdVersion const& packIdVersion);

    MCNAPI void setSourceUUID(::mce::UUID const& sourceUUID);

    MCNAPI void setSubpackCount(int count);
#endif

    MCNAPI void setUnlocalizedName(::std::string const& unlocalizedName);

    MCNAPI ::Json::Value toJsonValue() const;

    MCNAPI ~WorldPackHistory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif

    MCNAPI void* $ctor(::WorldPackHistory const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
