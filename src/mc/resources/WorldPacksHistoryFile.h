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
    ::ll::UntypedStorage<8, 24> mUnk9d6ee5;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPacksHistoryFile& operator=(WorldPacksHistoryFile const&);
    WorldPacksHistoryFile(WorldPacksHistoryFile const&);
    WorldPacksHistoryFile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::WorldPackHistory const& addPack(::WorldPackHistory const& newWorldPackHistory);

    MCNAPI ::WorldPacksHistoryFile::ParseResult initializeFromJson(::Json::Value const& value);

    MCNAPI void removePack(::PackIdVersion const& packId);

    MCNAPI_C ::Json::Value toJsonValue() const;

    MCNAPI ~WorldPacksHistoryFile();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::WorldPacksHistoryFile const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
