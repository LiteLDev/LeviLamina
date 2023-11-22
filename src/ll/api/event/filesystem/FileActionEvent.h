#pragma once

#include <filesystem>
#include <utility>

#include "ll/api/base/FixedString.h"
#include "ll/api/event/Event.h"
#include "ll/api/event/Listener.h"

namespace ll::event {
namespace detail {
class FileWatch;
class FileActionEmitter : public Emitter {
    std::unique_ptr<FileWatch> watcher;

public:
    LLAPI explicit FileActionEmitter(std::string const& path);
    ~FileActionEmitter() override;
};
} // namespace detail


enum class FileActionType {
    Added = 1,
    Removed,
    Modified,
    RenamedOld,
    RenamedNew,
};

class FileActionEventBase : public Event {
public:
    std::filesystem::path const path;
    FileActionType const        type;

    FileActionEventBase(std::filesystem::path p, FileActionType e) : path(std::move(p)), type(e) {}
};
class DynamicFileActionEvent : public FileActionEventBase {};

template <FixedString WatchedPath>
class FileActionEvent : public FileActionEventBase {
    static constexpr auto CustomIdOwn{
        FixedString<ll::reflection::type_name_v<FileActionEvent>.size()>{ll::reflection::type_name_v<FileActionEvent>}
        + FixedString{"|"} + WatchedPath
    };

public:
    static constexpr EventId CustomEventId{CustomIdOwn};
};

template <>
class Listener<FileActionEventBase> {}; // avoid to listen FileActionEventBase

template <FixedString WatchedPath>
class Listener<FileActionEvent<WatchedPath>> : public ListenerBase {
public:
    using EventType = FileActionEvent<WatchedPath>;
    using Callback  = std::function<void(EventType&)>;

    explicit Listener(Callback const& fn, EventPriority priority = EventPriority::Normal)
    : ListenerBase(priority),
      callback(fn) {}

    ~Listener() override = default;

    void call(Event& event) override { callback(static_cast<EventType&>(event)); }

    std::unique_ptr<Emitter> getEmitter() override { return std::make_unique<detail::FileActionEmitter>(WatchedPath); }

    static std::shared_ptr<Listener> create(Callback const& fn, EventPriority priority = EventPriority::Normal) {
        return std::make_shared<Listener>(fn, priority);
    }

private:
    Callback callback;
};

template <>
class Listener<DynamicFileActionEvent> : public ListenerBase {
public:
    using EventType = DynamicFileActionEvent;
    using Callback  = std::function<void(EventType&)>;

    explicit Listener(std::string const& path, Callback fn, EventPriority priority = EventPriority::Normal)
    : ListenerBase(priority),
      callback(std::move(fn)),
      path(path) {
        nativeId.assign(ll::reflection::type_name_v<FileActionEvent<"">>);
        nativeId += "|";
        nativeId += path;
    }

    [[nodiscard]] EventId getEventId() const { return EventId{nativeId}; }

    ~Listener() override = default;

    void call(Event& event) override { callback(static_cast<EventType&>(event)); }

    std::unique_ptr<Emitter> getEmitter() override { return std::make_unique<detail::FileActionEmitter>(path); }

    static std::shared_ptr<Listener>
    create(std::string const& path, Callback const& fn, EventPriority priority = EventPriority::Normal) {
        return std::make_shared<Listener>(path, fn, priority);
    }

private:
    Callback    callback;
    std::string path;
    std::string nativeId;
};
} // namespace ll::event
