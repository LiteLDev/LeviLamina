#include "ll/core/protocol/DeferredLoginContinuation.h"

#include <utility>

#include "ll/api/protocol/Error.h"

namespace ll::protocol::detail {

DeferredLoginContinuation::DeferredLoginContinuation(ConnectionKey key, std::uint64_t handshakeId)
: mKey(std::move(key)),
  mHandshakeId(handshakeId) {}

DeferredLoginContinuation::~DeferredLoginContinuation() noexcept { cancel(); }

Expected<> DeferredLoginContinuation::consume(std::function<Expected<>()> invoker) {
    State expected = State::Pending;
    if (!mState.compare_exchange_strong(expected, State::Invoking, std::memory_order_acq_rel)) {
        return makeSessionError(SessionErrc::WrongState, "login continuation is not pending");
    }

    try {
        if (!invoker) {
            mState.store(State::Cancelled, std::memory_order_release);
            return makeTransportError(TransportErrc::EndpointGone, "login continuation invoker unavailable");
        }

        auto result = invoker();

        if (!result) {
            mState.store(State::Cancelled, std::memory_order_release);
            return result;
        }

        mState.store(State::Consumed, std::memory_order_release);
        return {};
    } catch (...) {
        mState.store(State::Cancelled, std::memory_order_release);
        return makeExceptionError();
    }
}

bool DeferredLoginContinuation::cancel() noexcept {
    State expected = State::Pending;
    if (!mState.compare_exchange_strong(expected, State::Cancelled, std::memory_order_acq_rel)) return false;

    return true;
}

} // namespace ll::protocol::detail
