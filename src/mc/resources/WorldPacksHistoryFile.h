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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldPacksHistoryFile();

    MCFOLD ::std::vector<::WorldPackHistory> const& getPacks() const;

    MCAPI ::WorldPacksHistoryFile::ParseResult initializeFromJson(::Json::Value const& value);

    MCAPI void removePack(::PackIdVersion const& packId);

    MCAPI ::Json::Value toJsonValue() const;

    MCAPI ~WorldPacksHistoryFile();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
