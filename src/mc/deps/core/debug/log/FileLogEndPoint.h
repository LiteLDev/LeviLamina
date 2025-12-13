#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogEndPoint.h"

namespace Bedrock {

class FileLogEndPoint : public ::Bedrock::LogEndPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke525a2;
    ::ll::UntypedStorage<8, 32> mUnk5bee7e;
    ::ll::UntypedStorage<8, 32> mUnkc3001d;
    ::ll::UntypedStorage<4, 4>  mUnk6458ea;
    ::ll::UntypedStorage<1, 1>  mUnk3bd3d8;
    ::ll::UntypedStorage<8, 32> mUnkad0c12;
    ::ll::UntypedStorage<8, 80> mUnk7ca66f;
    // NOLINTEND

public:
    // prevent constructor by default
    FileLogEndPoint& operator=(FileLogEndPoint const&);
    FileLogEndPoint(FileLogEndPoint const&);
    FileLogEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileLogEndPoint() /*override*/ = default;

    virtual void log(char const*) /*override*/;

    virtual void flush() /*override*/;

    virtual void setEnabled(bool) /*override*/;

    virtual bool isEnabled() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
