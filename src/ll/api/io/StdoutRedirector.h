#pragma once

#include <string>

namespace ll::io {

class StdoutRedirector {
public:
    enum ProcessChannel { StandardOutput = 1, StandardError = 2 };

    LLNDAPI explicit StdoutRedirector(
        void*          outputHandle,
        ProcessChannel channels = (ProcessChannel)(StandardOutput | StandardError)
    );

    LLAPI ~StdoutRedirector();

    ProcessChannel m_channels;
    void*          outputHandle;
};
} // namespace ll::io
