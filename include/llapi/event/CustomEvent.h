#pragma once

#include "llapi/event/Event.h"

namespace ll::event {

/**
 * @brief Custom event interface.
 * @usage You should inherit this class and implement the abstract methods.
 * @warning Don't add any virtual methods while inheriting this class.
 * This may cause ABI incompatibility if event api expands.
 */
class CustomEvent : public Event<CustomEvent> {
public:
    virtual ~CustomEvent() = default;

    [[nodiscard]] virtual int32_t getApiVersion() const = 0;

    [[nodiscard]] virtual ll::Plugin getPlugin() const = 0;

    [[nodiscard]] virtual std::string getEventName() const = 0;

    [[nodiscard]] virtual void* getContentPtr() const = 0;

    constexpr static int32_t CURRENT_CUSTOM_EVENT_API_VERSION = 1;

    template <class ContentType>
    inline ContentType* getContent() {
        return reinterpret_cast<ContentType*>(getContentPtr());
    }
};
} // namespace ll::event
