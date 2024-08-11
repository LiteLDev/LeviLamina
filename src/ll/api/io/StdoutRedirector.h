#pragma once

#include <string>

#include "ll/api/base/Macro.h"

namespace ll::io {

class StdoutRedirector {
public:
    enum ProcessChannel { StandardOutput = 1, StandardError = 2 };

    LLNDAPI explicit StdoutRedirector(ProcessChannel channels = (ProcessChannel)(StandardOutput | StandardError));

    LLAPI ~StdoutRedirector();

    LLNDAPI std::string read();

    ProcessChannel m_channels;

    void* hRead;
    void* hWrite;
};
} // namespace ll::io
