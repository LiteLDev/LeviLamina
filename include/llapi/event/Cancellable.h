#pragma once

namespace ll::event {
/**
 * @brief Cancellable event interface.
 */
class Cancellable {
private:
    bool cancelled = false;

public:
    /**
     * @brief Get if the event is cancelled.
     * @return True if the event is cancelled.
     */
    [[nodiscard]] bool isCancelled() const {
        return cancelled;
    }

    /**
     * @brief Set if the event is cancelled.
     * @param cancelled True if the event is cancelled.
     */
    void setCancelled(bool _cancelled) {
        this->cancelled = _cancelled;
    }

    /**
     * @brief Cancel the event.
     */
    void cancel() {
        cancelled = true;
    }
};
} // namespace ll::event
