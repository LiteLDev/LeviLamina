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
    struct Context {
    public:
        // prevent constructor by default
        Context& operator=(Context const&);
        Context(Context const&);
        Context();

    public:
        // NOLINTBEGIN
        MCAPI
        Context(std::string value, std::optional<::Bedrock::LogLevel> logLevel, std::optional<::LogAreaID> logArea);

        MCAPI ~Context();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void*
        ctor$(std::string value, std::optional<::Bedrock::LogLevel> logLevel, std::optional<::LogAreaID> logArea);

        MCAPI void dtor$();

        // NOLINTEND
    };

    struct Frame {
    public:
        // prevent constructor by default
        Frame& operator=(Frame const&);
        Frame(Frame const&);
        Frame();
    };

    struct FrameWithContext {
    public:
        // prevent constructor by default
        FrameWithContext& operator=(FrameWithContext const&);
        FrameWithContext(FrameWithContext const&);
        FrameWithContext();

    public:
        // NOLINTBEGIN
        MCAPI FrameWithContext(
            struct Bedrock::CallStack::Frame&&                  frame,
            std::optional<struct Bedrock::CallStack::Context>&& context
        );

        MCAPI ~FrameWithContext();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void*
        ctor$(struct Bedrock::CallStack::Frame&& frame, std::optional<struct Bedrock::CallStack::Context>&& context);

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CallStack& operator=(CallStack const&);
    CallStack();

public:
    // NOLINTBEGIN
    MCAPI explicit CallStack(std::vector<struct Bedrock::CallStack::FrameWithContext>&& frames);

    MCAPI CallStack(struct Bedrock::CallStack const&);

    MCAPI explicit CallStack(struct Bedrock::CallStack::FrameWithContext&& frame);

    MCAPI ~CallStack();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct Bedrock::CallStack const&);

    MCAPI void* ctor$(struct Bedrock::CallStack::FrameWithContext&& frame);

    MCAPI void* ctor$(std::vector<struct Bedrock::CallStack::FrameWithContext>&& frames);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock
