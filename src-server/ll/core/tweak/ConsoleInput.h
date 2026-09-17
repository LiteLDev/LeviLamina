#pragma once

#include <memory>

namespace ll {
struct ConsoleInput {
    struct Impl;
    std::unique_ptr<Impl> impl;

    void call(bool);
    ConsoleInput();
    ~ConsoleInput();
};

} // namespace ll
