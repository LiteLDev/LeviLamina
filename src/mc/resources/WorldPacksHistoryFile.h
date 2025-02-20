#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    MCAPI ::WorldPacksHistoryFile::ParseResult initializeFromJson(::Json::Value const& value);

    MCAPI void removePack(::PackIdVersion const& packId);

    MCAPI ~WorldPacksHistoryFile();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
