#pragma once

#include <memory>

#include "ll/api/io/Sink.h"

namespace ll::io {

class ConsoleSink : public Sink {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI ConsoleSink();

    LLAPI explicit ConsoleSink(Polymorphic<Formatter> formatter);

    LLAPI ~ConsoleSink() override;

    LLAPI void append(LogMessageView const& view) override;
};
} // namespace ll::io
