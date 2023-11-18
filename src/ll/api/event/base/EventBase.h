#pragma once

namespace ll::event {
class EventBase {
protected:
    constexpr EventBase() = default;

public:
    virtual ~EventBase() = default;
};
} // namespace ll::event