#pragma once

#include <memory>

#include "ll/api/io/Sink.h"

namespace ll::io {

/// A sink that writes to the console, passing the text through the console output events so it can
/// be observed or cancelled.
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
