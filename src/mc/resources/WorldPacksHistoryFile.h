#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WorldPackHistory;
struct PackIdVersion;
namespace Json { class Value; }
// clang-format on

class WorldPacksHistoryFile {
public:
    // WorldPacksHistoryFile inner types define
    enum class ParseResult : int {
        InvalidArrayOfPacks = 0,
        InvalidPack         = 1,
        Success             = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd187cb;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    WorldPacksHistoryFile& operator=(WorldPacksHistoryFile const&);
    WorldPacksHistoryFile(WorldPacksHistoryFile const&);
    WorldPacksHistoryFile();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    WorldPacksHistoryFile& operator=(WorldPacksHistoryFile const&);
    WorldPacksHistoryFile();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI WorldPacksHistoryFile(::WorldPacksHistoryFile const&);

    MCNAPI ::WorldPackHistory const& addPack(::WorldPackHistory const& newWorldPackHistory);
#endif

    MCNAPI ::WorldPacksHistoryFile::ParseResult initializeFromJson(::Json::Value const& value);

#ifdef LL_PLAT_C
    MCNAPI ::WorldPacksHistoryFile& operator=(::WorldPacksHistoryFile&&);
#endif

    MCNAPI void removePack(::PackIdVersion const& packId);

#ifdef LL_PLAT_C
    MCNAPI ::Json::Value toJsonValue() const;
#endif

    MCNAPI ~WorldPacksHistoryFile();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::WorldPacksHistoryFile const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
