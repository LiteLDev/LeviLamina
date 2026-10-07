#pragma once

#include <memory>

namespace ll {
struct PreserveInputLine {
    struct Impl;
    std::unique_ptr<Impl> impl;

    void call(bool);
    PreserveInputLine();

    // Movable because reflection::Dispatcher requires its listener to be movable.
    PreserveInputLine(PreserveInputLine&&) noexcept;
    PreserveInputLine& operator=(PreserveInputLine&&) noexcept;

    ~PreserveInputLine();
};

} // namespace ll
