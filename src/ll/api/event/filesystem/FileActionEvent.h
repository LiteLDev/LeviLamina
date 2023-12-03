#pragma once

#include <filesystem>
#include <utility>

#include "ll/api/event/Emitter.h"
#include "ll/api/event/Event.h"
#include "ll/api/event/Listener.h"

namespace ll::event {
inline namespace fs {
enum class FileActionType {
    Added = 1,
    Removed,
    Modified,
    RenamedOld,
    RenamedNew,
};

class FileActionEvent : public Event {
public:
    std::filesystem::path const path;
    FileActionType const        type;

    FileActionEvent(std::filesystem::path p, FileActionType e) : path(std::move(p)), type(e) {}
};
} // namespace fs

template <>
class Listener<fs::FileActionEvent> : public ListenerBase {
    friend fs::FileActionEvent;

public:
    std::string path;

    using EventType = fs::FileActionEvent;
    using Callback  = std::function<void(EventType&)>;

    explicit Listener(std::string const& path, Callback fn, EventPriority priority = EventPriority::Normal)
    : ListenerBase(priority),
      callback(std::move(fn)),
      path(path) {
        nativeId.assign(event::getEventId<EventType>.name);
        nativeId += "|";
        nativeId += path;
    }

    [[nodiscard]] EventId getEventId() const { return EventId{nativeId}; }

    ~Listener() override = default;

    void call(Event& event) override { callback(dynamic_cast<EventType&>(event)); }

    EventId factoryId(EventId) const override { return event::getEventId<EventType>; }

    static std::shared_ptr<Listener>
    create(std::string const& path, Callback const& fn, EventPriority priority = EventPriority::Normal) {
        return std::make_shared<Listener>(path, fn, priority);
    }

private:
    Callback    callback;
    std::string nativeId;
};
} // namespace ll::event
