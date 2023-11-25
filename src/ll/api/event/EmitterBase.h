#pragma once

namespace ll::event {
class EmitterBase {
public:
    EmitterBase()          = default;
    virtual ~EmitterBase() = default;

    EmitterBase(EmitterBase&&)                 = delete;
    EmitterBase(EmitterBase const&)            = delete;
    EmitterBase& operator=(EmitterBase&&)      = delete;
    EmitterBase& operator=(EmitterBase const&) = delete;
};
} // namespace ll::event
