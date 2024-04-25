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
        // prevent constructor by default
        Context& operator=(Context const&);
        Context(Context const&);
        Context();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0Context@CallStack@Bedrock@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@W4LogLevel@Bedrock@@@4@V?$optional@W4LogAreaID@@@4@@Z
        MCAPI Context(std::string value, std::optional<::Bedrock::LogLevel>, std::optional<::LogAreaID> logArea);

        // symbol: ??1Context@CallStack@Bedrock@@QEAA@XZ
        MCAPI ~Context();

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
        // symbol:
        // ??0FrameWithContext@CallStack@Bedrock@@QEAA@$$QEAUFrame@12@$$QEAV?$optional@UContext@CallStack@Bedrock@@@std@@@Z
        MCAPI FrameWithContext(
            struct Bedrock::CallStack::Frame&&                  frame,
            std::optional<struct Bedrock::CallStack::Context>&& context
        );

        // symbol: ??1FrameWithContext@CallStack@Bedrock@@QEAA@XZ
        MCAPI ~FrameWithContext();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CallStack& operator=(CallStack const&);
    CallStack();

public:
    // NOLINTBEGIN
    // symbol: ??0CallStack@Bedrock@@QEAA@AEBU01@@Z
    MCAPI CallStack(struct Bedrock::CallStack const&);

    // symbol: ??0CallStack@Bedrock@@QEAA@$$QEAUFrameWithContext@01@@Z
    MCAPI explicit CallStack(struct Bedrock::CallStack::FrameWithContext&& frame);

    // symbol: ??1CallStack@Bedrock@@QEAA@XZ
    MCAPI ~CallStack();

    // NOLINTEND
};

}; // namespace Bedrock
