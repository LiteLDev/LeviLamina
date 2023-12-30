#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class WorldPacksHistoryFile {
public:
    // WorldPacksHistoryFile inner types define
    enum class ParseResult {};

public:
    // prevent constructor by default
    WorldPacksHistoryFile& operator=(WorldPacksHistoryFile const&);
    WorldPacksHistoryFile(WorldPacksHistoryFile const&);
    WorldPacksHistoryFile();

public:
    // NOLINTBEGIN
    // symbol: ?initializeFromJson@WorldPacksHistoryFile@@QEAA?AW4ParseResult@1@AEBVValue@Json@@@Z
    MCAPI ::WorldPacksHistoryFile::ParseResult initializeFromJson(class Json::Value const& value);

    // NOLINTEND
};
