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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_CALLSTACK_CONTEXT
    public:
        Context& operator=(Context const&) = delete;
        Context(Context const&)            = delete;
        Context()                          = delete;
#endif

    public:
        /**
         * @symbol
         * ??0Context\@CallStack\@Bedrock\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@W4LogLevel\@Bedrock\@\@\@4\@V?$optional\@I\@4\@\@Z
         */
        MCAPI
            Context(std::string, class std::optional<enum class Bedrock::LogLevel>, class std::optional<unsigned int>);
        /**
         * @symbol ??1Context\@CallStack\@Bedrock\@\@QEAA\@XZ
         */
        MCAPI ~Context();
    };

    struct Frame {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_CALLSTACK_FRAME
    public:
        Frame& operator=(Frame const&) = delete;
        Frame(Frame const&)            = delete;
        Frame()                        = delete;
#endif

    public:
    };

    struct FrameWithContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_CALLSTACK_FRAMEWITHCONTEXT
    public:
        FrameWithContext& operator=(FrameWithContext const&) = delete;
        FrameWithContext(FrameWithContext const&)            = delete;
        FrameWithContext()                                   = delete;
#endif

    public:
        /**
         * @symbol
         * ??0FrameWithContext\@CallStack\@Bedrock\@\@QEAA\@$$QEAUFrame\@12\@$$QEAV?$optional\@UContext\@CallStack\@Bedrock\@\@\@std\@\@\@Z
         */
        MCAPI
        FrameWithContext(struct Bedrock::CallStack::Frame&&, class std::optional<struct Bedrock::CallStack::Context>&&);
        /**
         * @symbol ??1FrameWithContext\@CallStack\@Bedrock\@\@QEAA\@XZ
         */
        MCAPI ~FrameWithContext();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_CALLSTACK
public:
    CallStack& operator=(CallStack const&) = delete;
    CallStack(CallStack const&)            = delete;
    CallStack()                            = delete;
#endif

public:
    /**
     * @symbol ??0CallStack\@Bedrock\@\@QEAA\@$$QEAUFrameWithContext\@01\@\@Z
     */
    MCAPI CallStack(struct Bedrock::CallStack::FrameWithContext&&);
    /**
     * @symbol ??1CallStack\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~CallStack();
};

}; // namespace Bedrock
