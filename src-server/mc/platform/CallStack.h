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
        // prevent constructor by default
        Context& operator=(Context const&);
        Context(Context const&);
        Context();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Context(::Bedrock::CallStack::Context&&);

        MCNAPI ~Context();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Bedrock::CallStack::Context&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
        MCAPI FrameWithContext(::Bedrock::CallStack::Frame&& frame, ::std::optional<::Bedrock::CallStack::Context>&& context);

        MCAPI ~FrameWithContext();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Bedrock::CallStack::Frame&& frame, ::std::optional<::Bedrock::CallStack::Context>&& context);
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
    MCAPI explicit CallStack(::Bedrock::CallStack::FrameWithContext&& frame);

    MCAPI ~CallStack();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::CallStack::FrameWithContext&& frame);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
