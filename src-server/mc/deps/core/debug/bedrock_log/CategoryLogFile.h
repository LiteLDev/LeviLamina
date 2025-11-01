#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/bedrock_log/LogChannel.h"

namespace BedrockLog {

struct CategoryLogFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk98d468;
    ::ll::UntypedStorage<4, 4> mUnkd3b10f;
    ::ll::UntypedStorage<4, 4> mUnkf08fde;
    // NOLINTEND

public:
    // prevent constructor by default
    CategoryLogFile& operator=(CategoryLogFile const&);
    CategoryLogFile(CategoryLogFile const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddChannel(::BedrockLog::LogChannel channel);

    MCNAPI CategoryLogFile();

    MCNAPI ~CategoryLogFile();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
