#pragma once

#include <memory>

namespace ll::inline bugfix {
struct ArrayTagBugFix {
    struct Impl;
    std::unique_ptr<Impl> impl;

    void call(bool);
    ArrayTagBugFix();
    ~ArrayTagBugFix();
};


} // namespace ll::inline bugfix
