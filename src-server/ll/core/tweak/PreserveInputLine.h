#pragma once

#include <memory>

namespace ll {
struct PreserveInputLine {
    struct Impl;
    std::unique_ptr<Impl> impl;

    void call(bool);
    PreserveInputLine();
    ~PreserveInputLine();
};

} // namespace ll
