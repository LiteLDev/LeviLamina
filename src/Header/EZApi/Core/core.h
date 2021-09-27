#pragma once

#include <string>

namespace Core {

class PathPart {
public:
    std::string data;
};

class Path : public PathPart {
public:
};

template <typename T>
class PathBuffer {
    T value;
      operator T&() noexcept {
        return value;
    }
    operator T const &() const noexcept {
        return value;
    }
};

} // namespace Core