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
    // vIndex: 0
    virtual ~FileLogEndPoint() /*override*/;

    // vIndex: 1
    virtual void log(char const*) /*override*/;

    // vIndex: 2
    virtual void flush() /*override*/;

    // vIndex: 3
    virtual void setEnabled(bool enabled) /*override*/;

    // vIndex: 4
    virtual bool isEnabled() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $log(char const*);

    MCAPI void $flush();

    MCAPI void $setEnabled(bool enabled);

    MCAPI bool $isEnabled() const;
    // NOLINTEND
};

} // namespace Bedrock
