#pragma once

#include <memory>

namespace ll {

struct Statitics {
    struct Impl;
    std::unique_ptr<Impl> impl;

    void call(bool);
    Statitics();
    ~Statitics();
};
} // namespace ll
