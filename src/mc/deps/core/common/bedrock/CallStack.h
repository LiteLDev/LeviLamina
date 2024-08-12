#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/LogLevel.h"
#include "mc/enums/LogAreaID.h"

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
        std::string                        mMessage;
        std::optional<::Bedrock::LogLevel> mLogLevel;
        std::optional<::LogAreaID>         mLogAreaID;

    public:
        // NOLINTBEGIN
        MCAPI Context(std::string value, std::optional<::Bedrock::LogLevel>, std::optional<::LogAreaID> logArea);

        // NOLINTEND
    };

    struct Frame {
    public:
        void* address[3];
    };

    struct FrameWithContext {
    public:
        Frame                  mFrame;
        std::optional<Context> mContext;

    public:
        // NOLINTBEGIN
        MCAPI FrameWithContext(
            struct Bedrock::CallStack::Frame&&                  frame,
            std::optional<struct Bedrock::CallStack::Context>&& context
        );

        // NOLINTEND
    };

public:
    std::vector<Bedrock::CallStack::FrameWithContext> vector;

    CallStack(struct Bedrock::CallStack const&)            = default;
    CallStack& operator=(struct Bedrock::CallStack const&) = default;

public:
    // NOLINTBEGIN
    MCAPI explicit CallStack(std::vector<struct Bedrock::CallStack::FrameWithContext>&& frames);

    MCAPI explicit CallStack(struct Bedrock::CallStack::FrameWithContext&& frame);

    // NOLINTEND
};

}; // namespace Bedrock
