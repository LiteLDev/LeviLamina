#pragma once

#include <string>

#include "ll/api/base/Macro.h"

namespace ll::io {

class StdoutRedirector {

public:
    enum ProcessChannel { StandardOutput = 1, StandardError = 2 };

    LLNDAPI explicit StdoutRedirector(
        internal::FileHandleT outputHandle,
        ProcessChannel        channels = (ProcessChannel)(StandardOutput | StandardError)
    );

    LLAPI ~StdoutRedirector();

private:
    int oldStdout{-1};
    int oldStderr{-1};
};
} // namespace ll::io
