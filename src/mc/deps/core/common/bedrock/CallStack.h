#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { enum class LogLevel; }
// clang-format on

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
        Context& operator=(Context const&) = delete;
        Context(Context const&)            = delete;
        Context()                          = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ??0Context\@CallStack\@Bedrock\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@W4LogLevel\@Bedrock\@\@\@4\@V?$optional\@I\@4\@\@Z
         */
        MCAPI Context(std::string, std::optional<enum class Bedrock::LogLevel>, std::optional<unsigned int>);
        /**
         * @symbol ??1Context\@CallStack\@Bedrock\@\@QEAA\@XZ
         */
        MCAPI ~Context();
        // NOLINTEND
    };

    struct Frame {

    public:
        // prevent constructor by default
        Frame& operator=(Frame const&) = delete;
        Frame(Frame const&)            = delete;
        Frame()                        = delete;
    };

    struct FrameWithContext {

    public:
        char filler[80];                             = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ??0FrameWithContext\@CallStack\@Bedrock\@\@QEAA\@$$QEAUFrame\@12\@$$QEAV?$optional\@UContext\@CallStack\@Bedrock\@\@\@std\@\@\@Z
         */
        MCAPI FrameWithContext(struct Bedrock::CallStack::Frame&&, std::optional<struct Bedrock::CallStack::Context>&&);
        /**
         * @symbol ??1FrameWithContext\@CallStack\@Bedrock\@\@QEAA\@XZ
         */
        MCAPI ~FrameWithContext();
        // NOLINTEND
    };

public:
    std::vector<Bedrock::CallStack::FrameWithContext> vector;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CallStack\@Bedrock\@\@QEAA\@$$QEAUFrameWithContext\@01\@\@Z
     */
    MCAPI CallStack(struct Bedrock::CallStack::FrameWithContext&&);
    /**
     * @symbol ??1CallStack\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~CallStack();
    // NOLINTEND
};

}; // namespace Bedrock
