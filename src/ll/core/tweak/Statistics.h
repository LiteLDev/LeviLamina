#pragma once

#include <memory>

namespace ll {

struct Statistics {
    struct Impl;
    std::unique_ptr<Impl> impl;

    void call(bool);
    Statistics();
    ~Statistics();
};
} // namespace ll
