#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ScriptStat;
class ServerLevel;
// clang-format on

class ServerLevelStatCollectors {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkfe1225;
    ::ll::UntypedStorage<8, 368> mUnk247d3f;
    ::ll::UntypedStorage<8, 368> mUnkb921d0;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerLevelStatCollectors& operator=(ServerLevelStatCollectors const&);
    ServerLevelStatCollectors(ServerLevelStatCollectors const&);
    ServerLevelStatCollectors();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::ScriptStat>
    _collectEntityCountStats(::Bedrock::NotNullNonOwnerPtr<::ServerLevel> serverLevel, uint64, uint64, uint64);

    MCNAPI ::std::optional<::ScriptStat> _collectLoadedChunkStats(
        ::Bedrock::NotNullNonOwnerPtr<::ServerLevel> serverLevel,
        uint64                                       currentTick,
        uint64,
        uint64
    );
    // NOLINTEND
};
