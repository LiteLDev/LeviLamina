#pragma once

#include "ll/api/event/Event.h"
#include "ll/api/event/ListenerBase.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event {
class DynamicListener : public ListenerBase {
public:
    using callback_fn = std::function<void(CompoundTag&)>;

    explicit DynamicListener(callback_fn fn, EventPriority priority = EventPriority::Normal)
    : ListenerBase(priority),
      callback(std::move(fn)) {}

    explicit DynamicListener(
        std::string   customFactoryId,
        callback_fn   fn,
        EventPriority priority = EventPriority::Normal
    )
    : customFactoryId(std::move(customFactoryId)),
      ListenerBase(priority),
      callback(std::move(fn)) {}

    ~DynamicListener() override = default;

    void call(Event& event) override {
        CompoundTag data{};
        event.serialize(data);
        data["eventId"] = reflection::getDynamicRawName(event);
        callback(data);
        event.deserialize(data);
    }

    [[nodiscard]] EventId factoryId(EventId eid) const override {
        if (customFactoryId.empty()) {
            return eid;
        }
        return EventId{customFactoryId};
    }

    static std::shared_ptr<DynamicListener> create(callback_fn fn, EventPriority priority = EventPriority::Normal) {
        return std::make_shared<DynamicListener>(std::move(fn), priority);
    }

    static std::shared_ptr<DynamicListener>
    create(std::string customFactoryId, callback_fn fn, EventPriority priority = EventPriority::Normal) {
        return std::make_shared<DynamicListener>(std::move(customFactoryId), std::move(fn), priority);
    }

private:
    callback_fn callback;
    std::string customFactoryId;
};
} // namespace ll::event
