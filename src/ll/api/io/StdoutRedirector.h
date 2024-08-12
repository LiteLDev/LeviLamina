#pragma once

#include <string>

#include "ll/api/io/Pipe.h"

namespace ll::io {

class StdoutRedirector : public Pipe {
public:
    enum ProcessChannel { StandardOutput = 1, StandardError = 2 };

    LLNDAPI explicit StdoutRedirector(ProcessChannel channels = (ProcessChannel)(StandardOutput | StandardError));

    LLAPI ~StdoutRedirector();

    ProcessChannel m_channels;
};
} // namespace ll::io
