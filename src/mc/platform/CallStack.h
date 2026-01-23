#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/diagnostics/LogAreaID.h"
#include "mc/platform/diagnostics/LogLevel.h"

namespace Bedrock {

struct CallStack {
public:
    // CallStack inner types declare
    // clang-format off
    struct Context;
    struct Frame;
    struct FrameWithContext;
    // clang-format on

    // CallStack inner types define
    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::std::string                        mValue;
        ::std::optional<::Bedrock::LogLevel> mLogLevel;
        ::std::optional<::LogAreaID>         mLogArea;
        // NOLINTEND
    };

    struct Frame {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>              mFilenameHash;
        ::ll::TypedStorage<8, 16, ::std::string_view> mFilename;
        ::ll::TypedStorage<4, 4, uint>                mLine;
        // NOLINTEND
    };

    struct FrameWithContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::Bedrock::CallStack::Frame                    mFrame;
        ::std::optional<::Bedrock::CallStack::Context> mContext;
        // NOLINTEND

    public:
        FrameWithContext& operator=(FrameWithContext const&) = default;
        FrameWithContext(FrameWithContext const&)            = default;

        // prevent constructor by default
        FrameWithContext();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI FrameWithContext(::Bedrock::CallStack::FrameWithContext&&);

        MCAPI
        FrameWithContext(::Bedrock::CallStack::Frame&& frame, ::std::optional<::Bedrock::CallStack::Context>&& context);

        MCAPI ~FrameWithContext();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Bedrock::CallStack::FrameWithContext&&);

        MCAPI void*
        $ctor(::Bedrock::CallStack::Frame&& frame, ::std::optional<::Bedrock::CallStack::Context>&& context);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::std::vector<::Bedrock::CallStack::FrameWithContext> mFrames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CallStack(::Bedrock::CallStack&&);

    MCAPI explicit CallStack(::Bedrock::CallStack::FrameWithContext&& frame);

    MCAPI_C ::Bedrock::CallStack& operator=(::Bedrock::CallStack&&);

    MCAPI ~CallStack();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Bedrock::CallStack&&);

    MCAPI void* $ctor(::Bedrock::CallStack::FrameWithContext&& frame);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
