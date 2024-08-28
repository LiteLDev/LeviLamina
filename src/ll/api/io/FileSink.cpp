#include "ll/api/io/FileSink.h"

namespace ll::io {
FileSink::FileSink(std::filesystem::path const& path, Polymorphic<Formatter> formatter, std::ios::openmode mode)
: Sink(std::move(formatter)),
  file(path, mode),
  flushLevel(LogLevel::Off) {}

FileSink::~FileSink() = default;

void FileSink::setFormatter(Polymorphic<Formatter> fmter) {
    std::lock_guard lock(mutex);
    formatter = std::move(fmter);
}
void FileSink::append(LogMessageView const& view) {
    std::lock_guard lock(mutex);
    std::string     buffer;
    formatter->format(view, buffer);
    file << buffer;
    if (view.lvl <= flushLevel) {
        file.flush();
    }
}

void FileSink::flush() {
    std::lock_guard lock(mutex);
    file.flush();
}

void FileSink::setFlushLevel(LogLevel level) {
    std::lock_guard lock(mutex);
    flushLevel = level;
}
} // namespace ll::io
