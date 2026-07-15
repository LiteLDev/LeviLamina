#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
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

public:
    // prevent constructor by default
    WorldPackHistory& operator=(WorldPackHistory const&);
    WorldPackHistory(WorldPackHistory const&);
    WorldPackHistory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool initializeFromJson(::Json::Value const& value);

#ifdef LL_PLAT_C
    MCNAPI void setLocalizedNames(::std::unordered_map<::std::string, ::std::string> localizedMap);

    MCNAPI void setPackIdVersion(::PackIdVersion const& packIdVersion);

    MCNAPI void setUnlocalizedName(::std::string const& unlocalizedName);
#endif

    MCNAPI ::Json::Value toJsonValue() const;

    MCNAPI ~WorldPackHistory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
