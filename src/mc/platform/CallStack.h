#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/diagnostics/LogLevel.h"

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
    struct Frame {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>              mFilenameHash;
        ::ll::TypedStorage<8, 16, ::std::string_view> mFilename;
        ::ll::TypedStorage<4, 4, uint>                mLine;
        // NOLINTEND
    };

    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                       mValue;
        ::ll::TypedStorage<4, 8, ::std::optional<::Bedrock::LogLevel>> mLogLevel;
        ::ll::TypedStorage<4, 8, ::std::optional<::LogAreaID>>         mLogArea;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Context(::Bedrock::CallStack::Context const&);

        MCAPI Context(
            ::std::string                        value,
            ::std::optional<::Bedrock::LogLevel> logLevel,
            ::std::optional<::LogAreaID>         logArea
        );

        MCAPI ~Context();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Bedrock::CallStack::Context const&);

        MCAPI void*
        $ctor(::std::string value, ::std::optional<::Bedrock::LogLevel> logLevel, ::std::optional<::LogAreaID> logArea);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct FrameWithContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::Bedrock::CallStack::Frame>                    mFrame;
        ::ll::TypedStorage<8, 56, ::std::optional<::Bedrock::CallStack::Context>> mContext;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI
        FrameWithContext(::Bedrock::CallStack::Frame&& frame, ::std::optional<::Bedrock::CallStack::Context>&& context);

        MCAPI ~FrameWithContext();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void*
        $ctor(::Bedrock::CallStack::Frame&& frame, ::std::optional<::Bedrock::CallStack::Context>&& context);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::CallStack::FrameWithContext>> mFrames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CallStack(::Bedrock::CallStack::FrameWithContext&& frame);

    MCAPI explicit CallStack(::std::vector<::Bedrock::CallStack::FrameWithContext>&& frames);

    MCAPI ~CallStack();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::CallStack::FrameWithContext&& frame);

    MCAPI void* $ctor(::std::vector<::Bedrock::CallStack::FrameWithContext>&& frames);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
