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
        uint64             mFilenameHash;
        ::std::string_view mFilename;
        uint               mLine;
        // NOLINTEND
    };

    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::std::string                        mValue;
        ::std::optional<::Bedrock::LogLevel> mLogLevel;
        ::std::optional<::LogAreaID>         mLogArea;
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
        ::Bedrock::CallStack::Frame                    mFrame;
        ::std::optional<::Bedrock::CallStack::Context> mContext;
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
    ::std::vector<::Bedrock::CallStack::FrameWithContext> mFrames;
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
